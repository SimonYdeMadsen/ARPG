// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatantAttributeSet.h"
#include "GameplayEffectExtension.h"  // Needed for FGameplayEffectModCallbackData
#include "GASCharacter.h"  // Needed to access AGASCharacter
#include "CombatantAttributeSet.h"
#include "GameplayEffectExtension.h"  // Needed for FGameplayEffectModCallbackData

FGameplayAttribute UCombatantAttributeSet::GetHealthAttribute()
{
    static FGameplayAttribute HealthAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, Health)));
    return HealthAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetMaxHealthAttribute()
{
    static FGameplayAttribute MaxHealthAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, MaxHealth)));
    return MaxHealthAttribute;
}
FGameplayAttribute UCombatantAttributeSet::GetShieldAttribute()
{
	static FGameplayAttribute ShieldAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, Shield)));
	return ShieldAttribute;
}
FGameplayAttribute UCombatantAttributeSet::GetInDamageAttribute()
{
	static FGameplayAttribute InDamageAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, InDamage)));
	return InDamageAttribute;
}



// Override to enforce that Health cannot exceed MaxHealth
void UCombatantAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
    Super::PostGameplayEffectExecute(Data);

    // If a damage package is being sent
    if (Data.EvaluatedData.Attribute == GetInDamageAttribute())
    {
        // Retrieve the damage amount
        FGameplayTag DamageTag = FGameplayTag::RequestGameplayTag(FName("Damage.SetByCaller"));
        float Damage = Data.EffectSpec.GetSetByCallerMagnitude(DamageTag, 0.0f);
        UE_LOG(LogTemp, Warning, TEXT("Damage Applied: %f"), Damage);

        // Process damage (apply to shield or health)
        if (Damage > 0.0f)
        {
            AGASCharacter* Character = Cast<AGASCharacter>(GetOwningActor());
            AActor* DamageInstigator = Data.EffectSpec.GetContext().GetInstigator();
            AActor* DamageCauser = Data.EffectSpec.GetContext().GetEffectCauser();

            FGameplayTagContainer GameplayTagContainer;
            Data.EffectSpec.GetAllAssetTags(GameplayTagContainer);
            
            Character->OnDamageTaken(DamageInstigator, DamageCauser, GameplayTagContainer, Damage);

            float NewShield = GetShield() - Damage;
            if (NewShield > 0.0f)
            {
                SetShield(NewShield);
            }
            else
            {
                SetShield(0.0f);
                float RemainingDamage = -NewShield;
                SetHealth(FMath::Clamp(GetHealth() - RemainingDamage, 0.0f, GetMaxHealth()));

                // Call OnHealthChanged event
                Character->OnHealthChanged(GetHealth(), GetMaxHealth());

                // Handle OnDeath
                if (GetHealth() <= 0)
                {
                    Character->OnDeath(DamageInstigator->GetActorForwardVector());
                }

                
            }
            
            
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Invalid damage value: %f"), Damage);
        }

        // Reset InDamage
        SetInDamage(0.0f);
    }
}


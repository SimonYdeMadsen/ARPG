// Fill out your copyright notice in the Description page of Project Settings.


#include "CombatantAttributeSet.h"
#include "GameplayEffectExtension.h"  // Needed for FGameplayEffectModCallbackData
#include "GASCharacter.h"  // Needed to access AGASCharacter
#include "CombatantAttributeSet.h"
#include "GameplayEffectExtension.h"  // Needed for FGameplayEffectModCallbackData

FGameplayAttribute UCombatantAttributeSet::GetCurrentHealthAttribute()
{
    static FGameplayAttribute CurrentHealthAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, CurrentHealth)));
    return CurrentHealthAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetBaseMaxHealthAttribute()
{
    static FGameplayAttribute MaxHealthAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, BaseMaxHealth)));
    return MaxHealthAttribute;
}


FGameplayAttribute UCombatantAttributeSet::GetIncreasedHealthAttribute()
{
    static FGameplayAttribute IncreasedHealthAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, IncreasedHealth)));
    return IncreasedHealthAttribute;
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

FGameplayAttribute UCombatantAttributeSet::GetFireResistanceAttribute()
{
    static FGameplayAttribute FireResistanceAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, FireResistance)));
    return FireResistanceAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetColdResistanceAttribute()
{
    static FGameplayAttribute ColdResistanceAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, ColdResistance)));
    return ColdResistanceAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetLightningResistanceAttribute()
{
    static FGameplayAttribute LightningResistanceAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, LightningResistance)));
    return LightningResistanceAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetChaosResistanceAttribute()
{
    static FGameplayAttribute ChaosResistanceAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, ChaosResistance)));
    return ChaosResistanceAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetArmourAttribute()
{
    static FGameplayAttribute ArmourAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, Armour)));
    return ArmourAttribute;
}

float UCombatantAttributeSet::GetCurrentHealth() const
{
    return CurrentHealth.GetCurrentValue();
}
void UCombatantAttributeSet::SetCurrentHealth(float Value)
{
    CurrentHealth.SetCurrentValue(Value);
    AGASCharacter* Character = Cast<AGASCharacter>(GetOwningActor());
    Character->TriggerHealthChanged();
}



float UCombatantAttributeSet::GetBaseMaxHealth() const
{
    return BaseMaxHealth.GetCurrentValue();
}
void UCombatantAttributeSet::SetBaseMaxHealth(float Value)
{
    BaseMaxHealth.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetIncreasedHealth() const
{
    return IncreasedHealth.GetCurrentValue();
}
void UCombatantAttributeSet::SetIncreasedHealth(float Value)
{
    IncreasedHealth.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetTotalMaxHealth() const
{
    return GetBaseMaxHealth() * (1 + GetIncreasedHealth()/100);
}


float UCombatantAttributeSet::GetShield() const
{
    return Shield.GetCurrentValue();
}
void UCombatantAttributeSet::SetShield(float Value)
{
    Shield.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetInDamage() const
{
    return InDamage.GetCurrentValue();
}

void UCombatantAttributeSet::SetInDamage(float Value)
{
    InDamage.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetFireResistance() const
{
    return FireResistance.GetCurrentValue();
}

void UCombatantAttributeSet::SetFireResistance(float Value)
{
    FireResistance.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetColdResistance() const
{
    return ColdResistance.GetCurrentValue();
}

void UCombatantAttributeSet::SetColdResistance(float Value)
{
    ColdResistance.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetLightningResistance() const
{
    return LightningResistance.GetCurrentValue();
}

void UCombatantAttributeSet::SetLightningResistance(float Value)
{
    LightningResistance.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetChaosResistance() const
{
    return ChaosResistance.GetCurrentValue();
}

void UCombatantAttributeSet::SetChaosResistance(float Value)
{
    ChaosResistance.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetArmour() const
{
    return Armour.GetCurrentValue();
}

void UCombatantAttributeSet::SetArmour(float Value)
{
    Armour.SetCurrentValue(Value);
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
        

        // Process damage (apply to shield or health)
        if (Damage > 0.0f)
        {
            AGASCharacter* Character = Cast<AGASCharacter>(GetOwningActor());
            AActor* DamageInstigator = Data.EffectSpec.GetContext().GetInstigator();
            AActor* DamageCauser = Data.EffectSpec.GetContext().GetEffectCauser();

            FGameplayTagContainer GameplayTagContainer;
            Data.EffectSpec.GetAllAssetTags(GameplayTagContainer);
            
            Character->DamageTaken.Broadcast(DamageInstigator, DamageCauser, GameplayTagContainer, Damage);


            // Apply mitigation to damage
            UE_LOG(LogTemp, Warning, TEXT("Damage Applied before mitigation: %f"), Damage);
            Damage = ApplyDamageMitigation(Data, GameplayTagContainer, Damage);
            UE_LOG(LogTemp, Warning, TEXT("Damage Applied after mitigation: %f"), Damage);


            float NewShield = GetShield() - Damage;
            if (NewShield > 0.0f)
            {
                SetShield(NewShield);
            }
            else
            {
                SetShield(0.0f);
                float RemainingDamage = -NewShield;
                UE_LOG(LogTemp, Warning, TEXT("Health before hit: %f"), GetCurrentHealth());
                SetCurrentHealth(FMath::Clamp(GetCurrentHealth() - RemainingDamage, 0.0f, GetTotalMaxHealth()));
                UE_LOG(LogTemp, Warning, TEXT("Health after hit: %f"), GetCurrentHealth());
                // Call OnHealthChanged event
                Character->TriggerHealthChanged();

                // Handle OnDeath
                if (GetCurrentHealth() <= 0 && !Character->IsDead)
                {
                    Character->IsDead = true;
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

float UCombatantAttributeSet::ApplyDamageMitigation(const FGameplayEffectModCallbackData& Data, FGameplayTagContainer& GameplayTagContainer, float& Damage)
{
    float Reduction = 0.0f;
    float MitigationSource = 0.0f;

    if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Physical"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Physical damage: %f"), Damage);
        MitigationSource = GetArmourAttribute().GetNumericValue(this);
    }
    else if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Fire"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Fire damage: %f"), Damage);
        MitigationSource = GetFireResistanceAttribute().GetNumericValue(this);
    }
    else if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Cold"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Cold damage: %f"), Damage);
        MitigationSource = GetColdResistanceAttribute().GetNumericValue(this);
    }
    else if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Lightning"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Lightning damage: %f"), Damage);
        MitigationSource = GetLightningResistanceAttribute().GetNumericValue(this);
    }
    else if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Chaos"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Chaos damage: %f"), Damage);
        MitigationSource = GetChaosResistanceAttribute().GetNumericValue(this);
    }

    Reduction = MitigationSource / (MitigationSource + Damage) * Damage;
    return Damage - Reduction;
    
}


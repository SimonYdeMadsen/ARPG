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



FGameplayAttribute UCombatantAttributeSet::GetInDamageAttribute()
{
    static FGameplayAttribute InDamageAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, InDamage)));
    return InDamageAttribute;
}


FGameplayAttribute UCombatantAttributeSet::GetFireTakenAttribute()
{
    static FGameplayAttribute FireTakenAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, FireTaken)));
    return FireTakenAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetColdTakenAttribute()
{
    static FGameplayAttribute ColdTakenAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, ColdTaken)));
    return ColdTakenAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetLightningTakenAttribute()
{
    static FGameplayAttribute LightningTakenAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, LightningTaken)));
    return LightningTakenAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetChaosTakenAttribute()
{
    static FGameplayAttribute ChaosTakenAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, ChaosTaken)));
    return ChaosTakenAttribute;
}

FGameplayAttribute UCombatantAttributeSet::GetPhysicalTakenAttribute()
{
    static FGameplayAttribute PhysicalTakenAttribute(UCombatantAttributeSet::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(UCombatantAttributeSet, PhysicalTaken)));
    return PhysicalTakenAttribute;
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

float UCombatantAttributeSet::GetInDamage() const
{
    return InDamage.GetCurrentValue();
}

void UCombatantAttributeSet::SetInDamage(float Value)
{
    InDamage.SetCurrentValue(Value);
}


float UCombatantAttributeSet::GetFireTaken() const
{
    return FireTaken.GetCurrentValue();
}

void UCombatantAttributeSet::SetFireTaken(float Value)
{
    FireTaken.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetColdTaken() const
{
    return ColdTaken.GetCurrentValue();
}

void UCombatantAttributeSet::SetColdTaken(float Value)
{
    ColdTaken.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetLightningTaken() const
{
    return LightningTaken.GetCurrentValue();
}

void UCombatantAttributeSet::SetLightningTaken(float Value)
{
    LightningTaken.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetChaosTaken() const
{
    return ChaosTaken.GetCurrentValue();
}

void UCombatantAttributeSet::SetChaosTaken(float Value)
{
    ChaosTaken.SetCurrentValue(Value);
}

float UCombatantAttributeSet::GetPhysicalTaken() const
{
    return PhysicalTaken.GetCurrentValue();
}

void UCombatantAttributeSet::SetPhysicalTaken(float Value)
{
    PhysicalTaken.SetCurrentValue(Value);
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
            
            float ExcessDamage = AddShieldCurrent(-Damage);
            if (ExcessDamage > 0.001f) 
            {
                UE_LOG(LogTemp, Warning, TEXT("Health before hit: %f"), GetCurrentHealth());
                SetCurrentHealth(FMath::Clamp(GetCurrentHealth() - ExcessDamage, 0.0f, GetTotalMaxHealth()));
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
    float DamageMultiplier = 0.0f;

    if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Physical"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Physical damage: %f"), Damage);
        DamageMultiplier = GetPhysicalTakenAttribute().GetNumericValue(this);
    }
    else if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Fire"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Fire damage: %f"), Damage);
        DamageMultiplier = GetFireTakenAttribute().GetNumericValue(this);
    }
    else if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Cold"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Cold damage: %f"), Damage);
        DamageMultiplier = GetColdTakenAttribute().GetNumericValue(this);
    }
    else if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Lightning"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Lightning damage: %f"), Damage);
        DamageMultiplier = GetLightningTakenAttribute().GetNumericValue(this);
    }
    else if (GameplayTagContainer.HasTag(FGameplayTag::RequestGameplayTag(FName("Damage.Type.Chaos"))))
    {
        UE_LOG(LogTemp, Warning, TEXT("Chaos damage: %f"), Damage);
        DamageMultiplier = GetChaosTakenAttribute().GetNumericValue(this);
    }

    

    return Damage * (DamageMultiplier / 100);
    
}


float UCombatantAttributeSet::AddShieldCurrent(float Addition)
{
    Addition += ShieldAddedBuff.GetCurrentValue();
    float NonNegativeBuffedShield = GetCurrentShield() + Addition;
    float ExcessDamage = 0;
    if (NonNegativeBuffedShield < 0)
    {
        ExcessDamage = abs(NonNegativeBuffedShield);
        NonNegativeBuffedShield = 0;
    }
    ShieldCurrent.SetCurrentValue(NonNegativeBuffedShield);
    ShieldSnapshot.SetCurrentValue(NonNegativeBuffedShield);
    ShieldTimeOfLastAddition.SetCurrentValue(GetWorld()->GetTimeSeconds());

    AGASCharacter* Character = Cast<AGASCharacter>(GetOwningActor());
    Character->EnergyShieldChanged.Broadcast();
    UE_LOG(LogTemp, Warning, TEXT("Returning excess damage: %f"), ExcessDamage);

    return ExcessDamage;
}

float UCombatantAttributeSet::GetCurrentShield()
{
    float current = ShieldCurrent.GetCurrentValue();

    if (current > 10)
    {
        float timeSinceLastUpdate = GetWorld()->GetTimeSeconds() - ShieldTimeOfLastAddition.GetCurrentValue();
        float base = 1 - ShieldDecayRate.GetCurrentValue();
        current = pow(base, timeSinceLastUpdate) * ShieldSnapshot.GetCurrentValue();
        ShieldCurrent.SetCurrentValue(current);
        return current;
    }
    else
    {
        if (current >= 1)
        {
            // This step is nonsense, because it scales with calls to Get
            current -= 0.6;
            ShieldCurrent.SetCurrentValue(current);
            return current;
        }
        else
        {
            // Call energy shield depleted?
            ShieldCurrent.SetCurrentValue(0);
            return 0;
        }
    }
}

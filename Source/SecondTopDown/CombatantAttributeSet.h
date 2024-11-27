#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "GameplayTagContainer.h"
#include "CombatantAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class SECONDTOPDOWN_API UCombatantAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetCurrentHealthAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetIncreasedHealthAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetBaseMaxHealthAttribute();


    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetInDamageAttribute();



    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetFireTakenAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetColdTakenAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetLightningTakenAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetChaosTakenAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetPhysicalTakenAttribute();



    // Existing getters and setters
    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetTotalMaxHealth() const;

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetCurrentHealth() const;
    void SetCurrentHealth(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetBaseMaxHealth() const;
    void SetBaseMaxHealth(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetIncreasedHealth() const;
    void SetIncreasedHealth(float Value);


    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetInDamage() const;
    void SetInDamage(float Value);


    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetFireTaken() const;
    void SetFireTaken(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetColdTaken() const;
    void SetColdTaken(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetLightningTaken() const;
    void SetLightningTaken(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetChaosTaken() const;
    void SetChaosTaken(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetPhysicalTaken() const;
    void SetPhysicalTaken(float Value);


    // Energy Shield variables
    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetCurrentShield();
    float AddShieldCurrent(float Addition);



    // Override to enforce rules like limiting Health to MaxHealth
    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

private:
    
    
    UPROPERTY()
    FGameplayAttributeData BaseMaxHealth;

    UPROPERTY()
    FGameplayAttributeData IncreasedHealth;

    UPROPERTY()
    FGameplayAttributeData CurrentHealth;


    UPROPERTY()
    FGameplayAttributeData InDamage;


    UPROPERTY()
    FGameplayAttributeData FireTaken = 100;

    UPROPERTY()
    FGameplayAttributeData ColdTaken = 100;

    UPROPERTY()
    FGameplayAttributeData LightningTaken = 100;

    UPROPERTY()
    FGameplayAttributeData ChaosTaken = 100;

    UPROPERTY()
    FGameplayAttributeData PhysicalTaken = 100;


    float ApplyDamageMitigation(const FGameplayEffectModCallbackData& Data, FGameplayTagContainer& GameplayTagContainer, float& Damage);


    // Energy Shield variables
    UPROPERTY()
    FGameplayAttributeData ShieldCurrent;
    UPROPERTY()
    FGameplayAttributeData ShieldAddedBuff;
    UPROPERTY()
    FGameplayAttributeData ShieldTimeOfLastAddition;
    UPROPERTY()
    FGameplayAttributeData ShieldDecayRate = 0.2;
    UPROPERTY()
    FGameplayAttributeData ShieldSnapshot;

};
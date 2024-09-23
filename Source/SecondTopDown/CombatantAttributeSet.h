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
    static FGameplayAttribute GetShieldAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetInDamageAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetFireResistanceAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetColdResistanceAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetLightningResistanceAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetChaosResistanceAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetArmourAttribute();

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
    float GetShield() const;
    void SetShield(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetInDamage() const;
    void SetInDamage(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetFireResistance() const;
    void SetFireResistance(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetColdResistance() const;
    void SetColdResistance(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetLightningResistance() const;
    void SetLightningResistance(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetChaosResistance() const;
    void SetChaosResistance(float Value);

    UFUNCTION(BlueprintPure, Category = "Attributes")
    float GetArmour() const;
    void SetArmour(float Value);

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
    FGameplayAttributeData Shield;

    UPROPERTY()
    FGameplayAttributeData InDamage;

    UPROPERTY()
    FGameplayAttributeData FireResistance;

    UPROPERTY()
    FGameplayAttributeData ColdResistance;

    UPROPERTY()
    FGameplayAttributeData LightningResistance;

    UPROPERTY()
    FGameplayAttributeData ChaosResistance;

    UPROPERTY()
    FGameplayAttributeData Armour;


    float ApplyDamageMitigation(const FGameplayEffectModCallbackData& Data, FGameplayTagContainer& GameplayTagContainer, float& Damage);

};
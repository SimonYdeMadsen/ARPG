#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "GameplayTagContainer.h"
#include "CombatantAttributeSet.generated.h"

UCLASS()
class SECONDTOPDOWN_API UCombatantAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetHealthAttribute();

    UFUNCTION(BlueprintPure, Category = "Attributes")
    static FGameplayAttribute GetMaxHealthAttribute();

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
    float GetHealth() const;
    void SetHealth(float Value);

    float GetMaxHealth() const;
    void SetMaxHealth(float Value);

    float GetShield() const;
    void SetShield(float Value);

    float GetInDamage() const;
    void SetInDamage(float Value);

    float GetFireResistance() const;
    void SetFireResistance(float Value);

    float GetColdResistance() const;
    void SetColdResistance(float Value);

    float GetLightningResistance() const;
    void SetLightningResistance(float Value);

    float GetChaosResistance() const;
    void SetChaosResistance(float Value);

    float GetArmour() const;
    void SetArmour(float Value);

    // Override to enforce rules like limiting Health to MaxHealth
    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

private:
    UPROPERTY()
    FGameplayAttributeData Health;

    UPROPERTY()
    FGameplayAttributeData MaxHealth;

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
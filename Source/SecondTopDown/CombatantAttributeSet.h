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


    // Attributes
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    FGameplayAttributeData Health;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    FGameplayAttributeData MaxHealth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    FGameplayAttributeData InDamage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    FGameplayAttributeData Shield;

    // Static Getters for attributes
    static FGameplayAttribute GetShieldAttribute();
    static FGameplayAttribute GetHealthAttribute();
    static FGameplayAttribute GetMaxHealthAttribute();
    static FGameplayAttribute GetInDamageAttribute();


    // Override to enforce rules like limiting Health to MaxHealth
    virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

protected: 
    // Getters and Setters
    float GetShield() const { return Shield.GetCurrentValue(); }
    void SetShield(float Value) { Shield.SetCurrentValue(Value); }

    float GetHealth() const { return Health.GetCurrentValue(); }
    void SetHealth(float Value) { Health.SetCurrentValue(Value); }

    float GetMaxHealth() const { return MaxHealth.GetCurrentValue(); }
    void SetMaxHealth(float Value) { MaxHealth.SetCurrentValue(Value); }

    float GetInDamage() const { return InDamage.GetCurrentValue(); }
    void SetInDamage(float Value) { InDamage.SetCurrentValue(Value); }
};
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"  // Include for the interface
#include "GameplayTags.h" // Include Gameplay Tags header
#include "AbilitySystemComponent.h"
#include "GameplayEffectExtension.h"  // For handling gameplay effects
#include "GASCharacter.generated.h"

class UAbilitySystemComponent;
class UCombatantAttributeSet;

UCLASS()
class SECONDTOPDOWN_API AGASCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGASCharacter();

	// Implement IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Ability System Component for this character
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Abilities")
	UAbilitySystemComponent* AbilitySystemComponent;

	// Attribute Set containing Health, MaxHealth, etc.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attributes")
	UCombatantAttributeSet* AttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	TArray<TSubclassOf<UGameplayAbility>> DefaultAbilities;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	TArray<TSubclassOf<UGameplayEffect>> DefaultAttributes;

	// Called when the character takes damage (Can be implemented in Blueprint)
	UFUNCTION(BlueprintImplementableEvent, Category = "Damage")
	void OnDamageTaken(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayTagContainer& GameplayTagContainer, float Damage);

	// Called when the character's health changes (Can be implemented in Blueprint)
	UFUNCTION(BlueprintImplementableEvent, Category = "Health")
	void OnHealthChanged(float NewHealth, float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent, Category = "Gameplay")
	void OnDeath(const FVector& ImpactVelocity);

private:
	void InitializeAttributes();
};
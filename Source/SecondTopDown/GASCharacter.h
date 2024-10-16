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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDamageTaken, AActor*, DamageInstigator, AActor*, DamageCauser, const FGameplayTagContainer&, GameplayTagContainer, float, Damage);



#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

//UCLASS()
UCLASS(config = Game, Blueprintable, meta = (ShortTooltip = "A character that can interact with the Gameplay Ability System."))
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

	//// Called when the character takes damage (Can be implemented in Blueprint)
	//UFUNCTION(BlueprintImplementableEvent, Category = "Damage")
	//void OnDamageTaken(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayTagContainer& GameplayTagContainer, float Damage);
	//
	UPROPERTY(BlueprintAssignable, Category = "Damage")
	FDamageTaken DamageTaken;

	// Called when the character's health changes (Can be implemented in Blueprint)
	UFUNCTION(BlueprintImplementableEvent, Category = "Health")
	void OnHealthChanged(float CurrentHealth, float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent, Category = "Gameplay")
	void OnDeath(const FVector& ImpactVelocity);

	UFUNCTION(BlueprintCallable, Category = "Event")
	void TriggerHealthChanged();

	// Health
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddCurrentHealth(float AddedHealth);

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddBaseMaxHealth(float AddedHealth);

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddIncreasedHealth(float AddedIncreasedHealth);
	

	// Add Shield
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddShield(float AddedShield);

	// Add In Damage
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddInDamage(float AddedInDamage);

	// Add Fire Resistance
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddFireResistance(float AddedFireResistance);

	// Add Cold Resistance
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddColdResistance(float AddedColdResistance);

	// Add Lightning Resistance
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddLightningResistance(float AddedLightningResistance);

	// Add Chaos Resistance
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddChaosResistance(float AddedChaosResistance);

	// Add Armour
	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void AddArmour(float AddedArmour);

	bool IsDead;
	

private:
	void InitializeAttributes();
};
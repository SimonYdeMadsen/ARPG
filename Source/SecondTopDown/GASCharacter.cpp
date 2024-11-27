// Fill out your copyright notice in the Description page of Project Settings.

#include "GASCharacter.h"
#include "AbilitySystemComponent.h"
#include "CombatantAttributeSet.h"
#include "GameplayEffect.h"


// Sets default values
AGASCharacter::AGASCharacter() : IsDead(false)
{
    
    // Set this character to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create AbilitySystemComponent and attach to the character
    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

    // Create and initialize the AttributeSet
    AttributeSet = CreateDefaultSubobject<UCombatantAttributeSet>(TEXT("AttributeSet"));
}

// Called when the game starts or when spawned
void AGASCharacter::BeginPlay()
{
    Super::BeginPlay();

    InitializeAttributes();
    AttributeSet->SetCurrentHealth(AttributeSet->GetTotalMaxHealth());
    TriggerHealthChanged();
    UE_LOG(LogTemp, Warning, TEXT("Current health now: %f"), AttributeSet->GetCurrentHealth());
}

// Called every frame
void AGASCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AGASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind input actions for abilities here (e.g., ActivateAbility functions)
}

// Implement IAbilitySystemInterface
UAbilitySystemComponent* AGASCharacter::GetAbilitySystemComponent() const
{
    return AbilitySystemComponent;
}



void AGASCharacter::TriggerHealthChanged()
{
    OnHealthChanged(AttributeSet->GetCurrentHealth(), AttributeSet->GetTotalMaxHealth());
}

void AGASCharacter::AddCurrentHealth(float AddedMaxHealth)
{
    AttributeSet->SetCurrentHealth(FMath::Clamp(AttributeSet->GetCurrentHealth() + AddedMaxHealth, 0.0f, AttributeSet->GetTotalMaxHealth()));
    TriggerHealthChanged();
}

void AGASCharacter::AddBaseMaxHealth(float AddedHealth)
{
    AttributeSet->SetBaseMaxHealth(AttributeSet->GetBaseMaxHealth() + AddedHealth);
    TriggerHealthChanged();
}

void AGASCharacter::AddIncreasedHealth(float AddedIncreasedHealth)
{
    AttributeSet->SetIncreasedHealth(AttributeSet->GetIncreasedHealth() + AddedIncreasedHealth);
    TriggerHealthChanged();
    
}


void AGASCharacter::AddInDamage(float AddedInDamage)
{
    AttributeSet->SetInDamage(AttributeSet->GetInDamage() + AddedInDamage);
}

void AGASCharacter::IncreaseFireTaken(float Multiplier)
{
    AttributeSet->SetFireTaken(AttributeSet->GetFireTaken() * Multiplier);
}

void AGASCharacter::IncreaseColdTaken(float Multiplier)
{
    AttributeSet->SetColdTaken(AttributeSet->GetColdTaken() * Multiplier);
}

void AGASCharacter::IncreaseLightningTaken(float Multiplier)
{
    AttributeSet->SetLightningTaken(AttributeSet->GetLightningTaken() * Multiplier);
}

void AGASCharacter::IncreaseChaosTaken(float Multiplier)
{
    AttributeSet->SetChaosTaken(AttributeSet->GetChaosTaken() * Multiplier);
}

void AGASCharacter::IncreasePhysicalTaken(float Multiplier)
{
    AttributeSet->SetPhysicalTaken(AttributeSet->GetPhysicalTaken() * Multiplier);
}

void AGASCharacter::AddShield(float AddedShield)
{
    AttributeSet->AddShieldCurrent(AddedShield); 
}

void AGASCharacter::InitializeAttributes()
{
    if (AbilitySystemComponent && AttributeSet)
    {
        for (TSubclassOf<UGameplayEffect> EffectClass : DefaultAttributes)
        {
            if (EffectClass)
            {
                // Create an instance of the gameplay effect
                UGameplayEffect* EffectInstance = EffectClass.GetDefaultObject();
                if (EffectInstance)
                {
                    // Create a Gameplay Effect Context
                    FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
                    // Create a Gameplay Effect Spec
                    FGameplayEffectSpecHandle EffectSpecHandle = AbilitySystemComponent->MakeOutgoingSpec(EffectClass, 1.0f, EffectContext);

                    if (EffectSpecHandle.IsValid())
                    {
                        FGameplayEffectSpec* EffectSpec = EffectSpecHandle.Data.Get();
                        if (EffectSpec)
                        {
                            // Apply the Gameplay Effect to the Ability System Component
                            AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*EffectSpec);

                            // Use a different name for the local tags variable to avoid hiding
                            //FGameplayTagContainer EffectTags;
                            //EffectSpec->GetAllAssetTags(EffectTags); // Check if this function is available
                            //if (EffectTags.HasTag(FGameplayTag::RequestGameplayTag(FName("YourTagName"))))
                            //{
                            //    // Do something with the tag
                            //}
                        }
                    }
                }
            }
        }
    }
}


// Fill out your copyright notice in the Description page of Project Settings.

#include "GASCharacter.h"
#include "AbilitySystemComponent.h"
#include "CombatantAttributeSet.h"
#include "GameplayEffect.h"


// Sets default values
AGASCharacter::AGASCharacter()
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

    
    // Apply default attributes
    InitializeAttributes();

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
                            FGameplayTagContainer EffectTags;
                            EffectSpec->GetAllAssetTags(EffectTags); // Check if this function is available
                            if (EffectTags.HasTag(FGameplayTag::RequestGameplayTag(FName("YourTagName"))))
                            {
                                // Do something with the tag
                            }
                        }
                    }
                }
            }
        }
    }
}


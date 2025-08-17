// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SphereComponent.h"
#include "AC_Base.generated.h"


UCLASS(Blueprintable)
//ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) 
class SECONDTOPDOWN_API  UAC_Base : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_Base();
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Click")
	float ClickRadius = 64.f;

	//
	UFUNCTION(BlueprintImplementableEvent)
	void OnThisRegister();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	virtual void OnRegister() override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "AIController.h"
#include "AIControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class SECONDTOPDOWN_API AAIControllerBase : public AAIController
{
	GENERATED_BODY()
	
protected: 

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	UAIPerceptionComponent* AIPerception;

	virtual void BeginPlay();
	
	FGenericTeamId TeamId;
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other ) const override;

	

public:
	
	//Constructor
	AAIControllerBase(const FObjectInitializer& ObjectInitializer);



	UPROPERTY(BlueprintReadWrite)
	class AGASCharacter* Agent;


	//UFUNCTION()
	//void OnPerception(AActor* Actor, FAIStimulus Stimulus);

	virtual FGenericTeamId GetGenericTeamId() const override { return TeamId; };

};

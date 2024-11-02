// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllerBase.h"
#include "GASCharacter.h"
#include "Perception/AIPerceptionComponent.h"


AAIControllerBase::AAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	/*AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception"));
	SetPerceptionComponent(*AIPerception);
	AIPerception->bEditableWhenInherited = true;*/
}

//void AAIControllerBase::OnPerception(AActor* Actor, FAIStimulus Stimulus)
//{
//	
//	AGASCharacter* Chr = Cast<AGASCharacter>(Actor);
//	if (Chr == nullptr) return;
//	UE_LOG(LogTemp, Warning, TEXT("PerceptionActivated"));
//	TArray<AActor*> Threats;
//	PerceptionComponent->GetHostileActors(Threats);
//	if (Threats.Num() <= 0) return;
//	const int32 i = Threats.Find(Actor);
//	if (i < 0) return;
//
//	Agent->SetAnimState(Stimulus.WasSuccessfullySensed());
//	SetFocus(Stimulus.WasSuccessfullySensed() ? Chr : nullptr);
//}

void AAIControllerBase::BeginPlay()
{
	Super::BeginPlay();
	/*AGASCharacter* Chr = Cast<AGASCharacter>(GetPawn());
	if (Chr)
	{
		Agent = Chr;
		TeamId = FGenericTeamId(Agent->ID);
	}
	*/
}



ETeamAttitude::Type AAIControllerBase::GetTeamAttitudeTowards(const AActor& Other) const
{
	const APawn* OtherPawn = Cast<APawn>(&Other);
	if (OtherPawn == nullptr) return ETeamAttitude::Neutral;

	UE_LOG(LogTemp, Warning, TEXT("Attitude towards actor"));
	
	auto playerTI = Cast<AGASCharacter>(&Other); // Player doesn't have this inherited controller, so workaround
	class IGenericTeamAgentInterface* botTI = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController());
	if (botTI == nullptr && playerTI == nullptr) return ETeamAttitude::Neutral;
	UE_LOG(LogTemp, Warning, TEXT("not both null"));
	// Get Actor's TeamId
	FGenericTeamId OtherActorTeamId = NULL;
	if (botTI != nullptr) OtherActorTeamId = botTI->GetGenericTeamId();
	if (playerTI != nullptr) OtherActorTeamId = playerTI->GetGenericTeamId(); 

	
	FGenericTeamId ThisId = GetGenericTeamId();
	// Neutral hardcoded
	if (OtherActorTeamId == 254) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Neutral"));
		return ETeamAttitude::Neutral;
	}
	else if (OtherActorTeamId == ThisId)
	{
		UE_LOG(LogTemp, Warning, TEXT("Friendly"));
		return ETeamAttitude::Friendly;
	}

	UE_LOG(LogTemp, Warning, TEXT(", specifically a hostile"));
	// Else hostile
	return ETeamAttitude::Hostile;
}


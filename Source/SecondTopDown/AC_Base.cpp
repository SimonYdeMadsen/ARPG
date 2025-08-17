// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_Base.h"

#include "Logging/StructuredLog.h"
#include "Components/SphereComponent.h"
// Sets default values for this component's properties
UAC_Base::UAC_Base()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UAC_Base::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UAC_Base::OnRegister()
{
	Super::OnRegister();

}


// Called every frame
void UAC_Base::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


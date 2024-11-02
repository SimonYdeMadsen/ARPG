// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <set>
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SortedSet.generated.h"


/**
 * 
 */
UCLASS(Blueprintable)
class SECONDTOPDOWN_API USortedSet : public UObject
{
	GENERATED_BODY()

private:
    std::set<int32_t> ManagedSet; // For integers
    int32 GetNextAvailableElement() const;

public:
    UFUNCTION(BlueprintCallable, Category = "Utilities")
    void InitializeSet(int32 Size);

    UFUNCTION(BlueprintCallable, Category = "Utilities")
    int32 InsertElement();

    UFUNCTION(BlueprintCallable, Category = "Utilities")
    void RemoveElement(int32 Element);

};

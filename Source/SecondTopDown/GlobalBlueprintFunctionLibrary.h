#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SECONDTOPDOWN_API UGlobalBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Search")
    static int32 BinarySearch(const TArray<int32>& arr, int32 target);
};
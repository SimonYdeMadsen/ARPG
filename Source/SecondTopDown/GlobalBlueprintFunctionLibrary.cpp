#include "GlobalBlueprintFunctionLibrary.h"

void UGlobalBlueprintFunctionLibrary::BinarySearch(const TArray<int32>& arr, int32 target,
    int32 &binary_search_output
    ) {
    if (arr.Num() == 0) {
        UE_LOG(LogTemp, Warning, TEXT("Invalid array of BinarySearch"));
        binary_search_output = -1;
        return;
    }

    int32 left = 0;
    int32 right = arr.Num() - 1;

    if (target >= arr[right]) {
        UE_LOG(LogTemp, Warning, TEXT("Invalid target of BinarySearch"));
        binary_search_output = -1;
        return; // Return -1 if the target is larger than the largest element
    }

    while (left < right) {
        int32 mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            left = mid + 1; // Move right
        }
        else {
            right = mid; // Keep mid in the search range
        }
    }
    binary_search_output = left;
    return; // `left` will be the index of the smallest element greater than target
}
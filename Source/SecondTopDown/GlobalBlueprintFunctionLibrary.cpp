#include "GlobalBlueprintFunctionLibrary.h"

int32 UGlobalBlueprintFunctionLibrary::BinarySearch(const TArray<int32>& arr, int32 target) {
    if (arr.Num() == 0) {
        UE_LOG(LogTemp, Warning, TEXT("Invalid array of BinarySearch"));
        return -1;
    }

    int32 left = 0;
    int32 right = arr.Num() - 1;

    if (target >= arr[right]) {
        UE_LOG(LogTemp, Warning, TEXT("Invalid target of BinarySearch"));
        return -1; 
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
    return left; // `left` will be the index of the smallest element greater than target
}
#include "SortedSet.h"

void USortedSet::InitializeSet(int32 Size)
{
    ManagedSet.clear();
    for (int32 i = 0; i < Size; ++i)
    {
        ManagedSet.insert(i);
    }
    UE_LOG(LogTemp, Log, TEXT("InitializeSet: size=%d"), (int32)ManagedSet.size());
}

int32 USortedSet::InsertElement()
{
    int32 index = GetNextAvailableElement();
    if (index != -1)
    {
        ManagedSet.erase(index);
        UE_LOG(LogTemp, Log, TEXT("InsertElement: Allocated index %d, set size now %d"), index, (int32)ManagedSet.size());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("InsertElement: No available index."));
    }
    return index;
}

void USortedSet::RemoveElement(int32 Element)
{
    ManagedSet.insert(Element);
    UE_LOG(LogTemp, Log, TEXT("RemoveElement: Inserted index %d, set size now %d"), Element, (int32)ManagedSet.size());
}

int32 USortedSet::GetNextAvailableElement() const
{
    if (ManagedSet.size() > 0)
    {
        int32 next = *ManagedSet.begin();
        UE_LOG(LogTemp, Log, TEXT("GetNextAvailableElement: Next available index %d"), next);
        return next;
    }
    UE_LOG(LogTemp, Warning, TEXT("GetNextAvailableElement: No available index"));
    return INDEX_NONE;
}
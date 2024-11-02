// Fill out your copyright notice in the Description page of Project Settings.


#include "SortedSet.h"

void USortedSet::InitializeSet(int32 Size)
{
    ManagedSet.clear();
    for (int32 i = 0; i < Size; ++i)
    {
        ManagedSet.insert(i);
    }
}

int32 USortedSet::InsertElement()
{
    int32 index = GetNextAvailableElement();
    if (index != -1)
    {
        ManagedSet.erase(index);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No available index."));
    }
    return index;
}

void USortedSet::RemoveElement(int32 Element)
{
    ManagedSet.insert(Element);
}

int32 USortedSet::GetNextAvailableElement() const
{
    if (ManagedSet.size() > 0)
    {
        return *ManagedSet.begin(); 
    }
    return INDEX_NONE;
}
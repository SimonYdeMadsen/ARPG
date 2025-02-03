// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Class ADoor Function IsLocked
struct Z_Construct_UFunction_ADoor_IsLocked_Statics
{
	struct Door_eventIsLocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "CompactNodeTitle", "Is Locked" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADoor_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Door_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoor_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Door_eventIsLocked_Parms), &Z_Construct_UFunction_ADoor_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_IsLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_IsLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "IsLocked", nullptr, nullptr, Z_Construct_UFunction_ADoor_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_IsLocked_Statics::Door_eventIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_IsLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoor_IsLocked_Statics::Door_eventIsLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_IsLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_IsLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execIsLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocked();
	P_NATIVE_END;
}
// End Class ADoor Function IsLocked

// Begin Class ADoor Function IsOpen
struct Z_Construct_UFunction_ADoor_IsOpen_Statics
{
	struct Door_eventIsOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "CompactNodeTitle", "Is Open" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADoor_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Door_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoor_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Door_eventIsOpen_Parms), &Z_Construct_UFunction_ADoor_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_IsOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_IsOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "IsOpen", nullptr, nullptr, Z_Construct_UFunction_ADoor_IsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_IsOpen_Statics::Door_eventIsOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_IsOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_IsOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoor_IsOpen_Statics::Door_eventIsOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_IsOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_IsOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execIsOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOpen();
	P_NATIVE_END;
}
// End Class ADoor Function IsOpen

// Begin Class ADoor Function Lock
struct Z_Construct_UFunction_ADoor_Lock_Statics
{
	struct Door_eventLock_Parms
	{
		bool lock;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static void NewProp_lock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_lock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADoor_Lock_Statics::NewProp_lock_SetBit(void* Obj)
{
	((Door_eventLock_Parms*)Obj)->lock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoor_Lock_Statics::NewProp_lock = { "lock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Door_eventLock_Parms), &Z_Construct_UFunction_ADoor_Lock_Statics::NewProp_lock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_Lock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_Lock_Statics::NewProp_lock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_Lock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "Lock", nullptr, nullptr, Z_Construct_UFunction_ADoor_Lock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_Lock_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_Lock_Statics::Door_eventLock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_Lock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_Lock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoor_Lock_Statics::Door_eventLock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_Lock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_Lock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execLock)
{
	P_GET_UBOOL(Z_Param_lock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Lock(Z_Param_lock);
	P_NATIVE_END;
}
// End Class ADoor Function Lock

// Begin Class ADoor Function OnDoorClose
struct Z_Construct_UFunction_ADoor_OnDoorClose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorClose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorClose_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OnDoorClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execOnDoorClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorClose();
	P_NATIVE_END;
}
// End Class ADoor Function OnDoorClose

// Begin Class ADoor Function OnDoorClose_BP
static FName NAME_ADoor_OnDoorClose_BP = FName(TEXT("OnDoorClose_BP"));
void ADoor::OnDoorClose_BP()
{
	ProcessEvent(FindFunctionChecked(NAME_ADoor_OnDoorClose_BP),NULL);
}
struct Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "On Close" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorClose_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OnDoorClose_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorClose_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADoor Function OnDoorClose_BP

// Begin Class ADoor Function OnDoorLock
struct Z_Construct_UFunction_ADoor_OnDoorLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorLock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorLock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorLock_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OnDoorLock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorLock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execOnDoorLock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorLock();
	P_NATIVE_END;
}
// End Class ADoor Function OnDoorLock

// Begin Class ADoor Function OnDoorLock_BP
static FName NAME_ADoor_OnDoorLock_BP = FName(TEXT("OnDoorLock_BP"));
void ADoor::OnDoorLock_BP()
{
	ProcessEvent(FindFunctionChecked(NAME_ADoor_OnDoorLock_BP),NULL);
}
struct Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "On Locked" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorLock_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OnDoorLock_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorLock_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADoor Function OnDoorLock_BP

// Begin Class ADoor Function OnDoorOpen
struct Z_Construct_UFunction_ADoor_OnDoorOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorOpen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorOpen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OnDoorOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execOnDoorOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorOpen();
	P_NATIVE_END;
}
// End Class ADoor Function OnDoorOpen

// Begin Class ADoor Function OnDoorOpen_BP
static FName NAME_ADoor_OnDoorOpen_BP = FName(TEXT("OnDoorOpen_BP"));
void ADoor::OnDoorOpen_BP()
{
	ProcessEvent(FindFunctionChecked(NAME_ADoor_OnDoorOpen_BP),NULL);
}
struct Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "On Open" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorOpen_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OnDoorOpen_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorOpen_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADoor Function OnDoorOpen_BP

// Begin Class ADoor Function OnDoorUnlock
struct Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorUnlock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OnDoorUnlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorUnlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execOnDoorUnlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorUnlock();
	P_NATIVE_END;
}
// End Class ADoor Function OnDoorUnlock

// Begin Class ADoor Function OnDoorUnlock_BP
static FName NAME_ADoor_OnDoorUnlock_BP = FName(TEXT("OnDoorUnlock_BP"));
void ADoor::OnDoorUnlock_BP()
{
	ProcessEvent(FindFunctionChecked(NAME_ADoor_OnDoorUnlock_BP),NULL);
}
struct Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "DisplayName", "On Unlocked" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OnDoorUnlock_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OnDoorUnlock_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OnDoorUnlock_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADoor Function OnDoorUnlock_BP

// Begin Class ADoor Function Open
struct Z_Construct_UFunction_ADoor_Open_Statics
{
	struct Door_eventOpen_Parms
	{
		bool open;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static void NewProp_open_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_open;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADoor_Open_Statics::NewProp_open_SetBit(void* Obj)
{
	((Door_eventOpen_Parms*)Obj)->open = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoor_Open_Statics::NewProp_open = { "open", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Door_eventOpen_Parms), &Z_Construct_UFunction_ADoor_Open_Statics::NewProp_open_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_Open_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_Open_Statics::NewProp_open,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_Open_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "Open", nullptr, nullptr, Z_Construct_UFunction_ADoor_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_Open_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_Open_Statics::Door_eventOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_Open_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_Open_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoor_Open_Statics::Door_eventOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_Open()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_Open_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execOpen)
{
	P_GET_UBOOL(Z_Param_open);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Open(Z_Param_open);
	P_NATIVE_END;
}
// End Class ADoor Function Open

// Begin Class ADoor
void ADoor::StaticRegisterNativesADoor()
{
	UClass* Class = ADoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsLocked", &ADoor::execIsLocked },
		{ "IsOpen", &ADoor::execIsOpen },
		{ "Lock", &ADoor::execLock },
		{ "OnDoorClose", &ADoor::execOnDoorClose },
		{ "OnDoorLock", &ADoor::execOnDoorLock },
		{ "OnDoorOpen", &ADoor::execOnDoorOpen },
		{ "OnDoorUnlock", &ADoor::execOnDoorUnlock },
		{ "Open", &ADoor::execOpen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
UClass* Z_Construct_UClass_ADoor_NoRegister()
{
	return ADoor::StaticClass();
}
struct Z_Construct_UClass_ADoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural Dungeon" },
		{ "IncludePath", "Door.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomA_MetaData[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The two connected rooms to this door\n" },
#endif
		{ "ModuleRelativePath", "Public/Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The two connected rooms to this door" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomB_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysVisible_MetaData[] = {
		{ "Category", "Door" },
		{ "DisplayName", "Always Visible" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUnlocked_MetaData[] = {
		{ "Category", "Door" },
		{ "DisplayName", "Always Unlocked" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Door" },
		{ "DisplayName", "Door Type" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneComponent_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Door.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldBeLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeLocked;
	static void NewProp_bShouldBeOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeOpen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomB;
	static void NewProp_bAlwaysVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysVisible;
	static void NewProp_bAlwaysUnlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUnlocked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_IsLocked, "IsLocked" }, // 2420236923
		{ &Z_Construct_UFunction_ADoor_IsOpen, "IsOpen" }, // 904199064
		{ &Z_Construct_UFunction_ADoor_Lock, "Lock" }, // 419058901
		{ &Z_Construct_UFunction_ADoor_OnDoorClose, "OnDoorClose" }, // 396925938
		{ &Z_Construct_UFunction_ADoor_OnDoorClose_BP, "OnDoorClose_BP" }, // 3826663474
		{ &Z_Construct_UFunction_ADoor_OnDoorLock, "OnDoorLock" }, // 1973375595
		{ &Z_Construct_UFunction_ADoor_OnDoorLock_BP, "OnDoorLock_BP" }, // 3096507440
		{ &Z_Construct_UFunction_ADoor_OnDoorOpen, "OnDoorOpen" }, // 3973452964
		{ &Z_Construct_UFunction_ADoor_OnDoorOpen_BP, "OnDoorOpen_BP" }, // 2521778041
		{ &Z_Construct_UFunction_ADoor_OnDoorUnlock, "OnDoorUnlock" }, // 1962385185
		{ &Z_Construct_UFunction_ADoor_OnDoorUnlock_BP, "OnDoorUnlock_BP" }, // 1093552820
		{ &Z_Construct_UFunction_ADoor_Open, "Open" }, // 463619181
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ADoor_Statics::NewProp_bShouldBeLocked_SetBit(void* Obj)
{
	((ADoor*)Obj)->bShouldBeLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bShouldBeLocked = { "bShouldBeLocked", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bShouldBeLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBeLocked_MetaData), NewProp_bShouldBeLocked_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bShouldBeOpen_SetBit(void* Obj)
{
	((ADoor*)Obj)->bShouldBeOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bShouldBeOpen = { "bShouldBeOpen", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bShouldBeOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldBeOpen_MetaData), NewProp_bShouldBeOpen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RoomA = { "RoomA", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RoomA), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomA_MetaData), NewProp_RoomA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RoomB = { "RoomB", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RoomB), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomB_MetaData), NewProp_RoomB_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bAlwaysVisible_SetBit(void* Obj)
{
	((ADoor*)Obj)->bAlwaysVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bAlwaysVisible = { "bAlwaysVisible", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bAlwaysVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysVisible_MetaData), NewProp_bAlwaysVisible_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bAlwaysUnlocked_SetBit(void* Obj)
{
	((ADoor*)Obj)->bAlwaysUnlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bAlwaysUnlocked = { "bAlwaysUnlocked", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bAlwaysUnlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysUnlocked_MetaData), NewProp_bAlwaysUnlocked_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, Type), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DefaultSceneComponent = { "DefaultSceneComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DefaultSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneComponent_MetaData), NewProp_DefaultSceneComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bShouldBeLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bShouldBeOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RoomA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RoomB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bAlwaysVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bAlwaysUnlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DefaultSceneComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
	&ADoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoor()
{
	if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<ADoor>()
{
	return ADoor::StaticClass();
}
void ADoor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bShouldBeLocked(TEXT("bShouldBeLocked"));
	static const FName Name_bShouldBeOpen(TEXT("bShouldBeOpen"));
	static const FName Name_RoomA(TEXT("RoomA"));
	static const FName Name_RoomB(TEXT("RoomB"));
	const bool bIsValid = true
		&& Name_bShouldBeLocked == ClassReps[(int32)ENetFields_Private::bShouldBeLocked].Property->GetFName()
		&& Name_bShouldBeOpen == ClassReps[(int32)ENetFields_Private::bShouldBeOpen].Property->GetFName()
		&& Name_RoomA == ClassReps[(int32)ENetFields_Private::RoomA].Property->GetFName()
		&& Name_RoomB == ClassReps[(int32)ENetFields_Private::RoomB].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADoor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
ADoor::~ADoor() {}
// End Class ADoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 1774493489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_1090391232(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Door_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

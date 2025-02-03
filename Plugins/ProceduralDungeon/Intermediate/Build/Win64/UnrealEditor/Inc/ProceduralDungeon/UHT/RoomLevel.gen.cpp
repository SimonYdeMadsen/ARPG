// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomLevel.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomLevel() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Delegate FRoomLevelVisibilityEvent
struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics
{
	struct _Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms
	{
		ARoomLevel* RoomLevel;
		bool IsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms), &Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomLevelVisibilityEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRoomLevelVisibilityEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomLevelVisibilityEvent, ARoomLevel* RoomLevel, bool IsVisible)
{
	struct _Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms
	{
		ARoomLevel* RoomLevel;
		bool IsVisible;
	};
	_Script_ProceduralDungeon_eventRoomLevelVisibilityEvent_Parms Parms;
	Parms.RoomLevel=RoomLevel;
	Parms.IsVisible=IsVisible ? true : false;
	RoomLevelVisibilityEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRoomLevelVisibilityEvent

// Begin Delegate FRoomLevelActorEvent
struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics
{
	struct _Script_ProceduralDungeon_eventRoomLevelActorEvent_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomLevelActorEvent_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomLevelActorEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomLevelActorEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomLevelActorEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomLevelActorEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRoomLevelActorEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomLevelActorEvent, ARoomLevel* RoomLevel, AActor* Actor)
{
	struct _Script_ProceduralDungeon_eventRoomLevelActorEvent_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Actor;
	};
	_Script_ProceduralDungeon_eventRoomLevelActorEvent_Parms Parms;
	Parms.RoomLevel=RoomLevel;
	Parms.Actor=Actor;
	RoomLevelActorEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRoomLevelActorEvent

// Begin Class ARoomLevel Function GetBoundsCenter
struct Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics
{
	struct RoomLevel_eventGetBoundsCenter_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventGetBoundsCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "GetBoundsCenter", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::RoomLevel_eventGetBoundsCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::RoomLevel_eventGetBoundsCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoomLevel_GetBoundsCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_GetBoundsCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoomLevel::execGetBoundsCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBoundsCenter();
	P_NATIVE_END;
}
// End Class ARoomLevel Function GetBoundsCenter

// Begin Class ARoomLevel Function GetBoundsExtent
struct Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics
{
	struct RoomLevel_eventGetBoundsExtent_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventGetBoundsExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "GetBoundsExtent", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::RoomLevel_eventGetBoundsExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::RoomLevel_eventGetBoundsExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoomLevel_GetBoundsExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_GetBoundsExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoomLevel::execGetBoundsExtent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBoundsExtent();
	P_NATIVE_END;
}
// End Class ARoomLevel Function GetBoundsExtent

// Begin Class ARoomLevel Function GetRoom
struct Z_Construct_UFunction_ARoomLevel_GetRoom_Statics
{
	struct RoomLevel_eventGetRoom_Parms
	{
		URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "CompactNodeTitle", "Room" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventGetRoom_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "GetRoom", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::RoomLevel_eventGetRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::RoomLevel_eventGetRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoomLevel_GetRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_GetRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoomLevel::execGetRoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoom**)Z_Param__Result=P_THIS->GetRoom();
	P_NATIVE_END;
}
// End Class ARoomLevel Function GetRoom

// Begin Class ARoomLevel Function IsLocked
struct Z_Construct_UFunction_ARoomLevel_IsLocked_Statics
{
	struct RoomLevel_eventIsLocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "CompactNodeTitle", "Is Locked" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRoom() instead to access directly the room functions." },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomLevel_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventIsLocked_Parms), &Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "IsLocked", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::RoomLevel_eventIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::RoomLevel_eventIsLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoomLevel_IsLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_IsLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoomLevel::execIsLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocked();
	P_NATIVE_END;
}
// End Class ARoomLevel Function IsLocked

// Begin Class ARoomLevel Function IsPlayerInside
struct Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics
{
	struct RoomLevel_eventIsPlayerInside_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "CompactNodeTitle", "Is Player Inside" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRoom() instead to access directly the room functions." },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomLevel_eventIsPlayerInside_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventIsPlayerInside_Parms), &Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "IsPlayerInside", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::RoomLevel_eventIsPlayerInside_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::RoomLevel_eventIsPlayerInside_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoomLevel_IsPlayerInside()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_IsPlayerInside_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoomLevel::execIsPlayerInside)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInside();
	P_NATIVE_END;
}
// End Class ARoomLevel Function IsPlayerInside

// Begin Class ARoomLevel Function IsVisible
struct Z_Construct_UFunction_ARoomLevel_IsVisible_Statics
{
	struct RoomLevel_eventIsVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "CompactNodeTitle", "Is Visible" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRoom() instead to access directly the room functions." },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomLevel_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventIsVisible_Parms), &Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::RoomLevel_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::RoomLevel_eventIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoomLevel_IsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_IsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoomLevel::execIsVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisible();
	P_NATIVE_END;
}
// End Class ARoomLevel Function IsVisible

// Begin Class ARoomLevel Function Lock
struct Z_Construct_UFunction_ARoomLevel_Lock_Statics
{
	struct RoomLevel_eventLock_Parms
	{
		bool lock;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetRoom() instead to access directly the room functions." },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_lock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_lock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ARoomLevel_Lock_Statics::NewProp_lock_SetBit(void* Obj)
{
	((RoomLevel_eventLock_Parms*)Obj)->lock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_Lock_Statics::NewProp_lock = { "lock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventLock_Parms), &Z_Construct_UFunction_ARoomLevel_Lock_Statics::NewProp_lock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_Lock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_Lock_Statics::NewProp_lock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_Lock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "Lock", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_Lock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_Lock_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_Lock_Statics::RoomLevel_eventLock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_Lock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_Lock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_Lock_Statics::RoomLevel_eventLock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoomLevel_Lock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_Lock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoomLevel::execLock)
{
	P_GET_UBOOL(Z_Param_lock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Lock(Z_Param_lock);
	P_NATIVE_END;
}
// End Class ARoomLevel Function Lock

// Begin Class ARoomLevel Function OnTriggerBeginOverlap
struct Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics
{
	struct RoomLevel_eventOnTriggerBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((RoomLevel_eventOnTriggerBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomLevel_eventOnTriggerBeginOverlap_Parms), &Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "OnTriggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::RoomLevel_eventOnTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::RoomLevel_eventOnTriggerBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoomLevel::execOnTriggerBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ARoomLevel Function OnTriggerBeginOverlap

// Begin Class ARoomLevel Function OnTriggerEndOverlap
struct Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics
{
	struct RoomLevel_eventOnTriggerEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomLevel_eventOnTriggerEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoomLevel, nullptr, "OnTriggerEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::RoomLevel_eventOnTriggerEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::RoomLevel_eventOnTriggerEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARoomLevel::execOnTriggerEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ARoomLevel Function OnTriggerEndOverlap

// Begin Class ARoomLevel
void ARoomLevel::StaticRegisterNativesARoomLevel()
{
	UClass* Class = ARoomLevel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoundsCenter", &ARoomLevel::execGetBoundsCenter },
		{ "GetBoundsExtent", &ARoomLevel::execGetBoundsExtent },
		{ "GetRoom", &ARoomLevel::execGetRoom },
		{ "IsLocked", &ARoomLevel::execIsLocked },
		{ "IsPlayerInside", &ARoomLevel::execIsPlayerInside },
		{ "IsVisible", &ARoomLevel::execIsVisible },
		{ "Lock", &ARoomLevel::execLock },
		{ "OnTriggerBeginOverlap", &ARoomLevel::execOnTriggerBeginOverlap },
		{ "OnTriggerEndOverlap", &ARoomLevel::execOnTriggerEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoomLevel);
UClass* Z_Construct_UClass_ARoomLevel_NoRegister()
{
	return ARoomLevel::StaticClass();
}
struct Z_Construct_UClass_ARoomLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural Dungeon" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "RoomLevel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
		{ "Comment", "// Macro is here to mark property to be used by GC\n" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
		{ "ToolTip", "Macro is here to mark property to be used by GC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityChangedEvent_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "Comment", "// Event to notify when the visibility of the room has been toggled.\n" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
		{ "ToolTip", "Event to notify when the visibility of the room has been toggled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorEnterRoomEvent_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "Comment", "// Called when an actor enters the room bounds.\n" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
		{ "ToolTip", "Called when an actor enters the room bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorExitRoomEvent_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
		{ "Comment", "// Called when an actor exits the room bounds.\n" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
		{ "ToolTip", "Called when an actor exits the room bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomTrigger_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoomLevel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VisibilityChangedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActorEnterRoomEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActorExitRoomEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomTrigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoomLevel_GetBoundsCenter, "GetBoundsCenter" }, // 1644089469
		{ &Z_Construct_UFunction_ARoomLevel_GetBoundsExtent, "GetBoundsExtent" }, // 3512653122
		{ &Z_Construct_UFunction_ARoomLevel_GetRoom, "GetRoom" }, // 3041011598
		{ &Z_Construct_UFunction_ARoomLevel_IsLocked, "IsLocked" }, // 1386411768
		{ &Z_Construct_UFunction_ARoomLevel_IsPlayerInside, "IsPlayerInside" }, // 3467870585
		{ &Z_Construct_UFunction_ARoomLevel_IsVisible, "IsVisible" }, // 2893771458
		{ &Z_Construct_UFunction_ARoomLevel_Lock, "Lock" }, // 1143104996
		{ &Z_Construct_UFunction_ARoomLevel_OnTriggerBeginOverlap, "OnTriggerBeginOverlap" }, // 1029108162
		{ &Z_Construct_UFunction_ARoomLevel_OnTriggerEndOverlap, "OnTriggerEndOverlap" }, // 4043961118
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, Room), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Room_MetaData), NewProp_Room_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_VisibilityChangedEvent = { "VisibilityChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, VisibilityChangedEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityChangedEvent_MetaData), NewProp_VisibilityChangedEvent_MetaData) }; // 3093824384
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorEnterRoomEvent = { "ActorEnterRoomEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, ActorEnterRoomEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorEnterRoomEvent_MetaData), NewProp_ActorEnterRoomEvent_MetaData) }; // 883561392
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorExitRoomEvent = { "ActorExitRoomEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, ActorExitRoomEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorExitRoomEvent_MetaData), NewProp_ActorExitRoomEvent_MetaData) }; // 883561392
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoomLevel_Statics::NewProp_RoomTrigger = { "RoomTrigger", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomLevel, RoomTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomTrigger_MetaData), NewProp_RoomTrigger_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoomLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_VisibilityChangedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorEnterRoomEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_ActorExitRoomEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomLevel_Statics::NewProp_RoomTrigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoomLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoomLevel_Statics::ClassParams = {
	&ARoomLevel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARoomLevel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoomLevel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoomLevel()
{
	if (!Z_Registration_Info_UClass_ARoomLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoomLevel.OuterSingleton, Z_Construct_UClass_ARoomLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoomLevel.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<ARoomLevel>()
{
	return ARoomLevel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomLevel);
ARoomLevel::~ARoomLevel() {}
// End Class ARoomLevel

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoomLevel, ARoomLevel::StaticClass, TEXT("ARoomLevel"), &Z_Registration_Info_UClass_ARoomLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoomLevel), 3983500369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_3988872288(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

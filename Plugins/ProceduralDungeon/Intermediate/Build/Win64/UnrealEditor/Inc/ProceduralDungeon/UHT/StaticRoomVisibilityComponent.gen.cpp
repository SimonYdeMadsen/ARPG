// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/Components/StaticRoomVisibilityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticRoomVisibilityComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UStaticRoomVisibilityComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UStaticRoomVisibilityComponent_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Delegate FRoomVisibilityEvent
struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics
{
	struct _Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms
	{
		AActor* Actor;
		bool IsInVisibleRoom;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StaticRoomVisibilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_IsInVisibleRoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInVisibleRoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_IsInVisibleRoom_SetBit(void* Obj)
{
	((_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms*)Obj)->IsInVisibleRoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_IsInVisibleRoom = { "IsInVisibleRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms), &Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_IsInVisibleRoom_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::NewProp_IsInVisibleRoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomVisibilityEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRoomVisibilityEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomVisibilityEvent, AActor* Actor, bool IsInVisibleRoom)
{
	struct _Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms
	{
		AActor* Actor;
		bool IsInVisibleRoom;
	};
	_Script_ProceduralDungeon_eventRoomVisibilityEvent_Parms Parms;
	Parms.Actor=Actor;
	Parms.IsInVisibleRoom=IsInVisibleRoom ? true : false;
	RoomVisibilityEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRoomVisibilityEvent

// Begin Class UStaticRoomVisibilityComponent Function GetVisibilityMode
struct Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics
{
	struct StaticRoomVisibilityComponent_eventGetVisibilityMode_Parms
	{
		EVisibilityMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Components/StaticRoomVisibilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticRoomVisibilityComponent_eventGetVisibilityMode_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode, METADATA_PARAMS(0, nullptr) }; // 151926989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticRoomVisibilityComponent, nullptr, "GetVisibilityMode", nullptr, nullptr, Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::StaticRoomVisibilityComponent_eventGetVisibilityMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::StaticRoomVisibilityComponent_eventGetVisibilityMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticRoomVisibilityComponent::execGetVisibilityMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EVisibilityMode*)Z_Param__Result=P_THIS->GetVisibilityMode();
	P_NATIVE_END;
}
// End Class UStaticRoomVisibilityComponent Function GetVisibilityMode

// Begin Class UStaticRoomVisibilityComponent Function IsVisible
struct Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics
{
	struct StaticRoomVisibilityComponent_eventIsVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the actor is in a visible room.\n// Always returns true when \"Occlude Dynamic Actors\" is unchecked in the plugin's settings\n// Useful with \"Custom\" visibility.\n" },
#endif
		{ "CompactNodeTitle", "Is In Visible Room" },
		{ "DisplayName", "Is In Visible Room" },
		{ "ModuleRelativePath", "Public/Components/StaticRoomVisibilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor is in a visible room.\nAlways returns true when \"Occlude Dynamic Actors\" is unchecked in the plugin's settings\nUseful with \"Custom\" visibility." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((StaticRoomVisibilityComponent_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticRoomVisibilityComponent_eventIsVisible_Parms), &Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticRoomVisibilityComponent, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::StaticRoomVisibilityComponent_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::StaticRoomVisibilityComponent_eventIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticRoomVisibilityComponent::execIsVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisible();
	P_NATIVE_END;
}
// End Class UStaticRoomVisibilityComponent Function IsVisible

// Begin Class UStaticRoomVisibilityComponent Function RoomVisibilityChanged
struct Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics
{
	struct StaticRoomVisibilityComponent_eventRoomVisibilityChanged_Parms
	{
		ARoomLevel* RoomLevel;
		bool IsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StaticRoomVisibilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static void NewProp_IsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticRoomVisibilityComponent_eventRoomVisibilityChanged_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_IsVisible_SetBit(void* Obj)
{
	((StaticRoomVisibilityComponent_eventRoomVisibilityChanged_Parms*)Obj)->IsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(StaticRoomVisibilityComponent_eventRoomVisibilityChanged_Parms), &Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticRoomVisibilityComponent, nullptr, "RoomVisibilityChanged", nullptr, nullptr, Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::StaticRoomVisibilityComponent_eventRoomVisibilityChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::StaticRoomVisibilityComponent_eventRoomVisibilityChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticRoomVisibilityComponent::execRoomVisibilityChanged)
{
	P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
	P_GET_UBOOL(Z_Param_IsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RoomVisibilityChanged(Z_Param_RoomLevel,Z_Param_IsVisible);
	P_NATIVE_END;
}
// End Class UStaticRoomVisibilityComponent Function RoomVisibilityChanged

// Begin Class UStaticRoomVisibilityComponent Function SetVisibilityMode
struct Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics
{
	struct StaticRoomVisibilityComponent_eventSetVisibilityMode_Parms
	{
		EVisibilityMode Mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/StaticRoomVisibilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticRoomVisibilityComponent_eventSetVisibilityMode_Parms, Mode), Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode, METADATA_PARAMS(0, nullptr) }; // 151926989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticRoomVisibilityComponent, nullptr, "SetVisibilityMode", nullptr, nullptr, Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::StaticRoomVisibilityComponent_eventSetVisibilityMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::StaticRoomVisibilityComponent_eventSetVisibilityMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticRoomVisibilityComponent::execSetVisibilityMode)
{
	P_GET_ENUM(EVisibilityMode,Z_Param_Mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVisibilityMode(EVisibilityMode(Z_Param_Mode));
	P_NATIVE_END;
}
// End Class UStaticRoomVisibilityComponent Function SetVisibilityMode

// Begin Class UStaticRoomVisibilityComponent
void UStaticRoomVisibilityComponent::StaticRegisterNativesUStaticRoomVisibilityComponent()
{
	UClass* Class = UStaticRoomVisibilityComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetVisibilityMode", &UStaticRoomVisibilityComponent::execGetVisibilityMode },
		{ "IsVisible", &UStaticRoomVisibilityComponent::execIsVisible },
		{ "RoomVisibilityChanged", &UStaticRoomVisibilityComponent::execRoomVisibilityChanged },
		{ "SetVisibilityMode", &UStaticRoomVisibilityComponent::execSetVisibilityMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticRoomVisibilityComponent);
UClass* Z_Construct_UClass_UStaticRoomVisibilityComponent_NoRegister()
{
	return UStaticRoomVisibilityComponent::StaticClass();
}
struct Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ProceduralDungeon" },
		{ "DisplayName", "Room Visibility (Static)" },
		{ "IncludePath", "Components/StaticRoomVisibilityComponent.h" },
		{ "ModuleRelativePath", "Public/Components/StaticRoomVisibilityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomVisibilityChanged_MetaData[] = {
		{ "Category", "Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the visibility from rooms changed (either by a room visibility change or by this actor moving between rooms).\n// Useful to update a \"Custom\" visibility.\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/StaticRoomVisibilityComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the visibility from rooms changed (either by a room visibility change or by this actor moving between rooms).\nUseful to update a \"Custom\" visibility." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetVisibilityMode" },
		{ "BlueprintSetter", "SetVisibilityMode" },
		{ "Category", "Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/Components/StaticRoomVisibilityComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomVisibilityChanged;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisibilityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibilityMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticRoomVisibilityComponent_GetVisibilityMode, "GetVisibilityMode" }, // 2101617766
		{ &Z_Construct_UFunction_UStaticRoomVisibilityComponent_IsVisible, "IsVisible" }, // 3453880972
		{ &Z_Construct_UFunction_UStaticRoomVisibilityComponent_RoomVisibilityChanged, "RoomVisibilityChanged" }, // 828827657
		{ &Z_Construct_UFunction_UStaticRoomVisibilityComponent_SetVisibilityMode, "SetVisibilityMode" }, // 2517440196
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticRoomVisibilityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::NewProp_OnRoomVisibilityChanged = { "OnRoomVisibilityChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticRoomVisibilityComponent, OnRoomVisibilityChanged), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoomVisibilityChanged_MetaData), NewProp_OnRoomVisibilityChanged_MetaData) }; // 1577878169
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::NewProp_VisibilityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::NewProp_VisibilityMode = { "VisibilityMode", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticRoomVisibilityComponent, VisibilityMode), Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityMode_MetaData), NewProp_VisibilityMode_MetaData) }; // 151926989
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::NewProp_OnRoomVisibilityChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::NewProp_VisibilityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::NewProp_VisibilityMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::ClassParams = {
	&UStaticRoomVisibilityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaticRoomVisibilityComponent()
{
	if (!Z_Registration_Info_UClass_UStaticRoomVisibilityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticRoomVisibilityComponent.OuterSingleton, Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaticRoomVisibilityComponent.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UStaticRoomVisibilityComponent>()
{
	return UStaticRoomVisibilityComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticRoomVisibilityComponent);
UStaticRoomVisibilityComponent::~UStaticRoomVisibilityComponent() {}
// End Class UStaticRoomVisibilityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaticRoomVisibilityComponent, UStaticRoomVisibilityComponent::StaticClass, TEXT("UStaticRoomVisibilityComponent"), &Z_Registration_Info_UClass_UStaticRoomVisibilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticRoomVisibilityComponent), 1479327994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_2118462218(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DungeonGeneratorBase.h"
#include "ProceduralDungeon/Public/ProceduralDungeonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGeneratorBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGeneratorBase();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGeneratorBase_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReadOnlyRoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationResult();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_ESeedType();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Delegate FGenerationEvent
struct Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "GenerationEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGenerationEvent_DelegateWrapper(const FMulticastScriptDelegate& GenerationEvent)
{
	GenerationEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FGenerationEvent

// Begin Delegate FRoomEvent
struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics
{
	struct _Script_ProceduralDungeon_eventRoomEvent_Parms
	{
		const URoomData* Room;
		TScriptInterface<IReadOnlyRoom> RoomInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_RoomInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomEvent_Parms, Room), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Room_MetaData), NewProp_Room_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_RoomInstance = { "RoomInstance", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomEvent_Parms, RoomInstance), Z_Construct_UClass_UReadOnlyRoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomInstance_MetaData), NewProp_RoomInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_RoomInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRoomEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomEvent, const URoomData* Room, TScriptInterface<IReadOnlyRoom> const& RoomInstance)
{
	struct _Script_ProceduralDungeon_eventRoomEvent_Parms
	{
		const URoomData* Room;
		TScriptInterface<IReadOnlyRoom> RoomInstance;
	};
	_Script_ProceduralDungeon_eventRoomEvent_Parms Parms;
	Parms.Room=Room;
	Parms.RoomInstance=RoomInstance;
	RoomEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRoomEvent

// Begin Delegate FRoomDoorEvent
struct Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics
{
	struct _Script_ProceduralDungeon_eventRoomDoorEvent_Parms
	{
		const URoomData* Room;
		FDoorDef Door;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Door;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomDoorEvent_Parms, Room), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Room_MetaData), NewProp_Room_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomDoorEvent_Parms, Door), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Door_MetaData), NewProp_Door_MetaData) }; // 3661065545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::NewProp_Door,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "RoomDoorEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomDoorEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventRoomDoorEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRoomDoorEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomDoorEvent, const URoomData* Room, FDoorDef const& Door)
{
	struct _Script_ProceduralDungeon_eventRoomDoorEvent_Parms
	{
		const URoomData* Room;
		FDoorDef Door;
	};
	_Script_ProceduralDungeon_eventRoomDoorEvent_Parms Parms;
	Parms.Room=Room;
	Parms.Door=Door;
	RoomDoorEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FRoomDoorEvent

// Begin Enum EGenerationResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerationResult;
static UEnum* EGenerationResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenerationResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenerationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EGenerationResult, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EGenerationResult"));
	}
	return Z_Registration_Info_UEnum_EGenerationResult.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationResult>()
{
	return EGenerationResult_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Name", "EGenerationResult::Error" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
		{ "None.Name", "EGenerationResult::None" },
		{ "Success.Name", "EGenerationResult::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenerationResult::None", (int64)EGenerationResult::None },
		{ "EGenerationResult::Error", (int64)EGenerationResult::Error },
		{ "EGenerationResult::Success", (int64)EGenerationResult::Success },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	"EGenerationResult",
	"EGenerationResult",
	Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationResult()
{
	if (!Z_Registration_Info_UEnum_EGenerationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerationResult.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EGenerationResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenerationResult.InnerSingleton;
}
// End Enum EGenerationResult

// Begin Class ADungeonGeneratorBase Function AddRoomToDungeon
struct Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics
{
	struct DungeonGeneratorBase_eventAddRoomToDungeon_Parms
	{
		const URoom* Room;
		TArray<int32> DoorsToConnect;
		bool bFailIfNotConnected;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DoorsToConnect,bFailIfNotConnected" },
		{ "AutoCreateRefTerm", "DoorsToConnect" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Finalize the room creation by adding it to the dungeon graph. OnRoomAdded is called here.\n" },
#endif
		{ "CPP_Default_bFailIfNotConnected", "true" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
		{ "ReturnDisplayName", "Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finalize the room creation by adding it to the dungeon graph. OnRoomAdded is called here." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorsToConnect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorsToConnect_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorsToConnect;
	static void NewProp_bFailIfNotConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailIfNotConnected;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventAddRoomToDungeon_Parms, Room), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Room_MetaData), NewProp_Room_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_DoorsToConnect_Inner = { "DoorsToConnect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_DoorsToConnect = { "DoorsToConnect", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventAddRoomToDungeon_Parms, DoorsToConnect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorsToConnect_MetaData), NewProp_DoorsToConnect_MetaData) };
void Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_bFailIfNotConnected_SetBit(void* Obj)
{
	((DungeonGeneratorBase_eventAddRoomToDungeon_Parms*)Obj)->bFailIfNotConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_bFailIfNotConnected = { "bFailIfNotConnected", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGeneratorBase_eventAddRoomToDungeon_Parms), &Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_bFailIfNotConnected_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGeneratorBase_eventAddRoomToDungeon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGeneratorBase_eventAddRoomToDungeon_Parms), &Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_DoorsToConnect_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_DoorsToConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_bFailIfNotConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "AddRoomToDungeon", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::DungeonGeneratorBase_eventAddRoomToDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::DungeonGeneratorBase_eventAddRoomToDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execAddRoomToDungeon)
{
	P_GET_OBJECT_REF(URoom,Z_Param_Out_Room);
	P_GET_TARRAY_REF(int32,Z_Param_Out_DoorsToConnect);
	P_GET_UBOOL(Z_Param_bFailIfNotConnected);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddRoomToDungeon(Z_Param_Out_Room,Z_Param_Out_DoorsToConnect,Z_Param_bFailIfNotConnected);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function AddRoomToDungeon

// Begin Class ADungeonGeneratorBase Function ChooseDoor
struct DungeonGeneratorBase_eventChooseDoor_Parms
{
	const URoomData* CurrentRoom;
	const URoomData* NextRoom;
	const UDoorType* DoorType;
	bool Flipped;
	TSubclassOf<ADoor> ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonGeneratorBase_eventChooseDoor_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ADungeonGeneratorBase_ChooseDoor = FName(TEXT("ChooseDoor"));
TSubclassOf<ADoor> ADungeonGeneratorBase::ChooseDoor(const URoomData* CurrentRoom, const URoomData* NextRoom, const UDoorType* DoorType, bool& Flipped)
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_ChooseDoor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGeneratorBase_eventChooseDoor_Parms Parms;
		Parms.CurrentRoom=CurrentRoom;
		Parms.NextRoom=NextRoom;
		Parms.DoorType=DoorType;
		Parms.Flipped=Flipped ? true : false;
	ProcessEvent(Func,&Parms);
		Flipped=Parms.Flipped;
		return Parms.ReturnValue;
	}
	else
	{
		return ChooseDoor_Implementation(CurrentRoom, NextRoom, DoorType, Flipped);
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the door which will be spawned between Current Room and Next Room\n// @param CurrentRoom The first of both rooms to have been generated. By default the door will face this room.\n// @param NextRoom The second of both rooms to have been generated. Set Flipped to true to make the door facing this room.\n// @param DoorType The door type set by both room data. Use IsDoorOfType function to compare a door actor class with this.\n// @param Flipped Tells which room the door is facing between CurrentRoom (false) and NextRoom (true).\n// @return The door actor class to spawn between CurrentRoom and NextRoom.\n" },
#endif
		{ "DisplayName", "Choose Door" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the door which will be spawned between Current Room and Next Room\n@param CurrentRoom The first of both rooms to have been generated. By default the door will face this room.\n@param NextRoom The second of both rooms to have been generated. Set Flipped to true to make the door facing this room.\n@param DoorType The door type set by both room data. Use IsDoorOfType function to compare a door actor class with this.\n@param Flipped Tells which room the door is facing between CurrentRoom (false) and NextRoom (true).\n@return The door actor class to spawn between CurrentRoom and NextRoom." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextRoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorType;
	static void NewProp_Flipped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Flipped;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventChooseDoor_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoom_MetaData), NewProp_CurrentRoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventChooseDoor_Parms, NextRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextRoom_MetaData), NewProp_NextRoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventChooseDoor_Parms, DoorType), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorType_MetaData), NewProp_DoorType_MetaData) };
void Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_Flipped_SetBit(void* Obj)
{
	((DungeonGeneratorBase_eventChooseDoor_Parms*)Obj)->Flipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_Flipped = { "Flipped", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGeneratorBase_eventChooseDoor_Parms), &Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_Flipped_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventChooseDoor_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_CurrentRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_NextRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_DoorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_Flipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "ChooseDoor", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::PropPointers), sizeof(DungeonGeneratorBase_eventChooseDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGeneratorBase_eventChooseDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execChooseDoor)
{
	P_GET_OBJECT(URoomData,Z_Param_CurrentRoom);
	P_GET_OBJECT(URoomData,Z_Param_NextRoom);
	P_GET_OBJECT(UDoorType,Z_Param_DoorType);
	P_GET_UBOOL_REF(Z_Param_Out_Flipped);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<ADoor>*)Z_Param__Result=P_THIS->ChooseDoor_Implementation(Z_Param_CurrentRoom,Z_Param_NextRoom,Z_Param_DoorType,Z_Param_Out_Flipped);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function ChooseDoor

// Begin Class ADungeonGeneratorBase Function CreateDungeon
struct DungeonGeneratorBase_eventCreateDungeon_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonGeneratorBase_eventCreateDungeon_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ADungeonGeneratorBase_CreateDungeon = FName(TEXT("CreateDungeon"));
bool ADungeonGeneratorBase::CreateDungeon()
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_CreateDungeon);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGeneratorBase_eventCreateDungeon_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return CreateDungeon_Implementation();
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create virtually the dungeon (no load nor initialization of room levels)\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create virtually the dungeon (no load nor initialization of room levels)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGeneratorBase_eventCreateDungeon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGeneratorBase_eventCreateDungeon_Parms), &Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "CreateDungeon", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::PropPointers), sizeof(DungeonGeneratorBase_eventCreateDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGeneratorBase_eventCreateDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execCreateDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateDungeon_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function CreateDungeon

// Begin Class ADungeonGeneratorBase Function CreateRoomInstance
struct Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics
{
	struct DungeonGeneratorBase_eventCreateRoomInstance_Parms
	{
		URoomData* RoomData;
		URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create and initialize a new room instance using the room data provided.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create and initialize a new room instance using the room data provided." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventCreateRoomInstance_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventCreateRoomInstance_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "CreateRoomInstance", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::DungeonGeneratorBase_eventCreateRoomInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::DungeonGeneratorBase_eventCreateRoomInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execCreateRoomInstance)
{
	P_GET_OBJECT(URoomData,Z_Param_RoomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoom**)Z_Param__Result=P_THIS->CreateRoomInstance(Z_Param_RoomData);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function CreateRoomInstance

// Begin Class ADungeonGeneratorBase Function FinalizeDungeon
struct Z_Construct_UFunction_ADungeonGeneratorBase_FinalizeDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize room instances after all rooms have been placed and connected (call InitializeDungeon).\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize room instances after all rooms have been placed and connected (call InitializeDungeon)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_FinalizeDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "FinalizeDungeon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_FinalizeDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_FinalizeDungeon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_FinalizeDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_FinalizeDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execFinalizeDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinalizeDungeon();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function FinalizeDungeon

// Begin Class ADungeonGeneratorBase Function Generate
struct Z_Construct_UFunction_ADungeonGeneratorBase_Generate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the seed and call the generation on all clients\n// Do nothing when called on clients\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the seed and call the generation on all clients\nDo nothing when called on clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_Generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "Generate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_Generate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_Generate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_Generate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_Generate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execGenerate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Generate();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function Generate

// Begin Class ADungeonGeneratorBase Function GetCompatibleRoomData
struct Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics
{
	struct DungeonGeneratorBase_eventGetCompatibleRoomData_Parms
	{
		bool bSuccess;
		TArray<URoomData*> CompatibleRooms;
		TArray<URoomData*> RoomDataArray;
		FDoorDef DoorData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns an array of room data with at least one compatible door with the door data provided.\n// @param bSuccess True if at least one compatible room data was found.\n// @param CompatibleRooms Filled with all compatible room data found.\n// @param RoomDataArray The list of room data to check for compatibility.\n// @param DoorData The door used to check if a room is compatible.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an array of room data with at least one compatible door with the door data provided.\n@param bSuccess True if at least one compatible room data was found.\n@param CompatibleRooms Filled with all compatible room data found.\n@param RoomDataArray The list of room data to check for compatibility.\n@param DoorData The door used to check if a room is compatible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompatibleRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleRooms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((DungeonGeneratorBase_eventGetCompatibleRoomData_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGeneratorBase_eventGetCompatibleRoomData_Parms), &Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms_Inner = { "CompatibleRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms = { "CompatibleRooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetCompatibleRoomData_Parms, CompatibleRooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_RoomDataArray_Inner = { "RoomDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_RoomDataArray = { "RoomDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetCompatibleRoomData_Parms, RoomDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomDataArray_MetaData), NewProp_RoomDataArray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetCompatibleRoomData_Parms, DoorData), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorData_MetaData), NewProp_DoorData_MetaData) }; // 3661065545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_RoomDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_RoomDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::NewProp_DoorData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "GetCompatibleRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::DungeonGeneratorBase_eventGetCompatibleRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::DungeonGeneratorBase_eventGetCompatibleRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execGetCompatibleRoomData)
{
	P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
	P_GET_TARRAY_REF(URoomData*,Z_Param_Out_CompatibleRooms);
	P_GET_TARRAY_REF(URoomData*,Z_Param_Out_RoomDataArray);
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCompatibleRoomData(Z_Param_Out_bSuccess,Z_Param_Out_CompatibleRooms,Z_Param_Out_RoomDataArray,Z_Param_Out_DoorData);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function GetCompatibleRoomData

// Begin Class ADungeonGeneratorBase Function GetProgress
struct Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics
{
	struct DungeonGeneratorBase_eventGetProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current generation progress.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current generation progress." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "GetProgress", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::DungeonGeneratorBase_eventGetProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::DungeonGeneratorBase_eventGetProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execGetProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetProgress();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function GetProgress

// Begin Class ADungeonGeneratorBase Function GetRandomRoomData
struct Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics
{
	struct DungeonGeneratorBase_eventGetRandomRoomData_Parms
	{
		TArray<URoomData*> RoomDataArray;
		URoomData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return a random RoomData from the array provided\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a random RoomData from the array provided" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::NewProp_RoomDataArray_Inner = { "RoomDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::NewProp_RoomDataArray = { "RoomDataArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetRandomRoomData_Parms, RoomDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetRandomRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::NewProp_RoomDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::NewProp_RoomDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "GetRandomRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::DungeonGeneratorBase_eventGetRandomRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::DungeonGeneratorBase_eventGetRandomRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execGetRandomRoomData)
{
	P_GET_TARRAY(URoomData*,Z_Param_RoomDataArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoomData**)Z_Param__Result=P_THIS->GetRandomRoomData(Z_Param_RoomDataArray);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function GetRandomRoomData

// Begin Class ADungeonGeneratorBase Function GetRandomRoomDataWeighted
struct Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics
{
	struct DungeonGeneratorBase_eventGetRandomRoomDataWeighted_Parms
	{
		TMap<URoomData*,int32> RoomDataWeightedMap;
		URoomData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return a random RoomData from the weighted map provided.\n// For example: you have RoomA with weight 1 and RoomB with weight 2,\n// then RoomA has proba of 1/3 and RoomB 2/3 to be returned.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return a random RoomData from the weighted map provided.\nFor example: you have RoomA with weight 1 and RoomB with weight 2,\nthen RoomA has proba of 1/3 and RoomB 2/3 to be returned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomDataWeightedMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomDataWeightedMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataWeightedMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RoomDataWeightedMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap_ValueProp = { "RoomDataWeightedMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap_Key_KeyProp = { "RoomDataWeightedMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap = { "RoomDataWeightedMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetRandomRoomDataWeighted_Parms, RoomDataWeightedMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomDataWeightedMap_MetaData), NewProp_RoomDataWeightedMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetRandomRoomDataWeighted_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "GetRandomRoomDataWeighted", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::DungeonGeneratorBase_eventGetRandomRoomDataWeighted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::DungeonGeneratorBase_eventGetRandomRoomDataWeighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execGetRandomRoomDataWeighted)
{
	P_GET_TMAP_REF(URoomData*,int32,Z_Param_Out_RoomDataWeightedMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoomData**)Z_Param__Result=P_THIS->GetRandomRoomDataWeighted(Z_Param_Out_RoomDataWeightedMap);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function GetRandomRoomDataWeighted

// Begin Class ADungeonGeneratorBase Function GetRandomStream
struct Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics
{
	struct DungeonGeneratorBase_eventGetRandomStream_Parms
	{
		FRandomStream ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Access to the random stream of the procedural dungeon. You should always use this for the procedural generation.\n// @return The random stream used by the dungeon generator.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Access to the random stream of the procedural dungeon. You should always use this for the procedural generation.\n@return The random stream used by the dungeon generator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "GetRandomStream", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::DungeonGeneratorBase_eventGetRandomStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::DungeonGeneratorBase_eventGetRandomStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execGetRandomStream)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRandomStream*)Z_Param__Result=P_THIS->GetRandomStream();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function GetRandomStream

// Begin Class ADungeonGeneratorBase Function GetSeed
struct Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics
{
	struct DungeonGeneratorBase_eventGetSeed_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "CompactNodeTitle", "Seed" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetSeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "GetSeed", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::DungeonGeneratorBase_eventGetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::DungeonGeneratorBase_eventGetSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execGetSeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSeed();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function GetSeed

// Begin Class ADungeonGeneratorBase Function GetVisibilityPawn
struct DungeonGeneratorBase_eventGetVisibilityPawn_Parms
{
	APawn* ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonGeneratorBase_eventGetVisibilityPawn_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ADungeonGeneratorBase_GetVisibilityPawn = FName(TEXT("GetVisibilityPawn"));
APawn* ADungeonGeneratorBase::GetVisibilityPawn()
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_GetVisibilityPawn);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGeneratorBase_eventGetVisibilityPawn_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetVisibilityPawn_Implementation();
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns which pawn is used for the room culling system.\n// This pawn will also affect the PlayerInside variable of the rooms.\n// By default returns GetPlayerController(0)->GetPawnOrSpectator().\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns which pawn is used for the room culling system.\nThis pawn will also affect the PlayerInside variable of the rooms.\nBy default returns GetPlayerController(0)->GetPawnOrSpectator()." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventGetVisibilityPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "GetVisibilityPawn", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::PropPointers), sizeof(DungeonGeneratorBase_eventGetVisibilityPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGeneratorBase_eventGetVisibilityPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execGetVisibilityPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetVisibilityPawn_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function GetVisibilityPawn

// Begin Class ADungeonGeneratorBase Function InitializeDungeon
struct DungeonGeneratorBase_eventInitializeDungeon_Parms
{
	const UDungeonGraph* Rooms;
};
static const FName NAME_ADungeonGeneratorBase_InitializeDungeon = FName(TEXT("InitializeDungeon"));
void ADungeonGeneratorBase::InitializeDungeon(const UDungeonGraph* Rooms)
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_InitializeDungeon);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGeneratorBase_eventInitializeDungeon_Parms Parms;
		Parms.Rooms=Rooms;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitializeDungeon_Implementation(Rooms);
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize the room instances during the generation step\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the room instances during the generation step" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventInitializeDungeon_Parms, Rooms), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rooms_MetaData), NewProp_Rooms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "InitializeDungeon", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::PropPointers), sizeof(DungeonGeneratorBase_eventInitializeDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGeneratorBase_eventInitializeDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execInitializeDungeon)
{
	P_GET_OBJECT(UDungeonGraph,Z_Param_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDungeon_Implementation(Z_Param_Rooms);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function InitializeDungeon

// Begin Class ADungeonGeneratorBase Function OnFailedToAddRoom
struct DungeonGeneratorBase_eventOnFailedToAddRoom_Parms
{
	const URoomData* FromRoom;
	FDoorDef FromDoor;
};
static const FName NAME_ADungeonGeneratorBase_OnFailedToAddRoom = FName(TEXT("OnFailedToAddRoom"));
void ADungeonGeneratorBase::OnFailedToAddRoom(const URoomData* FromRoom, FDoorDef const& FromDoor)
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_OnFailedToAddRoom);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGeneratorBase_eventOnFailedToAddRoom_Parms Parms;
		Parms.FromRoom=FromRoom;
		Parms.FromDoor=FromDoor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnFailedToAddRoom_Implementation(FromRoom, FromDoor);
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time no room could have been placed at a door (all room placement tries have been exhausted).\n" },
#endif
		{ "DisplayName", "Failed To Add Room" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called each time no room could have been placed at a door (all room placement tries have been exhausted)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromDoor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromRoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromDoor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::NewProp_FromRoom = { "FromRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventOnFailedToAddRoom_Parms, FromRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromRoom_MetaData), NewProp_FromRoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::NewProp_FromDoor = { "FromDoor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventOnFailedToAddRoom_Parms, FromDoor), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromDoor_MetaData), NewProp_FromDoor_MetaData) }; // 3661065545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::NewProp_FromRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::NewProp_FromDoor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "OnFailedToAddRoom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::PropPointers), sizeof(DungeonGeneratorBase_eventOnFailedToAddRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGeneratorBase_eventOnFailedToAddRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execOnFailedToAddRoom)
{
	P_GET_OBJECT(URoomData,Z_Param_FromRoom);
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_FromDoor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFailedToAddRoom_Implementation(Z_Param_FromRoom,Z_Param_Out_FromDoor);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function OnFailedToAddRoom

// Begin Class ADungeonGeneratorBase Function OnGenerationFailed
static const FName NAME_ADungeonGeneratorBase_OnGenerationFailed = FName(TEXT("OnGenerationFailed"));
void ADungeonGeneratorBase::OnGenerationFailed()
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_OnGenerationFailed);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnGenerationFailed_Implementation();
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\n// No dungeon had been generated.\n" },
#endif
		{ "DisplayName", "Generation Failed" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\nNo dungeon had been generated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "OnGenerationFailed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationFailed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execOnGenerationFailed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGenerationFailed_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function OnGenerationFailed

// Begin Class ADungeonGeneratorBase Function OnGenerationInit
static const FName NAME_ADungeonGeneratorBase_OnGenerationInit = FName(TEXT("OnGenerationInit"));
void ADungeonGeneratorBase::OnGenerationInit()
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_OnGenerationInit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnGenerationInit_Implementation();
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called before trying to generate a new dungeon and each time IsValidDungeon return false.\n" },
#endif
		{ "DisplayName", "Generation Init" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before trying to generate a new dungeon and each time IsValidDungeon return false." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "OnGenerationInit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationInit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execOnGenerationInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGenerationInit_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function OnGenerationInit

// Begin Class ADungeonGeneratorBase Function OnPostGeneration
static const FName NAME_ADungeonGeneratorBase_OnPostGeneration = FName(TEXT("OnPostGeneration"));
void ADungeonGeneratorBase::OnPostGeneration()
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_OnPostGeneration);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnPostGeneration_Implementation();
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_OnPostGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once after all the dungeon generation (even if failed).\n" },
#endif
		{ "DisplayName", "Post Generation" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once after all the dungeon generation (even if failed)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_OnPostGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "OnPostGeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnPostGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_OnPostGeneration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_OnPostGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_OnPostGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execOnPostGeneration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPostGeneration_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function OnPostGeneration

// Begin Class ADungeonGeneratorBase Function OnPreGeneration
static const FName NAME_ADungeonGeneratorBase_OnPreGeneration = FName(TEXT("OnPreGeneration"));
void ADungeonGeneratorBase::OnPreGeneration()
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_OnPreGeneration);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnPreGeneration_Implementation();
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_OnPreGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once before anything else when generating a new dungeon.\n" },
#endif
		{ "DisplayName", "Pre Generation" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once before anything else when generating a new dungeon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_OnPreGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "OnPreGeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnPreGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_OnPreGeneration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_OnPreGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_OnPreGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execOnPreGeneration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreGeneration_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function OnPreGeneration

// Begin Class ADungeonGeneratorBase Function OnRoomAdded
struct DungeonGeneratorBase_eventOnRoomAdded_Parms
{
	const URoomData* NewRoom;
	TScriptInterface<IReadOnlyRoom> RoomInstance;
};
static const FName NAME_ADungeonGeneratorBase_OnRoomAdded = FName(TEXT("OnRoomAdded"));
void ADungeonGeneratorBase::OnRoomAdded(const URoomData* NewRoom, TScriptInterface<IReadOnlyRoom> const& RoomInstance)
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGeneratorBase_OnRoomAdded);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGeneratorBase_eventOnRoomAdded_Parms Parms;
		Parms.NewRoom=NewRoom;
		Parms.RoomInstance=RoomInstance;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnRoomAdded_Implementation(NewRoom, RoomInstance);
	}
}
struct Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time a room is added in the dungeon (but not spawned yet).\n// Those rooms can be destroyed without loading them if the generation try is not valid.\n// @param NewRoom The room data successfully added to the dungeon [DEPRECATED: will be removed in future version, use RoomInstance->GetRoomData instead]\n// @param RoomInstance The room successfully added to the dungeon\n" },
#endif
		{ "DisplayName", "On Room Added" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called each time a room is added in the dungeon (but not spawned yet).\nThose rooms can be destroyed without loading them if the generation try is not valid.\n@param NewRoom The room data successfully added to the dungeon [DEPRECATED: will be removed in future version, use RoomInstance->GetRoomData instead]\n@param RoomInstance The room successfully added to the dungeon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRoom;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_RoomInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::NewProp_NewRoom = { "NewRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventOnRoomAdded_Parms, NewRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRoom_MetaData), NewProp_NewRoom_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::NewProp_RoomInstance = { "RoomInstance", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventOnRoomAdded_Parms, RoomInstance), Z_Construct_UClass_UReadOnlyRoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomInstance_MetaData), NewProp_RoomInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::NewProp_NewRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::NewProp_RoomInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "OnRoomAdded", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::PropPointers), sizeof(DungeonGeneratorBase_eventOnRoomAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGeneratorBase_eventOnRoomAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execOnRoomAdded)
{
	P_GET_OBJECT(URoomData,Z_Param_NewRoom);
	P_GET_TINTERFACE_REF(IReadOnlyRoom,Z_Param_Out_RoomInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomAdded_Implementation(Z_Param_NewRoom,Z_Param_Out_RoomInstance);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function OnRoomAdded

// Begin Class ADungeonGeneratorBase Function SetSeed
struct Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics
{
	struct DungeonGeneratorBase_eventSetSeed_Parms
	{
		int32 NewSeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::NewProp_NewSeed = { "NewSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventSetSeed_Parms, NewSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::NewProp_NewSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "SetSeed", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::DungeonGeneratorBase_eventSetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::DungeonGeneratorBase_eventSetSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execSetSeed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSeed(Z_Param_NewSeed);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function SetSeed

// Begin Class ADungeonGeneratorBase Function StartNewDungeon
struct Z_Construct_UFunction_ADungeonGeneratorBase_StartNewDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear current graph and call GenerationInit event.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear current graph and call GenerationInit event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_StartNewDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "StartNewDungeon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_StartNewDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_StartNewDungeon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_StartNewDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_StartNewDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execStartNewDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartNewDungeon();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function StartNewDungeon

// Begin Class ADungeonGeneratorBase Function TryPlaceRoom
struct Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics
{
	struct DungeonGeneratorBase_eventTryPlaceRoom_Parms
	{
		const URoom* Room;
		int32 DoorIndex;
		FDoorDef TargetDoor;
		const UWorld* World;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the position and rotation of a room instance and return true if there is nothing colliding with it.\n" },
#endif
		{ "CPP_Default_World", "None" },
		{ "HidePin", "World" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
		{ "ReturnDisplayName", "Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the position and rotation of a room instance and return true if there is nothing colliding with it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDoor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventTryPlaceRoom_Parms, Room), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Room_MetaData), NewProp_Room_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventTryPlaceRoom_Parms, DoorIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_TargetDoor = { "TargetDoor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventTryPlaceRoom_Parms, TargetDoor), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDoor_MetaData), NewProp_TargetDoor_MetaData) }; // 3661065545
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGeneratorBase_eventTryPlaceRoom_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
void Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGeneratorBase_eventTryPlaceRoom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGeneratorBase_eventTryPlaceRoom_Parms), &Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_DoorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_TargetDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "TryPlaceRoom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::DungeonGeneratorBase_eventTryPlaceRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::DungeonGeneratorBase_eventTryPlaceRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execTryPlaceRoom)
{
	P_GET_OBJECT_REF(URoom,Z_Param_Out_Room);
	P_GET_PROPERTY(FIntProperty,Z_Param_DoorIndex);
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_TargetDoor);
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryPlaceRoom(Z_Param_Out_Room,Z_Param_DoorIndex,Z_Param_Out_TargetDoor,Z_Param_World);
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function TryPlaceRoom

// Begin Class ADungeonGeneratorBase Function Unload
struct Z_Construct_UFunction_ADungeonGeneratorBase_Unload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unload the current dungeon\n// Do nothing when called on clients\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unload the current dungeon\nDo nothing when called on clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGeneratorBase_Unload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGeneratorBase, nullptr, "Unload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGeneratorBase_Unload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGeneratorBase_Unload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGeneratorBase_Unload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGeneratorBase_Unload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGeneratorBase::execUnload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unload();
	P_NATIVE_END;
}
// End Class ADungeonGeneratorBase Function Unload

// Begin Class ADungeonGeneratorBase
void ADungeonGeneratorBase::StaticRegisterNativesADungeonGeneratorBase()
{
	UClass* Class = ADungeonGeneratorBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddRoomToDungeon", &ADungeonGeneratorBase::execAddRoomToDungeon },
		{ "ChooseDoor", &ADungeonGeneratorBase::execChooseDoor },
		{ "CreateDungeon", &ADungeonGeneratorBase::execCreateDungeon },
		{ "CreateRoomInstance", &ADungeonGeneratorBase::execCreateRoomInstance },
		{ "FinalizeDungeon", &ADungeonGeneratorBase::execFinalizeDungeon },
		{ "Generate", &ADungeonGeneratorBase::execGenerate },
		{ "GetCompatibleRoomData", &ADungeonGeneratorBase::execGetCompatibleRoomData },
		{ "GetProgress", &ADungeonGeneratorBase::execGetProgress },
		{ "GetRandomRoomData", &ADungeonGeneratorBase::execGetRandomRoomData },
		{ "GetRandomRoomDataWeighted", &ADungeonGeneratorBase::execGetRandomRoomDataWeighted },
		{ "GetRandomStream", &ADungeonGeneratorBase::execGetRandomStream },
		{ "GetSeed", &ADungeonGeneratorBase::execGetSeed },
		{ "GetVisibilityPawn", &ADungeonGeneratorBase::execGetVisibilityPawn },
		{ "InitializeDungeon", &ADungeonGeneratorBase::execInitializeDungeon },
		{ "OnFailedToAddRoom", &ADungeonGeneratorBase::execOnFailedToAddRoom },
		{ "OnGenerationFailed", &ADungeonGeneratorBase::execOnGenerationFailed },
		{ "OnGenerationInit", &ADungeonGeneratorBase::execOnGenerationInit },
		{ "OnPostGeneration", &ADungeonGeneratorBase::execOnPostGeneration },
		{ "OnPreGeneration", &ADungeonGeneratorBase::execOnPreGeneration },
		{ "OnRoomAdded", &ADungeonGeneratorBase::execOnRoomAdded },
		{ "SetSeed", &ADungeonGeneratorBase::execSetSeed },
		{ "StartNewDungeon", &ADungeonGeneratorBase::execStartNewDungeon },
		{ "TryPlaceRoom", &ADungeonGeneratorBase::execTryPlaceRoom },
		{ "Unload", &ADungeonGeneratorBase::execUnload },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonGeneratorBase);
UClass* Z_Construct_UClass_ADungeonGeneratorBase_NoRegister()
{
	return ADungeonGeneratorBase::StaticClass();
}
struct Z_Construct_UClass_ADungeonGeneratorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the main actor of the plugin. The dungeon generator is responsible to generate dungeons and replicate them over the network. \n" },
#endif
		{ "IncludePath", "DungeonGeneratorBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the main actor of the plugin. The dungeon generator is responsible to generate dungeons and replicate them over the network." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreGenerationEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once before anything else when generating a new dungeon.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once before anything else when generating a new dungeon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostGenerationEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once after all the dungeon generation (even if failed).\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once after all the dungeon generation (even if failed)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerationInitEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called before trying to generate a new dungeon and each time IsValidDungeon return false.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before trying to generate a new dungeon and each time IsValidDungeon return false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerationFailedEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\n// No dungeon had been generated.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\nNo dungeon had been generated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomAddedEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time a room is added in the dungeon (but not spawned yet).\n// Those rooms can be destroyed without loading them if the generation try is not valid.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called each time a room is added in the dungeon (but not spawned yet).\nThose rooms can be destroyed without loading them if the generation try is not valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailedToAddRoomEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time no room could have been placed at a door (all room placement tries have been exhausted).\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called each time no room could have been placed at a door (all room placement tries have been exhausted)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGeneratorTransform_MetaData[] = {
		{ "Category", "Procedural Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If ticked, the rooms location and rotation will be relative to this actor transform.\n// If unticked, the rooms will be placed relatively to the world's origin.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If ticked, the rooms location and rotation will be relative to this actor transform.\nIf unticked, the rooms will be placed relatively to the world's origin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedType_MetaData[] = {
		{ "Category", "Procedural Generation|Seed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How to handle the seed at each generation call.\n// Random: Generate and use a random seed.\n// Auto Increment: Use Seed for first generation, and increment it by SeedIncrement in each subsequent generation.\n// Fixed: Use only Seed for each generation.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to handle the seed at each generation call.\nRandom: Generate and use a random seed.\nAuto Increment: Use Seed for first generation, and increment it by SeedIncrement in each subsequent generation.\nFixed: Use only Seed for each generation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedIncrement_MetaData[] = {
		{ "Category", "Procedural Generation|Seed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The increment number for each subsequent dungeon generation when SeedType is AutoIncrement.\n" },
#endif
		{ "DisplayAfter", "Seed" },
		{ "EditCondition", "SeedType==ESeedType::AutoIncrement" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The increment number for each subsequent dungeon generation when SeedType is AutoIncrement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldCollisionChecks_MetaData[] = {
		{ "Category", "Procedural Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If ticked, when trying to place a new room during a dungeon generation,\n// a box overlap test will be made to make sure the room will not spawn\n// inside existing meshes in the persistent world.\n// This is a heavy work and should be ticked only when necessary.\n// Does not have impact during gameplay. Only during the generation process.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If ticked, when trying to place a new room during a dungeon generation,\na box overlap test will be made to make sure the room will not spawn\ninside existing meshes in the persistent world.\nThis is a heavy work and should be ticked only when necessary.\nDoes not have impact during gameplay. Only during the generation process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "Category", "Dungeon Generator" },
		{ "DisplayName", "Rooms" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Procedural Generation|Seed" },
		{ "EditCondition", "SeedType!=ESeedType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGeneratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreGenerationEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostGenerationEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerationInitEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerationFailedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRoomAddedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailedToAddRoomEvent;
	static void NewProp_bUseGeneratorTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGeneratorTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeedType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedType;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SeedIncrement;
	static void NewProp_bUseWorldCollisionChecks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldCollisionChecks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Seed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorList;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Generation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_AddRoomToDungeon, "AddRoomToDungeon" }, // 4285814945
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_ChooseDoor, "ChooseDoor" }, // 627064545
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_CreateDungeon, "CreateDungeon" }, // 860996237
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_CreateRoomInstance, "CreateRoomInstance" }, // 2519505396
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_FinalizeDungeon, "FinalizeDungeon" }, // 1674930353
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_Generate, "Generate" }, // 199515025
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_GetCompatibleRoomData, "GetCompatibleRoomData" }, // 4118349778
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_GetProgress, "GetProgress" }, // 2781760690
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomData, "GetRandomRoomData" }, // 1406764557
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomRoomDataWeighted, "GetRandomRoomDataWeighted" }, // 804922878
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_GetRandomStream, "GetRandomStream" }, // 1866634386
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_GetSeed, "GetSeed" }, // 2100929760
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_GetVisibilityPawn, "GetVisibilityPawn" }, // 2554828416
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_InitializeDungeon, "InitializeDungeon" }, // 2915102290
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_OnFailedToAddRoom, "OnFailedToAddRoom" }, // 1157757214
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationFailed, "OnGenerationFailed" }, // 565934793
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_OnGenerationInit, "OnGenerationInit" }, // 4290946408
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_OnPostGeneration, "OnPostGeneration" }, // 1013352391
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_OnPreGeneration, "OnPreGeneration" }, // 4260073458
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_OnRoomAdded, "OnRoomAdded" }, // 997008871
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_SetSeed, "SetSeed" }, // 3867147143
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_StartNewDungeon, "StartNewDungeon" }, // 2836736760
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_TryPlaceRoom, "TryPlaceRoom" }, // 2959134743
		{ &Z_Construct_UFunction_ADungeonGeneratorBase_Unload, "Unload" }, // 2097568041
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGeneratorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnPreGenerationEvent = { "OnPreGenerationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, OnPreGenerationEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreGenerationEvent_MetaData), NewProp_OnPreGenerationEvent_MetaData) }; // 2345146299
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnPostGenerationEvent = { "OnPostGenerationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, OnPostGenerationEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostGenerationEvent_MetaData), NewProp_OnPostGenerationEvent_MetaData) }; // 2345146299
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnGenerationInitEvent = { "OnGenerationInitEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, OnGenerationInitEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerationInitEvent_MetaData), NewProp_OnGenerationInitEvent_MetaData) }; // 2345146299
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnGenerationFailedEvent = { "OnGenerationFailedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, OnGenerationFailedEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerationFailedEvent_MetaData), NewProp_OnGenerationFailedEvent_MetaData) }; // 2345146299
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnRoomAddedEvent = { "OnRoomAddedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, OnRoomAddedEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoomAddedEvent_MetaData), NewProp_OnRoomAddedEvent_MetaData) }; // 4028832422
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnFailedToAddRoomEvent = { "OnFailedToAddRoomEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, OnFailedToAddRoomEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailedToAddRoomEvent_MetaData), NewProp_OnFailedToAddRoomEvent_MetaData) }; // 2398409185
void Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_bUseGeneratorTransform_SetBit(void* Obj)
{
	((ADungeonGeneratorBase*)Obj)->bUseGeneratorTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_bUseGeneratorTransform = { "bUseGeneratorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGeneratorBase), &Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_bUseGeneratorTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGeneratorTransform_MetaData), NewProp_bUseGeneratorTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_SeedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_SeedType = { "SeedType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, SeedType), Z_Construct_UEnum_ProceduralDungeon_ESeedType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedType_MetaData), NewProp_SeedType_MetaData) }; // 1284640329
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_SeedIncrement = { "SeedIncrement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, SeedIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedIncrement_MetaData), NewProp_SeedIncrement_MetaData) };
void Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_bUseWorldCollisionChecks_SetBit(void* Obj)
{
	((ADungeonGeneratorBase*)Obj)->bUseWorldCollisionChecks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_bUseWorldCollisionChecks = { "bUseWorldCollisionChecks", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGeneratorBase), &Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_bUseWorldCollisionChecks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldCollisionChecks_MetaData), NewProp_bUseWorldCollisionChecks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, Graph), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_DoorList_Inner = { "DoorList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_DoorList = { "DoorList", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, DoorList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorList_MetaData), NewProp_DoorList_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_Generation = { "Generation", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGeneratorBase, Generation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generation_MetaData), NewProp_Generation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGeneratorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnPreGenerationEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnPostGenerationEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnGenerationInitEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnGenerationFailedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnRoomAddedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_OnFailedToAddRoomEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_bUseGeneratorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_SeedType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_SeedType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_SeedIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_bUseWorldCollisionChecks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_DoorList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_DoorList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGeneratorBase_Statics::NewProp_Generation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonGeneratorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGeneratorBase_Statics::ClassParams = {
	&ADungeonGeneratorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADungeonGeneratorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorBase_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGeneratorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonGeneratorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonGeneratorBase()
{
	if (!Z_Registration_Info_UClass_ADungeonGeneratorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonGeneratorBase.OuterSingleton, Z_Construct_UClass_ADungeonGeneratorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonGeneratorBase.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<ADungeonGeneratorBase>()
{
	return ADungeonGeneratorBase::StaticClass();
}
void ADungeonGeneratorBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Seed(TEXT("Seed"));
	static const FName Name_Generation(TEXT("Generation"));
	const bool bIsValid = true
		&& Name_Seed == ClassReps[(int32)ENetFields_Private::Seed].Property->GetFName()
		&& Name_Generation == ClassReps[(int32)ENetFields_Private::Generation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADungeonGeneratorBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGeneratorBase);
ADungeonGeneratorBase::~ADungeonGeneratorBase() {}
// End Class ADungeonGeneratorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGenerationResult_StaticEnum, TEXT("EGenerationResult"), &Z_Registration_Info_UEnum_EGenerationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2848199281U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGeneratorBase, ADungeonGeneratorBase::StaticClass, TEXT("ADungeonGeneratorBase"), &Z_Registration_Info_UClass_ADungeonGeneratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGeneratorBase), 2096949078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_350178864(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

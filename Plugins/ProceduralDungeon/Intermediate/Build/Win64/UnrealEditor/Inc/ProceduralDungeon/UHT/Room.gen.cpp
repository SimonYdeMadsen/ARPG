// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/Room.h"
#include "ProceduralDungeon/Public/RoomCustomData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoom() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGeneratorBase_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReadOnlyRoom();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReadOnlyRoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FCustomDataPair();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FRoomConnection();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin ScriptStruct FRoomConnection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoomConnection;
class UScriptStruct* FRoomConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoomConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoomConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomConnection, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("RoomConnection"));
	}
	return Z_Registration_Info_UScriptStruct_RoomConnection.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<FRoomConnection>()
{
	return FRoomConnection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRoomConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherRoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherDoorIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OtherRoom;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherDoorIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomConnection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom = { "OtherRoom", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomConnection, OtherRoom), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherRoom_MetaData), NewProp_OtherRoom_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherDoorIndex = { "OtherDoorIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomConnection, OtherDoorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherDoorIndex_MetaData), NewProp_OtherDoorIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_DoorInstance = { "DoorInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRoomConnection, DoorInstance), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorInstance_MetaData), NewProp_DoorInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_OtherDoorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomConnection_Statics::NewProp_DoorInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomConnection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	&NewStructOps,
	"RoomConnection",
	Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::PropPointers),
	sizeof(FRoomConnection),
	alignof(FRoomConnection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomConnection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRoomConnection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRoomConnection()
{
	if (!Z_Registration_Info_UScriptStruct_RoomConnection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoomConnection.InnerSingleton, Z_Construct_UScriptStruct_FRoomConnection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RoomConnection.InnerSingleton;
}
// End ScriptStruct FRoomConnection

// Begin ScriptStruct FCustomDataPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomDataPair;
class UScriptStruct* FCustomDataPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomDataPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomDataPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomDataPair, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("CustomDataPair"));
	}
	return Z_Registration_Info_UScriptStruct_CustomDataPair.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<FCustomDataPair>()
{
	return FCustomDataPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomDataPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomDataPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_DataClass = { "DataClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomDataPair, DataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataClass_MetaData), NewProp_DataClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomDataPair, Data), Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomDataPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_DataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomDataPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	&NewStructOps,
	"CustomDataPair",
	Z_Construct_UScriptStruct_FCustomDataPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataPair_Statics::PropPointers),
	sizeof(FCustomDataPair),
	alignof(FCustomDataPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomDataPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomDataPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomDataPair()
{
	if (!Z_Registration_Info_UScriptStruct_CustomDataPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomDataPair.InnerSingleton, Z_Construct_UScriptStruct_FCustomDataPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomDataPair.InnerSingleton;
}
// End ScriptStruct FCustomDataPair

// Begin Interface UReadOnlyRoom Function AreAllDoorsConnected
struct Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics
{
	struct ReadOnlyRoom_eventAreAllDoorsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if all the doors of this room are connected to other rooms.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if all the doors of this room are connected to other rooms." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ReadOnlyRoom_eventAreAllDoorsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadOnlyRoom_eventAreAllDoorsConnected_Parms), &Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "AreAllDoorsConnected", nullptr, nullptr, Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::ReadOnlyRoom_eventAreAllDoorsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::ReadOnlyRoom_eventAreAllDoorsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execAreAllDoorsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AreAllDoorsConnected();
	P_NATIVE_END;
}
// End Interface UReadOnlyRoom Function AreAllDoorsConnected

// Begin Interface UReadOnlyRoom Function CountConnectedDoors
struct Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics
{
	struct ReadOnlyRoom_eventCountConnectedDoors_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if all the doors of this room are connected to other rooms.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if all the doors of this room are connected to other rooms." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventCountConnectedDoors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "CountConnectedDoors", nullptr, nullptr, Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::ReadOnlyRoom_eventCountConnectedDoors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::ReadOnlyRoom_eventCountConnectedDoors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execCountConnectedDoors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountConnectedDoors();
	P_NATIVE_END;
}
// End Interface UReadOnlyRoom Function CountConnectedDoors

// Begin Interface UReadOnlyRoom Function GetBoundsCenter
struct Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics
{
	struct ReadOnlyRoom_eventGetBoundsCenter_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the world center position of the room.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the world center position of the room." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetBoundsCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetBoundsCenter", nullptr, nullptr, Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::ReadOnlyRoom_eventGetBoundsCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::ReadOnlyRoom_eventGetBoundsCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetBoundsCenter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBoundsCenter();
	P_NATIVE_END;
}
// End Interface UReadOnlyRoom Function GetBoundsCenter

// Begin Interface UReadOnlyRoom Function GetBoundsExtent
struct Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics
{
	struct ReadOnlyRoom_eventGetBoundsExtent_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the world extents (half size) of the room.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the world extents (half size) of the room." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetBoundsExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetBoundsExtent", nullptr, nullptr, Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::ReadOnlyRoom_eventGetBoundsExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::ReadOnlyRoom_eventGetBoundsExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetBoundsExtent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetBoundsExtent();
	P_NATIVE_END;
}
// End Interface UReadOnlyRoom Function GetBoundsExtent

// Begin Interface UReadOnlyRoom Function GetDirection
struct Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics
{
	struct ReadOnlyRoom_eventGetDirection_Parms
	{
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the world extents (half size) of the room.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the world extents (half size) of the room." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetDirection_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetDirection", nullptr, nullptr, Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::ReadOnlyRoom_eventGetDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::ReadOnlyRoom_eventGetDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=P_THIS->GetDirection();
	P_NATIVE_END;
}
// End Interface UReadOnlyRoom Function GetDirection

// Begin Interface UReadOnlyRoom Function GetPosition
struct Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics
{
	struct ReadOnlyRoom_eventGetPosition_Parms
	{
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the world extents (half size) of the room.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the world extents (half size) of the room." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::ReadOnlyRoom_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::ReadOnlyRoom_eventGetPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->GetPosition();
	P_NATIVE_END;
}
// End Interface UReadOnlyRoom Function GetPosition

// Begin Interface UReadOnlyRoom Function GetRoomData
struct Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics
{
	struct ReadOnlyRoom_eventGetRoomData_Parms
	{
		const URoomData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the room data asset of this room instance.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the room data asset of this room instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetRoomData", nullptr, nullptr, Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::ReadOnlyRoom_eventGetRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::ReadOnlyRoom_eventGetRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetRoomData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const URoomData**)Z_Param__Result=P_THIS->GetRoomData();
	P_NATIVE_END;
}
// End Interface UReadOnlyRoom Function GetRoomData

// Begin Interface UReadOnlyRoom Function GetRoomID
struct Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics
{
	struct ReadOnlyRoom_eventGetRoomID_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the unique ID (per-dungeon) of the room.\n// The first room has ID 0 and then it increases in the order of placed room.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the unique ID (per-dungeon) of the room.\nThe first room has ID 0 and then it increases in the order of placed room." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadOnlyRoom_eventGetRoomID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadOnlyRoom, nullptr, "GetRoomID", nullptr, nullptr, Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::ReadOnlyRoom_eventGetRoomID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::ReadOnlyRoom_eventGetRoomID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UReadOnlyRoom_GetRoomID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadOnlyRoom_GetRoomID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IReadOnlyRoom::execGetRoomID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetRoomID();
	P_NATIVE_END;
}
// End Interface UReadOnlyRoom Function GetRoomID

// Begin Interface UReadOnlyRoom
void UReadOnlyRoom::StaticRegisterNativesUReadOnlyRoom()
{
	UClass* Class = UReadOnlyRoom::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreAllDoorsConnected", &IReadOnlyRoom::execAreAllDoorsConnected },
		{ "CountConnectedDoors", &IReadOnlyRoom::execCountConnectedDoors },
		{ "GetBoundsCenter", &IReadOnlyRoom::execGetBoundsCenter },
		{ "GetBoundsExtent", &IReadOnlyRoom::execGetBoundsExtent },
		{ "GetDirection", &IReadOnlyRoom::execGetDirection },
		{ "GetPosition", &IReadOnlyRoom::execGetPosition },
		{ "GetRoomData", &IReadOnlyRoom::execGetRoomData },
		{ "GetRoomID", &IReadOnlyRoom::execGetRoomID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadOnlyRoom);
UClass* Z_Construct_UClass_UReadOnlyRoom_NoRegister()
{
	return UReadOnlyRoom::StaticClass();
}
struct Z_Construct_UClass_UReadOnlyRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Allow access to only some members of Room instances during the generation process." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadOnlyRoom_AreAllDoorsConnected, "AreAllDoorsConnected" }, // 320627936
		{ &Z_Construct_UFunction_UReadOnlyRoom_CountConnectedDoors, "CountConnectedDoors" }, // 1402148901
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetBoundsCenter, "GetBoundsCenter" }, // 3611878226
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetBoundsExtent, "GetBoundsExtent" }, // 2755356984
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetDirection, "GetDirection" }, // 3714301047
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetPosition, "GetPosition" }, // 2297756492
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetRoomData, "GetRoomData" }, // 2948467431
		{ &Z_Construct_UFunction_UReadOnlyRoom_GetRoomID, "GetRoomID" }, // 1895944949
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IReadOnlyRoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReadOnlyRoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadOnlyRoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadOnlyRoom_Statics::ClassParams = {
	&UReadOnlyRoom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadOnlyRoom_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadOnlyRoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReadOnlyRoom()
{
	if (!Z_Registration_Info_UClass_UReadOnlyRoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadOnlyRoom.OuterSingleton, Z_Construct_UClass_UReadOnlyRoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReadOnlyRoom.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UReadOnlyRoom>()
{
	return UReadOnlyRoom::StaticClass();
}
UReadOnlyRoom::UReadOnlyRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReadOnlyRoom);
UReadOnlyRoom::~UReadOnlyRoom() {}
// End Interface UReadOnlyRoom

// Begin Class URoom Function ForceVisibility
struct Z_Construct_UFunction_URoom_ForceVisibility_Statics
{
	struct Room_eventForceVisibility_Parms
	{
		bool bForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Force the room to be veisible\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force the room to be veisible" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URoom_ForceVisibility_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((Room_eventForceVisibility_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_ForceVisibility_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventForceVisibility_Parms), &Z_Construct_UFunction_URoom_ForceVisibility_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_ForceVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_ForceVisibility_Statics::NewProp_bForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_ForceVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_ForceVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "ForceVisibility", nullptr, nullptr, Z_Construct_UFunction_URoom_ForceVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_ForceVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_ForceVisibility_Statics::Room_eventForceVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_ForceVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_ForceVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_ForceVisibility_Statics::Room_eventForceVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_ForceVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_ForceVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execForceVisibility)
{
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceVisibility(Z_Param_bForce);
	P_NATIVE_END;
}
// End Class URoom Function ForceVisibility

// Begin Class URoom Function GetAllConnectedRooms
struct Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics
{
	struct Room_eventGetAllConnectedRooms_Parms
	{
		TArray<URoom*> ConnectedRooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all the room instances connected with this one.\n// @param ConnectedRooms This array will be filled with the room instances.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all the room instances connected with this one.\n@param ConnectedRooms This array will be filled with the room instances." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedRooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::NewProp_ConnectedRooms_Inner = { "ConnectedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::NewProp_ConnectedRooms = { "ConnectedRooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetAllConnectedRooms_Parms, ConnectedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::NewProp_ConnectedRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::NewProp_ConnectedRooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetAllConnectedRooms", nullptr, nullptr, Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::Room_eventGetAllConnectedRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::Room_eventGetAllConnectedRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_GetAllConnectedRooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetAllConnectedRooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execGetAllConnectedRooms)
{
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_ConnectedRooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllConnectedRooms(Z_Param_Out_ConnectedRooms);
	P_NATIVE_END;
}
// End Class URoom Function GetAllConnectedRooms

// Begin Class URoom Function GetAllDoors
struct Z_Construct_UFunction_URoom_GetAllDoors_Statics
{
	struct Room_eventGetAllDoors_Parms
	{
		TArray<ADoor*> OutDoors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fill an array with all the door actors connected to the room.\n// @param OutDoors THIS IS NOT AN INPUT! This array will be emptied and then filled with the door actors. This is your result!\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fill an array with all the door actors connected to the room.\n@param OutDoors THIS IS NOT AN INPUT! This array will be emptied and then filled with the door actors. This is your result!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDoors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDoors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetAllDoors_Statics::NewProp_OutDoors_Inner = { "OutDoors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URoom_GetAllDoors_Statics::NewProp_OutDoors = { "OutDoors", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetAllDoors_Parms, OutDoors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetAllDoors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetAllDoors_Statics::NewProp_OutDoors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetAllDoors_Statics::NewProp_OutDoors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetAllDoors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetAllDoors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetAllDoors", nullptr, nullptr, Z_Construct_UFunction_URoom_GetAllDoors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetAllDoors_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetAllDoors_Statics::Room_eventGetAllDoors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetAllDoors_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetAllDoors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_GetAllDoors_Statics::Room_eventGetAllDoors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_GetAllDoors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetAllDoors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execGetAllDoors)
{
	P_GET_TARRAY_REF(ADoor*,Z_Param_Out_OutDoors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllDoors(Z_Param_Out_OutDoors);
	P_NATIVE_END;
}
// End Class URoom Function GetAllDoors

// Begin Class URoom Function GetConnectedRoomAt
struct Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics
{
	struct Room_eventGetConnectedRoomAt_Parms
	{
		int32 DoorIndex;
		URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the connected room instance at DoorIndex.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the connected room instance at DoorIndex." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetConnectedRoomAt_Parms, DoorIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetConnectedRoomAt_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::NewProp_DoorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetConnectedRoomAt", nullptr, nullptr, Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::Room_eventGetConnectedRoomAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::Room_eventGetConnectedRoomAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_GetConnectedRoomAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetConnectedRoomAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execGetConnectedRoomAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DoorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoom**)Z_Param__Result=P_THIS->GetConnectedRoomAt(Z_Param_DoorIndex);
	P_NATIVE_END;
}
// End Class URoom Function GetConnectedRoomAt

// Begin Class URoom Function GetConnectedRoomIndex
struct Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics
{
	struct Room_eventGetConnectedRoomIndex_Parms
	{
		const URoom* OtherRoom;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the index of the provided room, or -1 if room is not connected.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the index of the provided room, or -1 if room is not connected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherRoom;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::NewProp_OtherRoom = { "OtherRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetConnectedRoomIndex_Parms, OtherRoom), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherRoom_MetaData), NewProp_OtherRoom_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetConnectedRoomIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::NewProp_OtherRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetConnectedRoomIndex", nullptr, nullptr, Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::Room_eventGetConnectedRoomIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::Room_eventGetConnectedRoomIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_GetConnectedRoomIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetConnectedRoomIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execGetConnectedRoomIndex)
{
	P_GET_OBJECT(URoom,Z_Param_OtherRoom);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetConnectedRoomIndex(Z_Param_OtherRoom);
	P_NATIVE_END;
}
// End Class URoom Function GetConnectedRoomIndex

// Begin Class URoom Function GetCustomData_BP
struct Z_Construct_UFunction_URoom_GetCustomData_BP_Statics
{
	struct Room_eventGetCustomData_BP_Parms
	{
		TSubclassOf<URoomCustomData> DataType;
		URoomCustomData* Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Access to custom data of the room.\n// @param DataType The type of the custom data to retrieve.\n// @param Data The custom data found, or null if no custom data found.\n// @return True if a custom data of the specified type has been found, false otherwise.\n" },
#endif
		{ "DeterminesOutputType", "DataType" },
		{ "DisplayName", "Get Custom Data" },
		{ "DynamicOutputParam", "Data" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Access to custom data of the room.\n@param DataType The type of the custom data to retrieve.\n@param Data The custom data found, or null if no custom data found.\n@return True if a custom data of the specified type has been found, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetCustomData_BP_Parms, DataType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetCustomData_BP_Parms, Data), Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Room_eventGetCustomData_BP_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventGetCustomData_BP_Parms), &Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetCustomData_BP", nullptr, nullptr, Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::Room_eventGetCustomData_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::Room_eventGetCustomData_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_GetCustomData_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetCustomData_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execGetCustomData_BP)
{
	P_GET_OBJECT(UClass,Z_Param_DataType);
	P_GET_OBJECT_REF(URoomCustomData,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomData_BP(Z_Param_DataType,P_ARG_GC_BARRIER(Z_Param_Out_Data));
	P_NATIVE_END;
}
// End Class URoom Function GetCustomData_BP

// Begin Class URoom Function GetDoor
struct Z_Construct_UFunction_URoom_GetDoor_Statics
{
	struct Room_eventGetDoor_Parms
	{
		int32 DoorIndex;
		ADoor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the door actor from a specific index.\n// @param DoorIndex The index of the door to retrieve.\n// @return The door actor at the index, or null if the index is out of range.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the door actor from a specific index.\n@param DoorIndex The index of the door to retrieve.\n@return The door actor at the index, or null if the index is out of range." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoom_GetDoor_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetDoor_Parms, DoorIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetDoor_Parms, ReturnValue), Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetDoor_Statics::NewProp_DoorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetDoor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetDoor", nullptr, nullptr, Z_Construct_UFunction_URoom_GetDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetDoor_Statics::Room_eventGetDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetDoor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_GetDoor_Statics::Room_eventGetDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_GetDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execGetDoor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DoorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADoor**)Z_Param__Result=P_THIS->GetDoor(Z_Param_DoorIndex);
	P_NATIVE_END;
}
// End Class URoom Function GetDoor

// Begin Class URoom Function GetDoorsWith
struct Z_Construct_UFunction_URoom_GetDoorsWith_Statics
{
	struct Room_eventGetDoorsWith_Parms
	{
		const URoom* OtherRoom;
		TArray<ADoor*> Doors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the door actor shared with the provided room.\n// Returns null if the provided room is not connected with this.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the door actor shared with the provided room.\nReturns null if the provided room is not connected with this." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherRoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Doors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetDoorsWith_Statics::NewProp_OtherRoom = { "OtherRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetDoorsWith_Parms, OtherRoom), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherRoom_MetaData), NewProp_OtherRoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoom_GetDoorsWith_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URoom_GetDoorsWith_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetDoorsWith_Parms, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetDoorsWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetDoorsWith_Statics::NewProp_OtherRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetDoorsWith_Statics::NewProp_Doors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetDoorsWith_Statics::NewProp_Doors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetDoorsWith_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetDoorsWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetDoorsWith", nullptr, nullptr, Z_Construct_UFunction_URoom_GetDoorsWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetDoorsWith_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetDoorsWith_Statics::Room_eventGetDoorsWith_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetDoorsWith_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetDoorsWith_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_GetDoorsWith_Statics::Room_eventGetDoorsWith_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_GetDoorsWith()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetDoorsWith_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execGetDoorsWith)
{
	P_GET_OBJECT(URoom,Z_Param_OtherRoom);
	P_GET_TARRAY_REF(ADoor*,Z_Param_Out_Doors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetDoorsWith(Z_Param_OtherRoom,Z_Param_Out_Doors);
	P_NATIVE_END;
}
// End Class URoom Function GetDoorsWith

// Begin Class URoom Function GetRandomStream
struct Z_Construct_UFunction_URoom_GetRandomStream_Statics
{
	struct Room_eventGetRandomStream_Parms
	{
		FRandomStream ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the RandomStream from the Dungeon Generator\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the RandomStream from the Dungeon Generator" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoom_GetRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventGetRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_GetRandomStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_GetRandomStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRandomStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "GetRandomStream", nullptr, nullptr, Z_Construct_UFunction_URoom_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRandomStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_GetRandomStream_Statics::Room_eventGetRandomStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_GetRandomStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_GetRandomStream_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_GetRandomStream_Statics::Room_eventGetRandomStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_GetRandomStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_GetRandomStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execGetRandomStream)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRandomStream*)Z_Param__Result=P_THIS->GetRandomStream();
	P_NATIVE_END;
}
// End Class URoom Function GetRandomStream

// Begin Class URoom Function HasCustomData_BP
struct Z_Construct_UFunction_URoom_HasCustomData_BP_Statics
{
	struct Room_eventHasCustomData_BP_Parms
	{
		const TSubclassOf<URoomCustomData> DataType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DataType" },
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if the room instance contains a custom data of a specific type.\n// @param DataType The type of the custom data to check.\n// @return True if the rooms has a custom data of the specified type, false otherwise.\n" },
#endif
		{ "DisplayName", "Has Custom Data" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the room instance contains a custom data of a specific type.\n@param DataType The type of the custom data to check.\n@return True if the rooms has a custom data of the specified type, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventHasCustomData_BP_Parms, DataType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) };
void Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Room_eventHasCustomData_BP_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventHasCustomData_BP_Parms), &Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "HasCustomData_BP", nullptr, nullptr, Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::Room_eventHasCustomData_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::Room_eventHasCustomData_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_HasCustomData_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_HasCustomData_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execHasCustomData_BP)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomCustomData>,Z_Param_Out_DataType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCustomData_BP(Z_Param_Out_DataType);
	P_NATIVE_END;
}
// End Class URoom Function HasCustomData_BP

// Begin Class URoom Function IsDoorConnected
struct Z_Construct_UFunction_URoom_IsDoorConnected_Statics
{
	struct Room_eventIsDoorConnected_Parms
	{
		int32 DoorIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the door at DoorIndex is connected to another room.\n// @param DoorIndex The index of the door to check.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the door at DoorIndex is connected to another room.\n@param DoorIndex The index of the door to check." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoom_IsDoorConnected_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Room_eventIsDoorConnected_Parms, DoorIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URoom_IsDoorConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Room_eventIsDoorConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_IsDoorConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventIsDoorConnected_Parms), &Z_Construct_UFunction_URoom_IsDoorConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_IsDoorConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_IsDoorConnected_Statics::NewProp_DoorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_IsDoorConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsDoorConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_IsDoorConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "IsDoorConnected", nullptr, nullptr, Z_Construct_UFunction_URoom_IsDoorConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsDoorConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_IsDoorConnected_Statics::Room_eventIsDoorConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsDoorConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_IsDoorConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_IsDoorConnected_Statics::Room_eventIsDoorConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_IsDoorConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_IsDoorConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execIsDoorConnected)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DoorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDoorConnected(Z_Param_DoorIndex);
	P_NATIVE_END;
}
// End Class URoom Function IsDoorConnected

// Begin Class URoom Function IsLocked
struct Z_Construct_UFunction_URoom_IsLocked_Statics
{
	struct Room_eventIsLocked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the room locked?\n// If it is, the doors will be locked (except if they have `Alway Unlocked`).\n" },
#endif
		{ "CompactNodeTitle", "Is Locked" },
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the room locked?\nIf it is, the doors will be locked (except if they have `Alway Unlocked`)." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URoom_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Room_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventIsLocked_Parms), &Z_Construct_UFunction_URoom_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_IsLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_IsLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "IsLocked", nullptr, nullptr, Z_Construct_UFunction_URoom_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_IsLocked_Statics::Room_eventIsLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_IsLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_IsLocked_Statics::Room_eventIsLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_IsLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_IsLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execIsLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocked();
	P_NATIVE_END;
}
// End Class URoom Function IsLocked

// Begin Class URoom Function IsPlayerInside
struct Z_Construct_UFunction_URoom_IsPlayerInside_Statics
{
	struct Room_eventIsPlayerInside_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the player currently inside the room?\n// A player can be in multiple rooms at once, for example when he stands at the door frame,\n// the player's capsule is in both rooms.\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the player currently inside the room?\nA player can be in multiple rooms at once, for example when he stands at the door frame,\nthe player's capsule is in both rooms." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URoom_IsPlayerInside_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Room_eventIsPlayerInside_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_IsPlayerInside_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventIsPlayerInside_Parms), &Z_Construct_UFunction_URoom_IsPlayerInside_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_IsPlayerInside_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_IsPlayerInside_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_IsPlayerInside_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "IsPlayerInside", nullptr, nullptr, Z_Construct_UFunction_URoom_IsPlayerInside_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::Room_eventIsPlayerInside_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_IsPlayerInside_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_IsPlayerInside_Statics::Room_eventIsPlayerInside_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_IsPlayerInside()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_IsPlayerInside_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execIsPlayerInside)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInside();
	P_NATIVE_END;
}
// End Class URoom Function IsPlayerInside

// Begin Class URoom Function IsVisible
struct Z_Construct_UFunction_URoom_IsVisible_Statics
{
	struct Room_eventIsVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the room currently visible?\n" },
#endif
		{ "CompactNodeTitle", "Is Visible" },
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the room currently visible?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URoom_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Room_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventIsVisible_Parms), &Z_Construct_UFunction_URoom_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_IsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_IsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_URoom_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_IsVisible_Statics::Room_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_IsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_IsVisible_Statics::Room_eventIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_IsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_IsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execIsVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisible();
	P_NATIVE_END;
}
// End Class URoom Function IsVisible

// Begin Class URoom Function Lock
struct Z_Construct_UFunction_URoom_Lock_Statics
{
	struct Room_eventLock_Parms
	{
		bool lock;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lock or unlock the room instance.\n// Will lock/unlock the doors too (except if they have `Alway Unlocked`).\n// @param lock Should the room be locked?\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lock or unlock the room instance.\nWill lock/unlock the doors too (except if they have `Alway Unlocked`).\n@param lock Should the room be locked?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_lock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_lock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URoom_Lock_Statics::NewProp_lock_SetBit(void* Obj)
{
	((Room_eventLock_Parms*)Obj)->lock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoom_Lock_Statics::NewProp_lock = { "lock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Room_eventLock_Parms), &Z_Construct_UFunction_URoom_Lock_Statics::NewProp_lock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoom_Lock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoom_Lock_Statics::NewProp_lock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_Lock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "Lock", nullptr, nullptr, Z_Construct_UFunction_URoom_Lock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_Lock_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoom_Lock_Statics::Room_eventLock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_Lock_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_Lock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoom_Lock_Statics::Room_eventLock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoom_Lock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_Lock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execLock)
{
	P_GET_UBOOL(Z_Param_lock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Lock(Z_Param_lock);
	P_NATIVE_END;
}
// End Class URoom Function Lock

// Begin Class URoom Function OnInstanceLoaded
struct Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// needed macro for binding to delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "needed macro for binding to delegate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "OnInstanceLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URoom_OnInstanceLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_OnInstanceLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execOnInstanceLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInstanceLoaded();
	P_NATIVE_END;
}
// End Class URoom Function OnInstanceLoaded

// Begin Class URoom Function OnRep_Connections
struct Z_Construct_UFunction_URoom_OnRep_Connections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Needed macro for replication to work\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Needed macro for replication to work" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_OnRep_Connections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "OnRep_Connections", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_OnRep_Connections_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_OnRep_Connections_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URoom_OnRep_Connections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_OnRep_Connections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execOnRep_Connections)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Connections();
	P_NATIVE_END;
}
// End Class URoom Function OnRep_Connections

// Begin Class URoom Function OnRep_Id
struct Z_Construct_UFunction_URoom_OnRep_Id_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Needed macro for replication to work\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Needed macro for replication to work" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_OnRep_Id_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "OnRep_Id", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_OnRep_Id_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_OnRep_Id_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URoom_OnRep_Id()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_OnRep_Id_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execOnRep_Id)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Id();
	P_NATIVE_END;
}
// End Class URoom Function OnRep_Id

// Begin Class URoom Function OnRep_IsLocked
struct Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Needed macro for replication to work\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Needed macro for replication to work" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "OnRep_IsLocked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URoom_OnRep_IsLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_OnRep_IsLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execOnRep_IsLocked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsLocked();
	P_NATIVE_END;
}
// End Class URoom Function OnRep_IsLocked

// Begin Class URoom Function OnRep_RoomData
struct Z_Construct_UFunction_URoom_OnRep_RoomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Needed macro for replication to work\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Needed macro for replication to work" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoom_OnRep_RoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoom, nullptr, "OnRep_RoomData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoom_OnRep_RoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoom_OnRep_RoomData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URoom_OnRep_RoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoom_OnRep_RoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoom::execOnRep_RoomData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RoomData();
	P_NATIVE_END;
}
// End Class URoom Function OnRep_RoomData

// Begin Class URoom
void URoom::StaticRegisterNativesURoom()
{
	UClass* Class = URoom::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceVisibility", &URoom::execForceVisibility },
		{ "GetAllConnectedRooms", &URoom::execGetAllConnectedRooms },
		{ "GetAllDoors", &URoom::execGetAllDoors },
		{ "GetConnectedRoomAt", &URoom::execGetConnectedRoomAt },
		{ "GetConnectedRoomIndex", &URoom::execGetConnectedRoomIndex },
		{ "GetCustomData_BP", &URoom::execGetCustomData_BP },
		{ "GetDoor", &URoom::execGetDoor },
		{ "GetDoorsWith", &URoom::execGetDoorsWith },
		{ "GetRandomStream", &URoom::execGetRandomStream },
		{ "HasCustomData_BP", &URoom::execHasCustomData_BP },
		{ "IsDoorConnected", &URoom::execIsDoorConnected },
		{ "IsLocked", &URoom::execIsLocked },
		{ "IsPlayerInside", &URoom::execIsPlayerInside },
		{ "IsVisible", &URoom::execIsVisible },
		{ "Lock", &URoom::execLock },
		{ "OnInstanceLoaded", &URoom::execOnInstanceLoaded },
		{ "OnRep_Connections", &URoom::execOnRep_Connections },
		{ "OnRep_Id", &URoom::execOnRep_Id },
		{ "OnRep_IsLocked", &URoom::execOnRep_IsLocked },
		{ "OnRep_RoomData", &URoom::execOnRep_RoomData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoom);
UClass* Z_Construct_UClass_URoom_NoRegister()
{
	return URoom::StaticClass();
}
struct Z_Construct_UClass_URoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The room instances of the dungeon.\n// Holds data specific to each room instance, e.g. location, direction, is player inside, room custom data, etc.\n" },
#endif
		{ "IncludePath", "Room.h" },
		{ "ModuleRelativePath", "Public/Room.h" },
		{ "ShortToolTip", "The room instances of the dungeon." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The room instances of the dungeon.\nHolds data specific to each room instance, e.g. location, direction, is player inside, room custom data, etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: Make them private\n" },
#endif
		{ "ModuleRelativePath", "Public/Room.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: Make them private" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Room.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GeneratorOwner;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
	static void NewProp_bIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoom_ForceVisibility, "ForceVisibility" }, // 4066405156
		{ &Z_Construct_UFunction_URoom_GetAllConnectedRooms, "GetAllConnectedRooms" }, // 1848479660
		{ &Z_Construct_UFunction_URoom_GetAllDoors, "GetAllDoors" }, // 303881271
		{ &Z_Construct_UFunction_URoom_GetConnectedRoomAt, "GetConnectedRoomAt" }, // 774664264
		{ &Z_Construct_UFunction_URoom_GetConnectedRoomIndex, "GetConnectedRoomIndex" }, // 3298230147
		{ &Z_Construct_UFunction_URoom_GetCustomData_BP, "GetCustomData_BP" }, // 456403637
		{ &Z_Construct_UFunction_URoom_GetDoor, "GetDoor" }, // 3329981696
		{ &Z_Construct_UFunction_URoom_GetDoorsWith, "GetDoorsWith" }, // 3020033632
		{ &Z_Construct_UFunction_URoom_GetRandomStream, "GetRandomStream" }, // 3243261312
		{ &Z_Construct_UFunction_URoom_HasCustomData_BP, "HasCustomData_BP" }, // 2237662059
		{ &Z_Construct_UFunction_URoom_IsDoorConnected, "IsDoorConnected" }, // 597185030
		{ &Z_Construct_UFunction_URoom_IsLocked, "IsLocked" }, // 3691834318
		{ &Z_Construct_UFunction_URoom_IsPlayerInside, "IsPlayerInside" }, // 3874179263
		{ &Z_Construct_UFunction_URoom_IsVisible, "IsVisible" }, // 316328911
		{ &Z_Construct_UFunction_URoom_Lock, "Lock" }, // 360632581
		{ &Z_Construct_UFunction_URoom_OnInstanceLoaded, "OnInstanceLoaded" }, // 1777068720
		{ &Z_Construct_UFunction_URoom_OnRep_Connections, "OnRep_Connections" }, // 353749397
		{ &Z_Construct_UFunction_URoom_OnRep_Id, "OnRep_Id" }, // 1951149509
		{ &Z_Construct_UFunction_URoom_OnRep_IsLocked, "OnRep_IsLocked" }, // 3059925681
		{ &Z_Construct_UFunction_URoom_OnRep_RoomData, "OnRep_RoomData" }, // 4274132222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Instance), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instance_MetaData), NewProp_Instance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Direction), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 687843478
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_RoomData = { "RoomData", "OnRep_RoomData", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomData_MetaData), NewProp_RoomData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomDataPair, METADATA_PARAMS(0, nullptr) }; // 610714562
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) }; // 610714562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoomConnection, METADATA_PARAMS(0, nullptr) }; // 3036610391
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Connections = { "Connections", "OnRep_Connections", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) }; // 3036610391
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_GeneratorOwner = { "GeneratorOwner", nullptr, (EPropertyFlags)0x0044000000000020, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, GeneratorOwner), Z_Construct_UClass_ADungeonGeneratorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorOwner_MetaData), NewProp_GeneratorOwner_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_URoom_Statics::NewProp_Id = { "Id", "OnRep_Id", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoom, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
void Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked_SetBit(void* Obj)
{
	((URoom*)Obj)->bIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked = { "bIsLocked", "OnRep_IsLocked", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URoom), &Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocked_MetaData), NewProp_bIsLocked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_CustomData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Connections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Connections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_GeneratorOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoom_Statics::NewProp_bIsLocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URoom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicableObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URoom_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UReadOnlyRoom_NoRegister, (int32)VTABLE_OFFSET(URoom, IReadOnlyRoom), false },  // 3424549496
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoom_Statics::ClassParams = {
	&URoom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URoom_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoom_Statics::Class_MetaDataParams), Z_Construct_UClass_URoom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoom()
{
	if (!Z_Registration_Info_UClass_URoom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoom.OuterSingleton, Z_Construct_UClass_URoom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoom.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<URoom>()
{
	return URoom::StaticClass();
}
void URoom::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Position(TEXT("Position"));
	static const FName Name_Direction(TEXT("Direction"));
	static const FName Name_RoomData(TEXT("RoomData"));
	static const FName Name_CustomData(TEXT("CustomData"));
	static const FName Name_Connections(TEXT("Connections"));
	static const FName Name_GeneratorOwner(TEXT("GeneratorOwner"));
	static const FName Name_Id(TEXT("Id"));
	static const FName Name_bIsLocked(TEXT("bIsLocked"));
	const bool bIsValid = true
		&& Name_Position == ClassReps[(int32)ENetFields_Private::Position].Property->GetFName()
		&& Name_Direction == ClassReps[(int32)ENetFields_Private::Direction].Property->GetFName()
		&& Name_RoomData == ClassReps[(int32)ENetFields_Private::RoomData].Property->GetFName()
		&& Name_CustomData == ClassReps[(int32)ENetFields_Private::CustomData].Property->GetFName()
		&& Name_Connections == ClassReps[(int32)ENetFields_Private::Connections].Property->GetFName()
		&& Name_GeneratorOwner == ClassReps[(int32)ENetFields_Private::GeneratorOwner].Property->GetFName()
		&& Name_Id == ClassReps[(int32)ENetFields_Private::Id].Property->GetFName()
		&& Name_bIsLocked == ClassReps[(int32)ENetFields_Private::bIsLocked].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URoom"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoom);
URoom::~URoom() {}
// End Class URoom

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRoomConnection::StaticStruct, Z_Construct_UScriptStruct_FRoomConnection_Statics::NewStructOps, TEXT("RoomConnection"), &Z_Registration_Info_UScriptStruct_RoomConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoomConnection), 3036610391U) },
		{ FCustomDataPair::StaticStruct, Z_Construct_UScriptStruct_FCustomDataPair_Statics::NewStructOps, TEXT("CustomDataPair"), &Z_Registration_Info_UScriptStruct_CustomDataPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomDataPair), 610714562U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReadOnlyRoom, UReadOnlyRoom::StaticClass, TEXT("UReadOnlyRoom"), &Z_Registration_Info_UClass_UReadOnlyRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadOnlyRoom), 3424549496U) },
		{ Z_Construct_UClass_URoom, URoom::StaticClass, TEXT("URoom"), &Z_Registration_Info_UClass_URoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoom), 566292184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_875277137(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

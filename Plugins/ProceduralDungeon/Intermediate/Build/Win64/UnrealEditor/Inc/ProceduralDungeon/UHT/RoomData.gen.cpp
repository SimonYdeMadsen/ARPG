// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomData.h"
#include "ProceduralDungeon/Public/ProceduralDungeonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Class URoomData Function CleanupRoom
struct RoomData_eventCleanupRoom_Parms
{
	URoom* Room;
	UDungeonGraph* Dungeon;
};
static FName NAME_URoomData_CleanupRoom = FName(TEXT("CleanupRoom"));
void URoomData::CleanupRoom(URoom* Room, UDungeonGraph* Dungeon) const
{
	RoomData_eventCleanupRoom_Parms Parms;
	Parms.Room=Room;
	Parms.Dungeon=Dungeon;
	const_cast<URoomData*>(this)->ProcessEvent(FindFunctionChecked(NAME_URoomData_CleanupRoom),&Parms);
}
struct Z_Construct_UFunction_URoomData_CleanupRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_CleanupRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventCleanupRoom_Parms, Room), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_CleanupRoom_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventCleanupRoom_Parms, Dungeon), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_CleanupRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_CleanupRoom_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_CleanupRoom_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_CleanupRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_CleanupRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "CleanupRoom", nullptr, nullptr, Z_Construct_UFunction_URoomData_CleanupRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_CleanupRoom_Statics::PropPointers), sizeof(RoomData_eventCleanupRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_CleanupRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_CleanupRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(RoomData_eventCleanupRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_CleanupRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_CleanupRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execCleanupRoom)
{
	P_GET_OBJECT(URoom,Z_Param_Room);
	P_GET_OBJECT(UDungeonGraph,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupRoom_Implementation(Z_Param_Room,Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class URoomData Function CleanupRoom

// Begin Class URoomData Function GetNbDoor
struct Z_Construct_UFunction_URoomData_GetNbDoor_Statics
{
	struct RoomData_eventGetNbDoor_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "CompactNodeTitle", "Door Count" },
		{ "DisplayName", "Door Count" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoomData_GetNbDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventGetNbDoor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_GetNbDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_GetNbDoor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_GetNbDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "GetNbDoor", nullptr, nullptr, Z_Construct_UFunction_URoomData_GetNbDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::RoomData_eventGetNbDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_GetNbDoor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoomData_GetNbDoor_Statics::RoomData_eventGetNbDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_GetNbDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_GetNbDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execGetNbDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNbDoor();
	P_NATIVE_END;
}
// End Class URoomData Function GetNbDoor

// Begin Class URoomData Function HasCompatibleDoor
struct Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics
{
	struct RoomData_eventHasCompatibleDoor_Parms
	{
		FDoorDef DoorData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventHasCompatibleDoor_Parms, DoorData), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorData_MetaData), NewProp_DoorData_MetaData) }; // 3661065545
void Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RoomData_eventHasCompatibleDoor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RoomData_eventHasCompatibleDoor_Parms), &Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_DoorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "HasCompatibleDoor", nullptr, nullptr, Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::RoomData_eventHasCompatibleDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::RoomData_eventHasCompatibleDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_HasCompatibleDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_HasCompatibleDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execHasCompatibleDoor)
{
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCompatibleDoor(Z_Param_Out_DoorData);
	P_NATIVE_END;
}
// End Class URoomData Function HasCompatibleDoor

// Begin Class URoomData Function InitializeRoom
struct RoomData_eventInitializeRoom_Parms
{
	URoom* Room;
	UDungeonGraph* Dungeon;
};
static FName NAME_URoomData_InitializeRoom = FName(TEXT("InitializeRoom"));
void URoomData::InitializeRoom(URoom* Room, UDungeonGraph* Dungeon) const
{
	RoomData_eventInitializeRoom_Parms Parms;
	Parms.Room=Room;
	Parms.Dungeon=Dungeon;
	const_cast<URoomData*>(this)->ProcessEvent(FindFunctionChecked(NAME_URoomData_InitializeRoom),&Parms);
}
struct Z_Construct_UFunction_URoomData_InitializeRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Data" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_InitializeRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventInitializeRoom_Parms, Room), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomData_InitializeRoom_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomData_eventInitializeRoom_Parms, Dungeon), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomData_InitializeRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_InitializeRoom_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomData_InitializeRoom_Statics::NewProp_Dungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_InitializeRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomData_InitializeRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomData, nullptr, "InitializeRoom", nullptr, nullptr, Z_Construct_UFunction_URoomData_InitializeRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_InitializeRoom_Statics::PropPointers), sizeof(RoomData_eventInitializeRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomData_InitializeRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomData_InitializeRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(RoomData_eventInitializeRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomData_InitializeRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomData_InitializeRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URoomData::execInitializeRoom)
{
	P_GET_OBJECT(URoom,Z_Param_Room);
	P_GET_OBJECT(UDungeonGraph,Z_Param_Dungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeRoom_Implementation(Z_Param_Room,Z_Param_Dungeon);
	P_NATIVE_END;
}
// End Class URoomData Function InitializeRoom

// Begin Class URoomData
void URoomData::StaticRegisterNativesURoomData()
{
	UClass* Class = URoomData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CleanupRoom", &URoomData::execCleanupRoom },
		{ "GetNbDoor", &URoomData::execGetNbDoor },
		{ "HasCompatibleDoor", &URoomData::execHasCompatibleDoor },
		{ "InitializeRoom", &URoomData::execInitializeRoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoomData);
UClass* Z_Construct_UClass_URoomData_NoRegister()
{
	return URoomData::StaticClass();
}
struct Z_Construct_UClass_URoomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RoomData.h" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomDoor_MetaData[] = {
		{ "Category", "Doors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This will force a random door to be chosen during the dungeon generation.\n// DEPRECATED: It will be removed in a future version of the plugin. As a replacement, you should return -1 as DoorIndex in the ChooseNextRoomData of your DungeonGenerator.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will force a random door to be chosen during the dungeon generation.\nDEPRECATED: It will be removed in a future version of the plugin. As a replacement, you should return -1 as DoorIndex in the ChooseNextRoomData of your DungeonGenerator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[] = {
		{ "Category", "Doors" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPoint_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondPoint_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "Category", "Room" },
		{ "ModuleRelativePath", "Public/RoomData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static void NewProp_RandomDoor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomDoor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Doors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondPoint;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomData_CleanupRoom, "CleanupRoom" }, // 656686782
		{ &Z_Construct_UFunction_URoomData_GetNbDoor, "GetNbDoor" }, // 2426882746
		{ &Z_Construct_UFunction_URoomData_HasCompatibleDoor, "HasCompatibleDoor" }, // 507472149
		{ &Z_Construct_UFunction_URoomData_InitializeRoom, "InitializeRoom" }, // 76212547
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
void Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor_SetBit(void* Obj)
{
	((URoomData*)Obj)->RandomDoor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor = { "RandomDoor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URoomData), &Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomDoor_MetaData), NewProp_RandomDoor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(0, nullptr) }; // 3661065545
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Doors_MetaData), NewProp_Doors_MetaData) }; // 3661065545
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_FirstPoint = { "FirstPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, FirstPoint), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPoint_MetaData), NewProp_FirstPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_SecondPoint = { "SecondPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, SecondPoint), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondPoint_MetaData), NewProp_SecondPoint_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_CustomData_ElementProp = { "CustomData", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URoomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomData, CustomData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_RandomDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Doors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_Doors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_FirstPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_SecondPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_CustomData_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomData_Statics::NewProp_CustomData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URoomData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomData_Statics::ClassParams = {
	&URoomData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URoomData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomData_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoomData()
{
	if (!Z_Registration_Info_UClass_URoomData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomData.OuterSingleton, Z_Construct_UClass_URoomData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomData.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<URoomData>()
{
	return URoomData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoomData);
URoomData::~URoomData() {}
// End Class URoomData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomData, URoomData::StaticClass, TEXT("URoomData"), &Z_Registration_Info_UClass_URoomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomData), 2379904780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_284445413(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

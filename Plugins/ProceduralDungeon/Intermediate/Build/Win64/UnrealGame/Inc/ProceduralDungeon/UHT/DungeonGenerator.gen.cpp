// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DungeonGenerator.h"
#include "ProceduralDungeon/Public/BoundsParams.h"
#include "ProceduralDungeon/Public/ProceduralDungeonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGeneratorBase();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReadOnlyRoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationType();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FBoundsParams();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Class ADungeonGenerator Function ChooseFirstRoomData
struct DungeonGenerator_eventChooseFirstRoomData_Parms
{
	URoomData* ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonGenerator_eventChooseFirstRoomData_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ADungeonGenerator_ChooseFirstRoomData = FName(TEXT("ChooseFirstRoomData"));
URoomData* ADungeonGenerator::ChooseFirstRoomData()
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGenerator_ChooseFirstRoomData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGenerator_eventChooseFirstRoomData_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return ChooseFirstRoomData_Implementation();
	}
}
struct Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the RoomData you want as root of the dungeon generation\n" },
		{ "DisplayName", "Choose First Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the RoomData you want as root of the dungeon generation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseFirstRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseFirstRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::PropPointers), sizeof(DungeonGenerator_eventChooseFirstRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGenerator_eventChooseFirstRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execChooseFirstRoomData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoomData**)Z_Param__Result=P_THIS->ChooseFirstRoomData_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function ChooseFirstRoomData

// Begin Class ADungeonGenerator Function ChooseNextRoomData
struct DungeonGenerator_eventChooseNextRoomData_Parms
{
	const URoomData* CurrentRoom;
	TScriptInterface<IReadOnlyRoom> CurrentRoomInstance;
	FDoorDef DoorData;
	int32 DoorIndex;
	URoomData* ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonGenerator_eventChooseNextRoomData_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ADungeonGenerator_ChooseNextRoomData = FName(TEXT("ChooseNextRoomData"));
URoomData* ADungeonGenerator::ChooseNextRoomData(const URoomData* CurrentRoom, TScriptInterface<IReadOnlyRoom> const& CurrentRoomInstance, FDoorDef const& DoorData, int32& DoorIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGenerator_ChooseNextRoomData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGenerator_eventChooseNextRoomData_Parms Parms;
		Parms.CurrentRoom=CurrentRoom;
		Parms.CurrentRoomInstance=CurrentRoomInstance;
		Parms.DoorData=DoorData;
		Parms.DoorIndex=DoorIndex;
	ProcessEvent(Func,&Parms);
		DoorIndex=Parms.DoorIndex;
		return Parms.ReturnValue;
	}
	else
	{
		return ChooseNextRoomData_Implementation(CurrentRoom, CurrentRoomInstance, DoorData, DoorIndex);
	}
}
struct Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DoorIndex" },
		{ "Category", "Dungeon Generator" },
		{ "Comment", "/** Return the RoomData that will be connected to the Current Room\n\x09* @param CurrentRoom [DEPRECATED] Use CurrentRoomInstance->GetRoomData instead.\n\x09* @param CurrentRoomInstance The room instance to which the generator will connect the next room. This interface allows access only to some data.\n\x09* @param DoorData The door of the CurrentRoom on which the next room will be connected (its location in room units, its orientation and its type).\n\x09* @param DoorIndex The index of the door used on the next room to connect to the CurrentRoom.\n\x09* Use -1 for a random (compatible) door, or the door index from the RoomData door array (0 is the first door).\n\x09* WARNING: If the RandomDoor boolean of the RoomData is checked, then it will be considered -1 whatever you set here.\n\x09* @return The room data asset used to instantiate the new room instance (must not be null)\n\x09*/" },
		{ "DisplayName", "Choose Next Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ReturnDisplayName", "Room Data" },
		{ "ToolTip", "Return the RoomData that will be connected to the Current Room\n@param CurrentRoom [DEPRECATED] Use CurrentRoomInstance->GetRoomData instead.\n@param CurrentRoomInstance The room instance to which the generator will connect the next room. This interface allows access only to some data.\n@param DoorData The door of the CurrentRoom on which the next room will be connected (its location in room units, its orientation and its type).\n@param DoorIndex The index of the door used on the next room to connect to the CurrentRoom.\nUse -1 for a random (compatible) door, or the door index from the RoomData door array (0 is the first door).\nWARNING: If the RandomDoor boolean of the RoomData is checked, then it will be considered -1 whatever you set here.\n@return The room data asset used to instantiate the new room instance (must not be null)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoomInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CurrentRoomInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoom_MetaData), NewProp_CurrentRoom_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoomInstance = { "CurrentRoomInstance", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, CurrentRoomInstance), Z_Construct_UClass_UReadOnlyRoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoomInstance_MetaData), NewProp_CurrentRoomInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, DoorData), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorData_MetaData), NewProp_DoorData_MetaData) }; // 3661065545
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, DoorIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoomInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseNextRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers), sizeof(DungeonGenerator_eventChooseNextRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGenerator_eventChooseNextRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execChooseNextRoomData)
{
	P_GET_OBJECT(URoomData,Z_Param_CurrentRoom);
	P_GET_TINTERFACE_REF(IReadOnlyRoom,Z_Param_Out_CurrentRoomInstance);
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DoorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoomData**)Z_Param__Result=P_THIS->ChooseNextRoomData_Implementation(Z_Param_CurrentRoom,Z_Param_Out_CurrentRoomInstance,Z_Param_Out_DoorData,Z_Param_Out_DoorIndex);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function ChooseNextRoomData

// Begin Class ADungeonGenerator Function ContinueToAddRoom
struct DungeonGenerator_eventContinueToAddRoom_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonGenerator_eventContinueToAddRoom_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ADungeonGenerator_ContinueToAddRoom = FName(TEXT("ContinueToAddRoom"));
bool ADungeonGenerator::ContinueToAddRoom()
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGenerator_ContinueToAddRoom);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGenerator_eventContinueToAddRoom_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ContinueToAddRoom_Implementation();
	}
}
struct Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Condition to continue or stop adding room to the dungeon\n" },
		{ "DisplayName", "Continue To Add Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Condition to continue or stop adding room to the dungeon" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGenerator_eventContinueToAddRoom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventContinueToAddRoom_Parms), &Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ContinueToAddRoom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::PropPointers), sizeof(DungeonGenerator_eventContinueToAddRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGenerator_eventContinueToAddRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execContinueToAddRoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContinueToAddRoom_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function ContinueToAddRoom

// Begin Class ADungeonGenerator Function CountRoomData
struct Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics
{
	struct DungeonGenerator_eventCountRoomData_Parms
	{
		URoomData* RoomData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the number of a specific RoomData in the dungeon\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the number of a specific RoomData in the dungeon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::DungeonGenerator_eventCountRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::DungeonGenerator_eventCountRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_CountRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execCountRoomData)
{
	P_GET_OBJECT(URoomData,Z_Param_RoomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountRoomData(Z_Param_RoomData);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function CountRoomData

// Begin Class ADungeonGenerator Function CountRoomType
struct Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics
{
	struct DungeonGenerator_eventCountRoomType_Parms
	{
		TSubclassOf<URoomData> RoomType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the number of a specific RoomData type in the dungeon\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the number of a specific RoomData type in the dungeon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::NewProp_RoomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountRoomType", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::DungeonGenerator_eventCountRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::DungeonGenerator_eventCountRoomType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_CountRoomType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountRoomType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execCountRoomType)
{
	P_GET_OBJECT(UClass,Z_Param_RoomType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountRoomType(Z_Param_RoomType);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function CountRoomType

// Begin Class ADungeonGenerator Function CountTotalRoomData
struct Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics
{
	struct DungeonGenerator_eventCountTotalRoomData_Parms
	{
		TArray<URoomData*> RoomDataList;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the total number of RoomData in the dungeon from the list provided\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the total number of RoomData in the dungeon from the list provided" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomData_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_RoomDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountTotalRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::DungeonGenerator_eventCountTotalRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::DungeonGenerator_eventCountTotalRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execCountTotalRoomData)
{
	P_GET_TARRAY(URoomData*,Z_Param_RoomDataList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountTotalRoomData(Z_Param_RoomDataList);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function CountTotalRoomData

// Begin Class ADungeonGenerator Function CountTotalRoomType
struct Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics
{
	struct DungeonGenerator_eventCountTotalRoomType_Parms
	{
		TArray<TSubclassOf<URoomData> > RoomTypeList;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return the total number of RoomData type in the dungeon from the list provided\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return the total number of RoomData type in the dungeon from the list provided" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomType_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventCountTotalRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_RoomTypeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CountTotalRoomType", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::DungeonGenerator_eventCountTotalRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::DungeonGenerator_eventCountTotalRoomType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execCountTotalRoomType)
{
	P_GET_TARRAY(TSubclassOf<URoomData>,Z_Param_RoomTypeList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountTotalRoomType(Z_Param_RoomTypeList);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function CountTotalRoomType

// Begin Class ADungeonGenerator Function DiscardRoom
struct Z_Construct_UFunction_ADungeonGenerator_DiscardRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Must be called in \"Choose Next Room\" function to be used.\n// Tell explicitely the generator we don't want to place a room for a specific door.\n// No error will be thrown when returning a null room data and no further room placement tries occur for this door (skip directly to the next door).\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Must be called in \"Choose Next Room\" function to be used.\nTell explicitely the generator we don't want to place a room for a specific door.\nNo error will be thrown when returning a null room data and no further room placement tries occur for this door (skip directly to the next door)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_DiscardRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "DiscardRoom", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_DiscardRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_DiscardRoom_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_DiscardRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_DiscardRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execDiscardRoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DiscardRoom();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function DiscardRoom

// Begin Class ADungeonGenerator Function GetNbRoom
struct Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics
{
	struct DungeonGenerator_eventGetNbRoom_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Returns the current number of room in the generated dungeon.\n" },
		{ "CompactNodeTitle", "Room Count" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "DisplayName", "Room Count" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Returns the current number of room in the generated dungeon." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetNbRoom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetNbRoom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::DungeonGenerator_eventGetNbRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::DungeonGenerator_eventGetNbRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_GetNbRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetNbRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execGetNbRoom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNbRoom();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function GetNbRoom

// Begin Class ADungeonGenerator Function HasAlreadyOneRoomDataFrom
struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics
{
	struct DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms
	{
		TArray<URoomData*> RoomDataList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return true if at least one of the RoomData from the list provided is already in the dungeon\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return true if at least one of the RoomData from the list provided is already in the dungeon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyOneRoomDataFrom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::DungeonGenerator_eventHasAlreadyOneRoomDataFrom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyOneRoomDataFrom)
{
	P_GET_TARRAY(URoomData*,Z_Param_RoomDataList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomDataFrom(Z_Param_RoomDataList);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function HasAlreadyOneRoomDataFrom

// Begin Class ADungeonGenerator Function HasAlreadyOneRoomTypeFrom
struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics
{
	struct DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms
	{
		TArray<TSubclassOf<URoomData> > RoomTypeList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return true if at least one of the RoomData type from the list provided is already in the dungeon\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return true if at least one of the RoomData type from the list provided is already in the dungeon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyOneRoomTypeFrom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::DungeonGenerator_eventHasAlreadyOneRoomTypeFrom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyOneRoomTypeFrom)
{
	P_GET_TARRAY(TSubclassOf<URoomData>,Z_Param_RoomTypeList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomTypeFrom(Z_Param_RoomTypeList);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function HasAlreadyOneRoomTypeFrom

// Begin Class ADungeonGenerator Function HasAlreadyRoomData
struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics
{
	struct DungeonGenerator_eventHasAlreadyRoomData_Parms
	{
		URoomData* RoomData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return true if a specific RoomData is already in the dungeon\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return true if a specific RoomData is already in the dungeon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGenerator_eventHasAlreadyRoomData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyRoomData_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::DungeonGenerator_eventHasAlreadyRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::DungeonGenerator_eventHasAlreadyRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyRoomData)
{
	P_GET_OBJECT(URoomData,Z_Param_RoomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomData(Z_Param_RoomData);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function HasAlreadyRoomData

// Begin Class ADungeonGenerator Function HasAlreadyRoomType
struct Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics
{
	struct DungeonGenerator_eventHasAlreadyRoomType_Parms
	{
		TSubclassOf<URoomData> RoomType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Return true if a specific RoomData type is already in the dungeon\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Return true if a specific RoomData type is already in the dungeon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventHasAlreadyRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGenerator_eventHasAlreadyRoomType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventHasAlreadyRoomType_Parms), &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_RoomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "HasAlreadyRoomType", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::DungeonGenerator_eventHasAlreadyRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::DungeonGenerator_eventHasAlreadyRoomType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execHasAlreadyRoomType)
{
	P_GET_OBJECT(UClass,Z_Param_RoomType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomType(Z_Param_RoomType);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function HasAlreadyRoomType

// Begin Class ADungeonGenerator Function IsValidDungeon
struct DungeonGenerator_eventIsValidDungeon_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonGenerator_eventIsValidDungeon_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ADungeonGenerator_IsValidDungeon = FName(TEXT("IsValidDungeon"));
bool ADungeonGenerator::IsValidDungeon()
{
	UFunction* Func = FindFunctionChecked(NAME_ADungeonGenerator_IsValidDungeon);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DungeonGenerator_eventIsValidDungeon_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return IsValidDungeon_Implementation();
	}
}
struct Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "Comment", "// Condition to validate a dungeon Generation\n" },
		{ "DisplayName", "Is Valid Dungeon" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "Condition to validate a dungeon Generation" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGenerator_eventIsValidDungeon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventIsValidDungeon_Parms), &Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "IsValidDungeon", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::PropPointers), sizeof(DungeonGenerator_eventIsValidDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGenerator_eventIsValidDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execIsValidDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidDungeon_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function IsValidDungeon

// Begin Class ADungeonGenerator
void ADungeonGenerator::StaticRegisterNativesADungeonGenerator()
{
	UClass* Class = ADungeonGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChooseFirstRoomData", &ADungeonGenerator::execChooseFirstRoomData },
		{ "ChooseNextRoomData", &ADungeonGenerator::execChooseNextRoomData },
		{ "ContinueToAddRoom", &ADungeonGenerator::execContinueToAddRoom },
		{ "CountRoomData", &ADungeonGenerator::execCountRoomData },
		{ "CountRoomType", &ADungeonGenerator::execCountRoomType },
		{ "CountTotalRoomData", &ADungeonGenerator::execCountTotalRoomData },
		{ "CountTotalRoomType", &ADungeonGenerator::execCountTotalRoomType },
		{ "DiscardRoom", &ADungeonGenerator::execDiscardRoom },
		{ "GetNbRoom", &ADungeonGenerator::execGetNbRoom },
		{ "HasAlreadyOneRoomDataFrom", &ADungeonGenerator::execHasAlreadyOneRoomDataFrom },
		{ "HasAlreadyOneRoomTypeFrom", &ADungeonGenerator::execHasAlreadyOneRoomTypeFrom },
		{ "HasAlreadyRoomData", &ADungeonGenerator::execHasAlreadyRoomData },
		{ "HasAlreadyRoomType", &ADungeonGenerator::execHasAlreadyRoomType },
		{ "IsValidDungeon", &ADungeonGenerator::execIsValidDungeon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonGenerator);
UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister()
{
	return ADungeonGenerator::StaticClass();
}
struct Z_Construct_UClass_ADungeonGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural Dungeon" },
		{ "Comment", "// This is the main actor of the plugin. The dungeon generator is responsible to generate dungeons and replicate them over the network. \n" },
		{ "HideFunctions", "StartNewDungeon,FinalizeDungeon,CreateRoomInstance,TryPlaceRoom,AddRoomToDungeon" },
		{ "IncludePath", "DungeonGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "KismetHideOverrides", "CreateDungeon" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "This is the main actor of the plugin. The dungeon generator is responsible to generate dungeons and replicate them over the network." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationType_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "Comment", "// In which order the dungeon generate rooms.\n// Depth First: Dungeon will use the last generated room to place the next one. Resulting in a more linear dungeon.\n// Breadth First: Dungeon will generate a room at each door of the current one before going to the next room. Resulting in a more spread dungeon.\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "In which order the dungeon generate rooms.\nDepth First: Dungeon will use the last generated room to place the next one. Resulting in a more linear dungeon.\nBreadth First: Dungeon will generate a room at each door of the current one before going to the next room. Resulting in a more spread dungeon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanLoop_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "Comment", "// If ticked, newly placed room will check if any door is aligned with another room, and if so will connect them.\n// If unticked, only the doors between CurrentRoom and NextRoom (in the function ChooseNextRoom) will be connected.\n// (will only have effect if the deprecated CanLoop in the plugin settings is ticked too, until it is removed in a future version)\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "If ticked, newly placed room will check if any door is aligned with another room, and if so will connect them.\nIf unticked, only the doors between CurrentRoom and NextRoom (in the function ChooseNextRoom) will be connected.\n(will only have effect if the deprecated CanLoop in the plugin settings is ticked too, until it is removed in a future version)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLimits_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDiscardRoomIfNull_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "Comment", "// If true, returning null in ChooseNextRoom is the same as calling DiscardRoom.\n" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ToolTip", "If true, returning null in ChooseNextRoom is the same as calling DiscardRoom." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationType;
	static void NewProp_bCanLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonLimits;
	static void NewProp_bAutoDiscardRoomIfNull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDiscardRoomIfNull;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData, "ChooseFirstRoomData" }, // 1620242790
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData, "ChooseNextRoomData" }, // 4182516862
		{ &Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom, "ContinueToAddRoom" }, // 507085907
		{ &Z_Construct_UFunction_ADungeonGenerator_CountRoomData, "CountRoomData" }, // 155083343
		{ &Z_Construct_UFunction_ADungeonGenerator_CountRoomType, "CountRoomType" }, // 3307418988
		{ &Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData, "CountTotalRoomData" }, // 1209706466
		{ &Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType, "CountTotalRoomType" }, // 1324289611
		{ &Z_Construct_UFunction_ADungeonGenerator_DiscardRoom, "DiscardRoom" }, // 2384871443
		{ &Z_Construct_UFunction_ADungeonGenerator_GetNbRoom, "GetNbRoom" }, // 2984215315
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom, "HasAlreadyOneRoomDataFrom" }, // 2351930094
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom, "HasAlreadyOneRoomTypeFrom" }, // 2915886794
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData, "HasAlreadyRoomData" }, // 14561910
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType, "HasAlreadyRoomType" }, // 232654941
		{ &Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon, "IsValidDungeon" }, // 659307753
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType = { "GenerationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, GenerationType), Z_Construct_UEnum_ProceduralDungeon_EGenerationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationType_MetaData), NewProp_GenerationType_MetaData) }; // 513687356
void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bCanLoop_SetBit(void* Obj)
{
	((ADungeonGenerator*)Obj)->bCanLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bCanLoop = { "bCanLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bCanLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanLoop_MetaData), NewProp_bCanLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DungeonLimits = { "DungeonLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, DungeonLimits), Z_Construct_UScriptStruct_FBoundsParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonLimits_MetaData), NewProp_DungeonLimits_MetaData) }; // 2432163894
void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoDiscardRoomIfNull_SetBit(void* Obj)
{
	((ADungeonGenerator*)Obj)->bAutoDiscardRoomIfNull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoDiscardRoomIfNull = { "bAutoDiscardRoomIfNull", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoDiscardRoomIfNull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoDiscardRoomIfNull_MetaData), NewProp_bAutoDiscardRoomIfNull_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bCanLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DungeonLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bAutoDiscardRoomIfNull,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADungeonGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams = {
	&ADungeonGenerator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonGenerator()
{
	if (!Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton, Z_Construct_UClass_ADungeonGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonGenerator.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<ADungeonGenerator>()
{
	return ADungeonGenerator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGenerator);
ADungeonGenerator::~ADungeonGenerator() {}
// End Class ADungeonGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGenerator, ADungeonGenerator::StaticClass, TEXT("ADungeonGenerator"), &Z_Registration_Info_UClass_ADungeonGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGenerator), 295380328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_4080773886(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

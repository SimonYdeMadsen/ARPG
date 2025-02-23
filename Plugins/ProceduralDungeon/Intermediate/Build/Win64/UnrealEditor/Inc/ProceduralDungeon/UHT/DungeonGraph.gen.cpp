// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DungeonGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Enum EDungeonGraphState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonGraphState;
static UEnum* EDungeonGraphState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDungeonGraphState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDungeonGraphState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EDungeonGraphState"));
	}
	return Z_Registration_Info_UEnum_EDungeonGraphState.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EDungeonGraphState>()
{
	return EDungeonGraphState_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "NbState.Name", "EDungeonGraphState::NbState" },
		{ "None.Name", "EDungeonGraphState::None" },
		{ "RequestGeneration.Name", "EDungeonGraphState::RequestGeneration" },
		{ "RoomListChanged.Name", "EDungeonGraphState::RoomListChanged" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDungeonGraphState::None", (int64)EDungeonGraphState::None },
		{ "EDungeonGraphState::RoomListChanged", (int64)EDungeonGraphState::RoomListChanged },
		{ "EDungeonGraphState::RequestGeneration", (int64)EDungeonGraphState::RequestGeneration },
		{ "EDungeonGraphState::NbState", (int64)EDungeonGraphState::NbState },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	"EDungeonGraphState",
	"EDungeonGraphState",
	Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState()
{
	if (!Z_Registration_Info_UEnum_EDungeonGraphState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonGraphState.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EDungeonGraphState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDungeonGraphState.InnerSingleton;
}
// End Enum EDungeonGraphState

// Begin Class UDungeonGraph Function Count
struct Z_Construct_UFunction_UDungeonGraph_Count_Statics
{
	struct DungeonGraph_eventCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the total number of room\n" },
#endif
		{ "CompactNodeTitle", "Count" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the total number of room" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_Count_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "Count", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_Count_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_Count_Statics::DungeonGraph_eventCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_Count_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_Count_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_Count_Statics::DungeonGraph_eventCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_Count()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_Count_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Count();
	P_NATIVE_END;
}
// End Class UDungeonGraph Function Count

// Begin Class UDungeonGraph Function CountRoomData
struct Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics
{
	struct DungeonGraph_eventCountRoomData_Parms
	{
		const URoomData* RoomData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of a specific RoomData in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of a specific RoomData in the dungeon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomData_MetaData), NewProp_RoomData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountRoomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::DungeonGraph_eventCountRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::DungeonGraph_eventCountRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_CountRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCountRoomData)
{
	P_GET_OBJECT(URoomData,Z_Param_RoomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountRoomData(Z_Param_RoomData);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function CountRoomData

// Begin Class UDungeonGraph Function CountRoomType
struct Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics
{
	struct DungeonGraph_eventCountRoomType_Parms
	{
		const TSubclassOf<URoomData> RoomType;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "RoomType" },
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of a specific RoomData type in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of a specific RoomData type in the dungeon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomType_MetaData), NewProp_RoomType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_RoomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountRoomType", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::DungeonGraph_eventCountRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::DungeonGraph_eventCountRoomType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_CountRoomType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountRoomType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCountRoomType)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomData>,Z_Param_Out_RoomType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountRoomType(Z_Param_Out_RoomType);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function CountRoomType

// Begin Class UDungeonGraph Function CountTotalRoomData
struct Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics
{
	struct DungeonGraph_eventCountTotalRoomData_Parms
	{
		TArray<URoomData*> RoomDataList;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the total number of RoomData in the dungeon from the list provided\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the total number of RoomData in the dungeon from the list provided" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomData_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomDataList_MetaData), NewProp_RoomDataList_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_RoomDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountTotalRoomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::DungeonGraph_eventCountTotalRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::DungeonGraph_eventCountTotalRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCountTotalRoomData)
{
	P_GET_TARRAY_REF(URoomData*,Z_Param_Out_RoomDataList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountTotalRoomData(Z_Param_Out_RoomDataList);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function CountTotalRoomData

// Begin Class UDungeonGraph Function CountTotalRoomType
struct Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics
{
	struct DungeonGraph_eventCountTotalRoomType_Parms
	{
		TArray<TSubclassOf<URoomData> > RoomTypeList;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the total number of RoomData type in the dungeon from the list provided\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the total number of RoomData type in the dungeon from the list provided" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomTypeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomType_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomTypeList_MetaData), NewProp_RoomTypeList_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventCountTotalRoomType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_RoomTypeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "CountTotalRoomType", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::DungeonGraph_eventCountTotalRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::DungeonGraph_eventCountTotalRoomType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execCountTotalRoomType)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomData>,Z_Param_Out_RoomTypeList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->CountTotalRoomType(Z_Param_Out_RoomTypeList);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function CountTotalRoomType

// Begin Class UDungeonGraph Function GetAllRooms
struct Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics
{
	struct DungeonGraph_eventGetAllRooms_Parms
	{
		TArray<URoom*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all rooms\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all rooms" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRooms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRooms", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::DungeonGraph_eventGetAllRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::DungeonGraph_eventGetAllRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRooms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<URoom*>*)Z_Param__Result=P_THIS->GetAllRooms();
	P_NATIVE_END;
}
// End Class UDungeonGraph Function GetAllRooms

// Begin Class UDungeonGraph Function GetAllRoomsFromData
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics
{
	struct DungeonGraph_eventGetAllRoomsFromData_Parms
	{
		const URoomData* Data;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances of the provided room data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances of the provided room data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromData_Parms, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsFromData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::DungeonGraph_eventGetAllRoomsFromData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::DungeonGraph_eventGetAllRoomsFromData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsFromData)
{
	P_GET_OBJECT(URoomData,Z_Param_Data);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsFromData(Z_Param_Data,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function GetAllRoomsFromData

// Begin Class UDungeonGraph Function GetAllRoomsFromDataList
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics
{
	struct DungeonGraph_eventGetAllRoomsFromDataList_Parms
	{
		TArray<URoomData*> Data;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances of any of the provided room data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances of any of the provided room data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromDataList_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsFromDataList_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsFromDataList", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::DungeonGraph_eventGetAllRoomsFromDataList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::DungeonGraph_eventGetAllRoomsFromDataList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsFromDataList)
{
	P_GET_TARRAY_REF(URoomData*,Z_Param_Out_Data);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsFromDataList(Z_Param_Out_Data,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function GetAllRoomsFromDataList

// Begin Class UDungeonGraph Function GetAllRoomsWithAllCustomData
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics
{
	struct DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms
	{
		TArray<TSubclassOf<URoomCustomData> > CustomData;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances having ALL the provided custom data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances having ALL the provided custom data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsWithAllCustomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAllCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsWithAllCustomData)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomCustomData>,Z_Param_Out_CustomData);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsWithAllCustomData(Z_Param_Out_CustomData,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function GetAllRoomsWithAllCustomData

// Begin Class UDungeonGraph Function GetAllRoomsWithAnyCustomData
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics
{
	struct DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms
	{
		TArray<TSubclassOf<URoomCustomData> > CustomData;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances having at least one of the provided custom data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances having at least one of the provided custom data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData_Inner = { "CustomData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms, CustomData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsWithAnyCustomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::DungeonGraph_eventGetAllRoomsWithAnyCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsWithAnyCustomData)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomCustomData>,Z_Param_Out_CustomData);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsWithAnyCustomData(Z_Param_Out_CustomData,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function GetAllRoomsWithAnyCustomData

// Begin Class UDungeonGraph Function GetAllRoomsWithCustomData
struct Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics
{
	struct DungeonGraph_eventGetAllRoomsWithCustomData_Parms
	{
		const TSubclassOf<URoomCustomData> CustomData;
		TArray<URoom*> Rooms;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "CustomData" },
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns all room instances having the provided custom data\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all room instances having the provided custom data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithCustomData_Parms, CustomData), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomData_MetaData), NewProp_CustomData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetAllRoomsWithCustomData_Parms, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetAllRoomsWithCustomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::DungeonGraph_eventGetAllRoomsWithCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::DungeonGraph_eventGetAllRoomsWithCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetAllRoomsWithCustomData)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomCustomData>,Z_Param_Out_CustomData);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRoomsWithCustomData(Z_Param_Out_CustomData,Z_Param_Out_Rooms);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function GetAllRoomsWithCustomData

// Begin Class UDungeonGraph Function GetFirstRoomFromData
struct Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics
{
	struct DungeonGraph_eventGetFirstRoomFromData_Parms
	{
		const URoomData* Data;
		const URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the first found room instance of the provided room data\n// (no defined order, so could be any room of the dungeon)\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the first found room instance of the provided room data\n(no defined order, so could be any room of the dungeon)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetFirstRoomFromData_Parms, Data), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetFirstRoomFromData_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetFirstRoomFromData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::DungeonGraph_eventGetFirstRoomFromData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::DungeonGraph_eventGetFirstRoomFromData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetFirstRoomFromData)
{
	P_GET_OBJECT(URoomData,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const URoom**)Z_Param__Result=P_THIS->GetFirstRoomFromData(Z_Param_Data);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function GetFirstRoomFromData

// Begin Class UDungeonGraph Function GetPathBetween
struct Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics
{
	struct DungeonGraph_eventGetPathBetween_Parms
	{
		const URoom* A;
		const URoom* B;
		TArray<URoom*> ResultPath;
		bool IgnoreLockedRooms;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the path between A and B.\n// Note: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls.\n" },
#endif
		{ "CPP_Default_IgnoreLockedRooms", "false" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ReturnDisplayName", "Has Path" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the path between A and B.\nNote: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_B;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultPath;
	static void NewProp_IgnoreLockedRooms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLockedRooms;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetPathBetween_Parms, A), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetPathBetween_Parms, B), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ResultPath_Inner = { "ResultPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ResultPath = { "ResultPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetPathBetween_Parms, ResultPath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_IgnoreLockedRooms_SetBit(void* Obj)
{
	((DungeonGraph_eventGetPathBetween_Parms*)Obj)->IgnoreLockedRooms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_IgnoreLockedRooms = { "IgnoreLockedRooms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventGetPathBetween_Parms), &Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_IgnoreLockedRooms_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventGetPathBetween_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventGetPathBetween_Parms), &Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ResultPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ResultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_IgnoreLockedRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetPathBetween", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::DungeonGraph_eventGetPathBetween_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::DungeonGraph_eventGetPathBetween_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetPathBetween()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetPathBetween_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetPathBetween)
{
	P_GET_OBJECT(URoom,Z_Param_A);
	P_GET_OBJECT(URoom,Z_Param_B);
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_ResultPath);
	P_GET_UBOOL(Z_Param_IgnoreLockedRooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPathBetween(Z_Param_A,Z_Param_B,Z_Param_Out_ResultPath,Z_Param_IgnoreLockedRooms);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function GetPathBetween

// Begin Class UDungeonGraph Function GetRandomRoom
struct Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics
{
	struct DungeonGraph_eventGetRandomRoom_Parms
	{
		TArray<URoom*> RoomList;
		URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a random room from an array of room\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a random room from an array of room" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList_Inner = { "RoomList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList = { "RoomList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRandomRoom_Parms, RoomList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomList_MetaData), NewProp_RoomList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventGetRandomRoom_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_RoomList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "GetRandomRoom", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::DungeonGraph_eventGetRandomRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::DungeonGraph_eventGetRandomRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_GetRandomRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_GetRandomRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execGetRandomRoom)
{
	P_GET_TARRAY_REF(URoom*,Z_Param_Out_RoomList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoom**)Z_Param__Result=P_THIS->GetRandomRoom(Z_Param_Out_RoomList);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function GetRandomRoom

// Begin Class UDungeonGraph Function HasAlreadyOneRoomDataFrom
struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics
{
	struct DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms
	{
		TArray<URoomData*> RoomDataList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if at least one of the RoomData from the list provided is already in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if at least one of the RoomData from the list provided is already in the dungeon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomDataList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner = { "RoomDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList = { "RoomDataList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms, RoomDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomDataList_MetaData), NewProp_RoomDataList_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_RoomDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyOneRoomDataFrom", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomDataFrom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyOneRoomDataFrom)
{
	P_GET_TARRAY_REF(URoomData*,Z_Param_Out_RoomDataList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomDataFrom(Z_Param_Out_RoomDataList);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function HasAlreadyOneRoomDataFrom

// Begin Class UDungeonGraph Function HasAlreadyOneRoomTypeFrom
struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics
{
	struct DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms
	{
		TArray<TSubclassOf<URoomData> > RoomTypeList;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if at least one of the RoomData type from the list provided is already in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if at least one of the RoomData type from the list provided is already in the dungeon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomTypeList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomTypeList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTypeList;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner = { "RoomTypeList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList = { "RoomTypeList", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms, RoomTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomTypeList_MetaData), NewProp_RoomTypeList_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_RoomTypeList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyOneRoomTypeFrom", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::DungeonGraph_eventHasAlreadyOneRoomTypeFrom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyOneRoomTypeFrom)
{
	P_GET_TARRAY_REF(TSubclassOf<URoomData>,Z_Param_Out_RoomTypeList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyOneRoomTypeFrom(Z_Param_Out_RoomTypeList);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function HasAlreadyOneRoomTypeFrom

// Begin Class UDungeonGraph Function HasAlreadyRoomData
struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics
{
	struct DungeonGraph_eventHasAlreadyRoomData_Parms
	{
		const URoomData* RoomData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if a specific RoomData is already in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if a specific RoomData is already in the dungeon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyRoomData_Parms, RoomData), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomData_MetaData), NewProp_RoomData_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasAlreadyRoomData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyRoomData_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_RoomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyRoomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::DungeonGraph_eventHasAlreadyRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::DungeonGraph_eventHasAlreadyRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyRoomData)
{
	P_GET_OBJECT(URoomData,Z_Param_RoomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomData(Z_Param_RoomData);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function HasAlreadyRoomData

// Begin Class UDungeonGraph Function HasAlreadyRoomType
struct Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics
{
	struct DungeonGraph_eventHasAlreadyRoomType_Parms
	{
		const TSubclassOf<URoomData> RoomType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "RoomType" },
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if a specific RoomData type is already in the dungeon\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if a specific RoomData type is already in the dungeon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoomType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasAlreadyRoomType_Parms, RoomType), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomType_MetaData), NewProp_RoomType_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasAlreadyRoomType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasAlreadyRoomType_Parms), &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_RoomType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasAlreadyRoomType", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::DungeonGraph_eventHasAlreadyRoomType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::DungeonGraph_eventHasAlreadyRoomType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasAlreadyRoomType)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<URoomData>,Z_Param_Out_RoomType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAlreadyRoomType(Z_Param_Out_RoomType);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function HasAlreadyRoomType

// Begin Class UDungeonGraph Function HasValidPath
struct Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics
{
	struct DungeonGraph_eventHasValidPath_Parms
	{
		const URoom* From;
		const URoom* To;
		bool IgnoreLockedRooms;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns wether a path is valid between 2 rooms (no locked room blocking the way)\n// Note: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls.\n" },
#endif
		{ "CPP_Default_IgnoreLockedRooms", "false" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
		{ "ReturnDisplayName", "Yes" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns wether a path is valid between 2 rooms (no locked room blocking the way)\nNote: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_From;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
	static void NewProp_IgnoreLockedRooms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLockedRooms;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasValidPath_Parms, From), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_From_MetaData), NewProp_From_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventHasValidPath_Parms, To), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_To_MetaData), NewProp_To_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms_SetBit(void* Obj)
{
	((DungeonGraph_eventHasValidPath_Parms*)Obj)->IgnoreLockedRooms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms = { "IgnoreLockedRooms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasValidPath_Parms), &Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonGraph_eventHasValidPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventHasValidPath_Parms), &Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_To,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_IgnoreLockedRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "HasValidPath", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::DungeonGraph_eventHasValidPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::DungeonGraph_eventHasValidPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_HasValidPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_HasValidPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execHasValidPath)
{
	P_GET_OBJECT(URoom,Z_Param_From);
	P_GET_OBJECT(URoom,Z_Param_To);
	P_GET_UBOOL(Z_Param_IgnoreLockedRooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidPath(Z_Param_From,Z_Param_To,Z_Param_IgnoreLockedRooms);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function HasValidPath

// Begin Class UDungeonGraph Function NumberOfRoomBetween
struct Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics
{
	struct DungeonGraph_eventNumberOfRoomBetween_Parms
	{
		const URoom* A;
		const URoom* B;
		bool IgnoreLockedRooms;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the minimum number of connected rooms between A and B.\n// Note: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls.\n" },
#endif
		{ "CPP_Default_IgnoreLockedRooms", "false" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the minimum number of connected rooms between A and B.\nNote: Could be pure, but since it can be heavy duty for large dungeons, keep it impure to avoid duplicate calls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_B;
	static void NewProp_IgnoreLockedRooms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLockedRooms;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventNumberOfRoomBetween_Parms, A), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventNumberOfRoomBetween_Parms, B), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
void Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_IgnoreLockedRooms_SetBit(void* Obj)
{
	((DungeonGraph_eventNumberOfRoomBetween_Parms*)Obj)->IgnoreLockedRooms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_IgnoreLockedRooms = { "IgnoreLockedRooms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGraph_eventNumberOfRoomBetween_Parms), &Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_IgnoreLockedRooms_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGraph_eventNumberOfRoomBetween_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_IgnoreLockedRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "NumberOfRoomBetween", nullptr, nullptr, Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::DungeonGraph_eventNumberOfRoomBetween_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::DungeonGraph_eventNumberOfRoomBetween_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execNumberOfRoomBetween)
{
	P_GET_OBJECT(URoom,Z_Param_A);
	P_GET_OBJECT(URoom,Z_Param_B);
	P_GET_UBOOL(Z_Param_IgnoreLockedRooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->NumberOfRoomBetween(Z_Param_A,Z_Param_B,Z_Param_IgnoreLockedRooms);
	P_NATIVE_END;
}
// End Class UDungeonGraph Function NumberOfRoomBetween

// Begin Class UDungeonGraph Function OnRep_Rooms
struct Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonGraph, nullptr, "OnRep_Rooms", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonGraph::execOnRep_Rooms)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Rooms();
	P_NATIVE_END;
}
// End Class UDungeonGraph Function OnRep_Rooms

// Begin Class UDungeonGraph
void UDungeonGraph::StaticRegisterNativesUDungeonGraph()
{
	UClass* Class = UDungeonGraph::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Count", &UDungeonGraph::execCount },
		{ "CountRoomData", &UDungeonGraph::execCountRoomData },
		{ "CountRoomType", &UDungeonGraph::execCountRoomType },
		{ "CountTotalRoomData", &UDungeonGraph::execCountTotalRoomData },
		{ "CountTotalRoomType", &UDungeonGraph::execCountTotalRoomType },
		{ "GetAllRooms", &UDungeonGraph::execGetAllRooms },
		{ "GetAllRoomsFromData", &UDungeonGraph::execGetAllRoomsFromData },
		{ "GetAllRoomsFromDataList", &UDungeonGraph::execGetAllRoomsFromDataList },
		{ "GetAllRoomsWithAllCustomData", &UDungeonGraph::execGetAllRoomsWithAllCustomData },
		{ "GetAllRoomsWithAnyCustomData", &UDungeonGraph::execGetAllRoomsWithAnyCustomData },
		{ "GetAllRoomsWithCustomData", &UDungeonGraph::execGetAllRoomsWithCustomData },
		{ "GetFirstRoomFromData", &UDungeonGraph::execGetFirstRoomFromData },
		{ "GetPathBetween", &UDungeonGraph::execGetPathBetween },
		{ "GetRandomRoom", &UDungeonGraph::execGetRandomRoom },
		{ "HasAlreadyOneRoomDataFrom", &UDungeonGraph::execHasAlreadyOneRoomDataFrom },
		{ "HasAlreadyOneRoomTypeFrom", &UDungeonGraph::execHasAlreadyOneRoomTypeFrom },
		{ "HasAlreadyRoomData", &UDungeonGraph::execHasAlreadyRoomData },
		{ "HasAlreadyRoomType", &UDungeonGraph::execHasAlreadyRoomType },
		{ "HasValidPath", &UDungeonGraph::execHasValidPath },
		{ "NumberOfRoomBetween", &UDungeonGraph::execNumberOfRoomBetween },
		{ "OnRep_Rooms", &UDungeonGraph::execOnRep_Rooms },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonGraph);
UClass* Z_Construct_UClass_UDungeonGraph_NoRegister()
{
	return UDungeonGraph::StaticClass();
}
struct Z_Construct_UClass_UDungeonGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Holds the generated dungeon.\n// You can access the rooms using many functions.\n" },
#endif
		{ "IncludePath", "DungeonGraph.h" },
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the generated dungeon.\nYou can access the rooms using many functions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rooms_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedRooms_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This array is synchronized with the server\n// We keep it separated to be able to unload previous rooms on clients\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This array is synchronized with the server\nWe keep it separated to be able to unload previous rooms on clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rooms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicatedRooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicatedRooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonGraph_Count, "Count" }, // 547528231
		{ &Z_Construct_UFunction_UDungeonGraph_CountRoomData, "CountRoomData" }, // 2067831658
		{ &Z_Construct_UFunction_UDungeonGraph_CountRoomType, "CountRoomType" }, // 2495456082
		{ &Z_Construct_UFunction_UDungeonGraph_CountTotalRoomData, "CountTotalRoomData" }, // 362327315
		{ &Z_Construct_UFunction_UDungeonGraph_CountTotalRoomType, "CountTotalRoomType" }, // 2129472347
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRooms, "GetAllRooms" }, // 3813461181
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromData, "GetAllRoomsFromData" }, // 2813147640
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsFromDataList, "GetAllRoomsFromDataList" }, // 123078692
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAllCustomData, "GetAllRoomsWithAllCustomData" }, // 1323697297
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithAnyCustomData, "GetAllRoomsWithAnyCustomData" }, // 695284686
		{ &Z_Construct_UFunction_UDungeonGraph_GetAllRoomsWithCustomData, "GetAllRoomsWithCustomData" }, // 4141468385
		{ &Z_Construct_UFunction_UDungeonGraph_GetFirstRoomFromData, "GetFirstRoomFromData" }, // 1636360613
		{ &Z_Construct_UFunction_UDungeonGraph_GetPathBetween, "GetPathBetween" }, // 364544225
		{ &Z_Construct_UFunction_UDungeonGraph_GetRandomRoom, "GetRandomRoom" }, // 882102447
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomDataFrom, "HasAlreadyOneRoomDataFrom" }, // 949946460
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyOneRoomTypeFrom, "HasAlreadyOneRoomTypeFrom" }, // 1259011300
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomData, "HasAlreadyRoomData" }, // 2555812420
		{ &Z_Construct_UFunction_UDungeonGraph_HasAlreadyRoomType, "HasAlreadyRoomType" }, // 2820421772
		{ &Z_Construct_UFunction_UDungeonGraph_HasValidPath, "HasValidPath" }, // 957685540
		{ &Z_Construct_UFunction_UDungeonGraph_NumberOfRoomBetween, "NumberOfRoomBetween" }, // 1681547641
		{ &Z_Construct_UFunction_UDungeonGraph_OnRep_Rooms, "OnRep_Rooms" }, // 2961374645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms_Inner = { "Rooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonGraph, Rooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rooms_MetaData), NewProp_Rooms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms_Inner = { "ReplicatedRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms = { "ReplicatedRooms", "OnRep_Rooms", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonGraph, ReplicatedRooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedRooms_MetaData), NewProp_ReplicatedRooms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_Rooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonGraph_Statics::NewProp_ReplicatedRooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicableObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonGraph_Statics::ClassParams = {
	&UDungeonGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonGraph()
{
	if (!Z_Registration_Info_UClass_UDungeonGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonGraph.OuterSingleton, Z_Construct_UClass_UDungeonGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonGraph.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UDungeonGraph>()
{
	return UDungeonGraph::StaticClass();
}
void UDungeonGraph::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ReplicatedRooms(TEXT("ReplicatedRooms"));
	const bool bIsValid = true
		&& Name_ReplicatedRooms == ClassReps[(int32)ENetFields_Private::ReplicatedRooms].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDungeonGraph"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonGraph);
UDungeonGraph::~UDungeonGraph() {}
// End Class UDungeonGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDungeonGraphState_StaticEnum, TEXT("EDungeonGraphState"), &Z_Registration_Info_UEnum_EDungeonGraphState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1122233925U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonGraph, UDungeonGraph::StaticClass, TEXT("UDungeonGraph"), &Z_Registration_Info_UClass_UDungeonGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonGraph), 309445169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_1647539886(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

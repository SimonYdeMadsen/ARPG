// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DungeonGenerator.h"
#include "ProceduralDungeon/Public/ProceduralDungeonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGenerator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADungeonGenerator_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonGraph_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationResult();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationType();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_ESeedType();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FBoundsParams();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Delegate FGenerationEvent
struct Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventRoomEvent_Parms, Room), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Room_MetaData), NewProp_Room_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature_Statics::NewProp_Room,
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
void FRoomEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomEvent, const URoomData* Room)
{
	struct _Script_ProceduralDungeon_eventRoomEvent_Parms
	{
		const URoomData* Room;
	};
	_Script_ProceduralDungeon_eventRoomEvent_Parms Parms;
	Parms.Room=Room;
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
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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

// Begin ScriptStruct FBoundsParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoundsParams;
class UScriptStruct* FBoundsParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoundsParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoundsParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundsParams, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("BoundsParams"));
	}
	return Z_Registration_Info_UScriptStruct_BoundsParams.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<FBoundsParams>()
{
	return FBoundsParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoundsParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Holds the settings for the dungeon limits.\n// These values are expressed in Room cells, and are based on the origin of the first room (0,0,0).\n// For example, if the first room is only 1 room cell (`FirstPoint = (0,0,0)`, `SecondPoint = (1,1,1)`), then  this is the cell (0,0,0).\n// If you set a `MinY=2` et `MaxY=2`, then on the Y axis the dungeon can go from the cell -2 to cell 2,\n// Making an effective range of 5 cells, centered on the first room.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ShortToolTip", "Holds the settings for the dungeon limits." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the settings for the dungeon limits.\nThese values are expressed in Room cells, and are based on the origin of the first room (0,0,0).\nFor example, if the first room is only 1 room cell (`FirstPoint = (0,0,0)`, `SecondPoint = (1,1,1)`), then  this is the cell (0,0,0).\nIf you set a `MinY=2` et `MaxY=2`, then on the Y axis the dungeon can go from the cell -2 to cell 2,\nMaking an effective range of 5 cells, centered on the first room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMaxX_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the X limit in positive axis (north from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the X limit in positive axis (north from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The X positive limit (north) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMaxX" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The X positive limit (north) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMinX_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the X limit in negative axis (south from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the X limit in negative axis (south from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The X negative limit (south) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMinX" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The X negative limit (south) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMaxY_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the Y limit in positive axis (east from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the Y limit in positive axis (east from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Y positive limit (east) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMaxY" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Y positive limit (east) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMinY_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the Y limit in negative axis (west from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the Y limit in negative axis (west from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinY_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Y negative limit (west) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMinY" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Y negative limit (west) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMaxZ_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the Z limit in positive axis (up from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the Z limit in positive axis (up from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZ_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Z positive limit (up) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMaxZ" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Z positive limit (up) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMinZ_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the Z limit in negative axis (down from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the Z limit in negative axis (down from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZ_MetaData[] = {
		{ "Category", "Procedural Generation|Boundq Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Z negative limit (down) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMinZ" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Z negative limit (down) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static void NewProp_bLimitMaxX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitMaxX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
	static void NewProp_bLimitMinX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitMinX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinX;
	static void NewProp_bLimitMaxY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitMaxY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxY;
	static void NewProp_bLimitMinY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitMinY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinY;
	static void NewProp_bLimitMaxZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitMaxZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxZ;
	static void NewProp_bLimitMinZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitMinZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundsParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxX_SetBit(void* Obj)
{
	((FBoundsParams*)Obj)->bLimitMaxX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxX = { "bLimitMaxX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoundsParams), &Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitMaxX_MetaData), NewProp_bLimitMaxX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundsParams, MaxX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxX_MetaData), NewProp_MaxX_MetaData) };
void Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinX_SetBit(void* Obj)
{
	((FBoundsParams*)Obj)->bLimitMinX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinX = { "bLimitMinX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoundsParams), &Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitMinX_MetaData), NewProp_bLimitMinX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundsParams, MinX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinX_MetaData), NewProp_MinX_MetaData) };
void Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxY_SetBit(void* Obj)
{
	((FBoundsParams*)Obj)->bLimitMaxY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxY = { "bLimitMaxY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoundsParams), &Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitMaxY_MetaData), NewProp_bLimitMaxY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundsParams, MaxY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxY_MetaData), NewProp_MaxY_MetaData) };
void Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinY_SetBit(void* Obj)
{
	((FBoundsParams*)Obj)->bLimitMinY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinY = { "bLimitMinY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoundsParams), &Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitMinY_MetaData), NewProp_bLimitMinY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundsParams, MinY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinY_MetaData), NewProp_MinY_MetaData) };
void Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxZ_SetBit(void* Obj)
{
	((FBoundsParams*)Obj)->bLimitMaxZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxZ = { "bLimitMaxZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoundsParams), &Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitMaxZ_MetaData), NewProp_bLimitMaxZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MaxZ = { "MaxZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundsParams, MaxZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZ_MetaData), NewProp_MaxZ_MetaData) };
void Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinZ_SetBit(void* Obj)
{
	((FBoundsParams*)Obj)->bLimitMinZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinZ = { "bLimitMinZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoundsParams), &Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitMinZ_MetaData), NewProp_bLimitMinZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MinZ = { "MinZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoundsParams, MinZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZ_MetaData), NewProp_MinZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoundsParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MaxY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MinY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMaxZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MaxZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_bLimitMinZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundsParams_Statics::NewProp_MinZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundsParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoundsParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	&NewStructOps,
	"BoundsParams",
	Z_Construct_UScriptStruct_FBoundsParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundsParams_Statics::PropPointers),
	sizeof(FBoundsParams),
	alignof(FBoundsParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundsParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoundsParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoundsParams()
{
	if (!Z_Registration_Info_UScriptStruct_BoundsParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoundsParams.InnerSingleton, Z_Construct_UScriptStruct_FBoundsParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoundsParams.InnerSingleton;
}
// End ScriptStruct FBoundsParams

// Begin Class ADungeonGenerator Function ChooseDoor
struct DungeonGenerator_eventChooseDoor_Parms
{
	const URoomData* CurrentRoom;
	const URoomData* NextRoom;
	const UDoorType* DoorType;
	bool Flipped;
	TSubclassOf<ADoor> ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonGenerator_eventChooseDoor_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ADungeonGenerator_ChooseDoor = FName(TEXT("ChooseDoor"));
TSubclassOf<ADoor> ADungeonGenerator::ChooseDoor(const URoomData* CurrentRoom, const URoomData* NextRoom, const UDoorType* DoorType, bool& Flipped)
{
	DungeonGenerator_eventChooseDoor_Parms Parms;
	Parms.CurrentRoom=CurrentRoom;
	Parms.NextRoom=NextRoom;
	Parms.DoorType=DoorType;
	Parms.Flipped=Flipped ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ChooseDoor),&Parms);
	Flipped=Parms.Flipped;
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the door which will be spawned between Current Room and Next Room\n// @param CurrentRoom The first of both rooms to have been generated. By default the door will face this room.\n// @param NextRoom The second of both rooms to have been generated. Set Flipped to true to make the door facing this room.\n// @param DoorType The door type set by both room data. Use IsDoorOfType function to compare a door actor class with this.\n// @param Flipped Tells which room the door is facing between CurrentRoom (false) and NextRoom (true).\n// @return The door actor class to spawn between CurrentRoom and NextRoom.\n" },
#endif
		{ "DisplayName", "Choose Door" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoom_MetaData), NewProp_CurrentRoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, NextRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextRoom_MetaData), NewProp_NextRoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, DoorType), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorType_MetaData), NewProp_DoorType_MetaData) };
void Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_Flipped_SetBit(void* Obj)
{
	((DungeonGenerator_eventChooseDoor_Parms*)Obj)->Flipped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_Flipped = { "Flipped", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventChooseDoor_Parms), &Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_Flipped_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseDoor_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_CurrentRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_NextRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_DoorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_Flipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "ChooseDoor", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::PropPointers), sizeof(DungeonGenerator_eventChooseDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGenerator_eventChooseDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_ChooseDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_ChooseDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execChooseDoor)
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
// End Class ADungeonGenerator Function ChooseDoor

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
static FName NAME_ADungeonGenerator_ChooseFirstRoomData = FName(TEXT("ChooseFirstRoomData"));
URoomData* ADungeonGenerator::ChooseFirstRoomData()
{
	DungeonGenerator_eventChooseFirstRoomData_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ChooseFirstRoomData),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the RoomData you want as root of the dungeon generation\n" },
#endif
		{ "DisplayName", "Choose First Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the RoomData you want as root of the dungeon generation" },
#endif
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
	FDoorDef DoorData;
	int32 DoorIndex;
	URoomData* ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonGenerator_eventChooseNextRoomData_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ADungeonGenerator_ChooseNextRoomData = FName(TEXT("ChooseNextRoomData"));
URoomData* ADungeonGenerator::ChooseNextRoomData(const URoomData* CurrentRoom, FDoorDef const& DoorData, int32& DoorIndex)
{
	DungeonGenerator_eventChooseNextRoomData_Parms Parms;
	Parms.CurrentRoom=CurrentRoom;
	Parms.DoorData=DoorData;
	Parms.DoorIndex=DoorIndex;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ChooseNextRoomData),&Parms);
	DoorIndex=Parms.DoorIndex;
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "DoorIndex" },
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return the RoomData that will be connected to the Current Room\n\x09* @param CurrentRoom The room from wich the generator will connect the next room.\n\x09* @param DoorData The door of the CurrentRoom on which the next room will be connected (its location in room units, its orientation and its type).\n\x09* @param DoorIndex The index of the door used on the next room to connect to the CurrentRoom.\n\x09* Use -1 for a random (compatible) door, or the door index from the RoomData door array (0 is the first door).\n\x09* WARNING: If the RandomDoor boolean of the RoomData is checked, then it will be considered -1 whatever you set here.\n\x09* @return The room data asset used to instantiate the new room instance (must not be null)\n\x09*/" },
#endif
		{ "DisplayName", "Choose Next Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
		{ "ReturnDisplayName", "Room Data" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the RoomData that will be connected to the Current Room\n@param CurrentRoom The room from wich the generator will connect the next room.\n@param DoorData The door of the CurrentRoom on which the next room will be connected (its location in room units, its orientation and its type).\n@param DoorIndex The index of the door used on the next room to connect to the CurrentRoom.\nUse -1 for a random (compatible) door, or the door index from the RoomData door array (0 is the first door).\nWARNING: If the RandomDoor boolean of the RoomData is checked, then it will be considered -1 whatever you set here.\n@return The room data asset used to instantiate the new room instance (must not be null)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DoorIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, CurrentRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRoom_MetaData), NewProp_CurrentRoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, DoorData), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorData_MetaData), NewProp_DoorData_MetaData) }; // 3661065545
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_DoorIndex = { "DoorIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, DoorIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventChooseNextRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData_Statics::NewProp_CurrentRoom,
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
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_DoorData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DoorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoomData**)Z_Param__Result=P_THIS->ChooseNextRoomData_Implementation(Z_Param_CurrentRoom,Z_Param_Out_DoorData,Z_Param_Out_DoorIndex);
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
static FName NAME_ADungeonGenerator_ContinueToAddRoom = FName(TEXT("ContinueToAddRoom"));
bool ADungeonGenerator::ContinueToAddRoom()
{
	DungeonGenerator_eventContinueToAddRoom_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_ContinueToAddRoom),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to continue or stop adding room to the dungeon\n" },
#endif
		{ "DisplayName", "Continue To Add Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to continue or stop adding room to the dungeon" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the number of a specific RoomData in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the number of a specific RoomData in the dungeon" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the number of a specific RoomData type in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the number of a specific RoomData type in the dungeon" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the total number of RoomData in the dungeon from the list provided\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the total number of RoomData in the dungeon from the list provided" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the total number of RoomData type in the dungeon from the list provided\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the total number of RoomData type in the dungeon from the list provided" },
#endif
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

// Begin Class ADungeonGenerator Function CreateDungeon
struct Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create virtually the dungeon (no load nor initialization of room levels)\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create virtually the dungeon (no load nor initialization of room levels)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "CreateDungeon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_CreateDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_CreateDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execCreateDungeon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateDungeon();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function CreateDungeon

// Begin Class ADungeonGenerator Function Generate
struct Z_Construct_UFunction_ADungeonGenerator_Generate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the seed and call the generation on all clients\n// Do nothing when called on clients\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the seed and call the generation on all clients\nDo nothing when called on clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "Generate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_Generate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_Generate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execGenerate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Generate();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function Generate

// Begin Class ADungeonGenerator Function GetCompatibleRoomData
struct Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics
{
	struct DungeonGenerator_eventGetCompatibleRoomData_Parms
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
		{ "Comment", "// Returns an array of room data with compatible at least one compatible door with the door data provided.\n// @param bSuccess True if at least one compatible room data was found.\n// @param CompatibleRooms Filled with all compatible room data found.\n// @param RoomDataArray The list of room data to check for compatibility.\n// @param DoorData The door used to check if a room is compatible.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an array of room data with compatible at least one compatible door with the door data provided.\n@param bSuccess True if at least one compatible room data was found.\n@param CompatibleRooms Filled with all compatible room data found.\n@param RoomDataArray The list of room data to check for compatibility.\n@param DoorData The door used to check if a room is compatible." },
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
void Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((DungeonGenerator_eventGetCompatibleRoomData_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonGenerator_eventGetCompatibleRoomData_Parms), &Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms_Inner = { "CompatibleRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms = { "CompatibleRooms", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetCompatibleRoomData_Parms, CompatibleRooms), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray_Inner = { "RoomDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray = { "RoomDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetCompatibleRoomData_Parms, RoomDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomDataArray_MetaData), NewProp_RoomDataArray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_DoorData = { "DoorData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetCompatibleRoomData_Parms, DoorData), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorData_MetaData), NewProp_DoorData_MetaData) }; // 3661065545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_CompatibleRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_RoomDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::NewProp_DoorData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetCompatibleRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::DungeonGenerator_eventGetCompatibleRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::DungeonGenerator_eventGetCompatibleRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execGetCompatibleRoomData)
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
// End Class ADungeonGenerator Function GetCompatibleRoomData

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current number of room in the generated dungeon.\n" },
#endif
		{ "CompactNodeTitle", "Room Count" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "DisplayName", "Room Count" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current number of room in the generated dungeon." },
#endif
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

// Begin Class ADungeonGenerator Function GetProgress
struct Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics
{
	struct DungeonGenerator_eventGetProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current generation progress.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current generation progress." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetProgress", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::DungeonGenerator_eventGetProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::DungeonGenerator_eventGetProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_GetProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execGetProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetProgress();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function GetProgress

// Begin Class ADungeonGenerator Function GetRandomRoomData
struct Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics
{
	struct DungeonGenerator_eventGetRandomRoomData_Parms
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
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray_Inner = { "RoomDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray = { "RoomDataArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomRoomData_Parms, RoomDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomRoomData_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_RoomDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetRandomRoomData", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::DungeonGenerator_eventGetRandomRoomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::DungeonGenerator_eventGetRandomRoomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execGetRandomRoomData)
{
	P_GET_TARRAY(URoomData*,Z_Param_RoomDataArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoomData**)Z_Param__Result=P_THIS->GetRandomRoomData(Z_Param_RoomDataArray);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function GetRandomRoomData

// Begin Class ADungeonGenerator Function GetRandomRoomDataWeighted
struct Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics
{
	struct DungeonGenerator_eventGetRandomRoomDataWeighted_Parms
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
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap_ValueProp = { "RoomDataWeightedMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap_Key_KeyProp = { "RoomDataWeightedMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap = { "RoomDataWeightedMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomRoomDataWeighted_Parms, RoomDataWeightedMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomDataWeightedMap_MetaData), NewProp_RoomDataWeightedMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomRoomDataWeighted_Parms, ReturnValue), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::NewProp_RoomDataWeightedMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetRandomRoomDataWeighted", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::DungeonGenerator_eventGetRandomRoomDataWeighted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::DungeonGenerator_eventGetRandomRoomDataWeighted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execGetRandomRoomDataWeighted)
{
	P_GET_TMAP_REF(URoomData*,int32,Z_Param_Out_RoomDataWeightedMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoomData**)Z_Param__Result=P_THIS->GetRandomRoomDataWeighted(Z_Param_Out_RoomDataWeightedMap);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function GetRandomRoomDataWeighted

// Begin Class ADungeonGenerator Function GetRandomStream
struct Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics
{
	struct DungeonGenerator_eventGetRandomStream_Parms
	{
		FRandomStream ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Access to the random stream of the procedural dungeon. You should always use this for the procedural generation.\n// @return The random stream used by the dungeon generator.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetRandomStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetRandomStream", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::DungeonGenerator_eventGetRandomStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::DungeonGenerator_eventGetRandomStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_GetRandomStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetRandomStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execGetRandomStream)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRandomStream*)Z_Param__Result=P_THIS->GetRandomStream();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function GetRandomStream

// Begin Class ADungeonGenerator Function GetSeed
struct Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics
{
	struct DungeonGenerator_eventGetSeed_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "CompactNodeTitle", "Seed" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventGetSeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "GetSeed", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::DungeonGenerator_eventGetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::DungeonGenerator_eventGetSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_GetSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_GetSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execGetSeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSeed();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function GetSeed

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return true if at least one of the RoomData from the list provided is already in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if at least one of the RoomData from the list provided is already in the dungeon" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return true if at least one of the RoomData type from the list provided is already in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if at least one of the RoomData type from the list provided is already in the dungeon" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return true if a specific RoomData is already in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if a specific RoomData is already in the dungeon" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return true if a specific RoomData type is already in the dungeon\n" },
#endif
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the same function from the Rooms variable." },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return true if a specific RoomData type is already in the dungeon" },
#endif
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

// Begin Class ADungeonGenerator Function InitializeDungeon
struct DungeonGenerator_eventInitializeDungeon_Parms
{
	const UDungeonGraph* Rooms;
};
static FName NAME_ADungeonGenerator_InitializeDungeon = FName(TEXT("InitializeDungeon"));
void ADungeonGenerator::InitializeDungeon(const UDungeonGraph* Rooms)
{
	DungeonGenerator_eventInitializeDungeon_Parms Parms;
	Parms.Rooms=Rooms;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_InitializeDungeon),&Parms);
}
struct Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize the room instances during the generation step\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::NewProp_Rooms = { "Rooms", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventInitializeDungeon_Parms, Rooms), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rooms_MetaData), NewProp_Rooms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::NewProp_Rooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "InitializeDungeon", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::PropPointers), sizeof(DungeonGenerator_eventInitializeDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGenerator_eventInitializeDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execInitializeDungeon)
{
	P_GET_OBJECT(UDungeonGraph,Z_Param_Rooms);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDungeon_Implementation(Z_Param_Rooms);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function InitializeDungeon

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
static FName NAME_ADungeonGenerator_IsValidDungeon = FName(TEXT("IsValidDungeon"));
bool ADungeonGenerator::IsValidDungeon()
{
	DungeonGenerator_eventIsValidDungeon_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_IsValidDungeon),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Condition to validate a dungeon Generation\n" },
#endif
		{ "DisplayName", "Is Valid Dungeon" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Condition to validate a dungeon Generation" },
#endif
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

// Begin Class ADungeonGenerator Function OnFailedToAddRoom
struct DungeonGenerator_eventOnFailedToAddRoom_Parms
{
	const URoomData* FromRoom;
	FDoorDef FromDoor;
};
static FName NAME_ADungeonGenerator_OnFailedToAddRoom = FName(TEXT("OnFailedToAddRoom"));
void ADungeonGenerator::OnFailedToAddRoom(const URoomData* FromRoom, FDoorDef const& FromDoor)
{
	DungeonGenerator_eventOnFailedToAddRoom_Parms Parms;
	Parms.FromRoom=FromRoom;
	Parms.FromDoor=FromDoor;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnFailedToAddRoom),&Parms);
}
struct Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time no room could have been placed at a door (all room placement tries have been exhausted).\n" },
#endif
		{ "DisplayName", "Failed To Add Room" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::NewProp_FromRoom = { "FromRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventOnFailedToAddRoom_Parms, FromRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromRoom_MetaData), NewProp_FromRoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::NewProp_FromDoor = { "FromDoor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventOnFailedToAddRoom_Parms, FromDoor), Z_Construct_UScriptStruct_FDoorDef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromDoor_MetaData), NewProp_FromDoor_MetaData) }; // 3661065545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::NewProp_FromRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::NewProp_FromDoor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnFailedToAddRoom", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::PropPointers), sizeof(DungeonGenerator_eventOnFailedToAddRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGenerator_eventOnFailedToAddRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execOnFailedToAddRoom)
{
	P_GET_OBJECT(URoomData,Z_Param_FromRoom);
	P_GET_STRUCT_REF(FDoorDef,Z_Param_Out_FromDoor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFailedToAddRoom_Implementation(Z_Param_FromRoom,Z_Param_Out_FromDoor);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function OnFailedToAddRoom

// Begin Class ADungeonGenerator Function OnGenerationFailed
static FName NAME_ADungeonGenerator_OnGenerationFailed = FName(TEXT("OnGenerationFailed"));
void ADungeonGenerator::OnGenerationFailed()
{
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnGenerationFailed),NULL);
}
struct Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\n// No dungeon had been generated.\n" },
#endif
		{ "DisplayName", "Generation Failed" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\nNo dungeon had been generated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnGenerationFailed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execOnGenerationFailed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGenerationFailed_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function OnGenerationFailed

// Begin Class ADungeonGenerator Function OnGenerationInit
static FName NAME_ADungeonGenerator_OnGenerationInit = FName(TEXT("OnGenerationInit"));
void ADungeonGenerator::OnGenerationInit()
{
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnGenerationInit),NULL);
}
struct Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called before trying to generate a new dungeon and each time IsValidDungeon return false.\n" },
#endif
		{ "DisplayName", "Generation Init" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before trying to generate a new dungeon and each time IsValidDungeon return false." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnGenerationInit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execOnGenerationInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGenerationInit_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function OnGenerationInit

// Begin Class ADungeonGenerator Function OnPostGeneration
static FName NAME_ADungeonGenerator_OnPostGeneration = FName(TEXT("OnPostGeneration"));
void ADungeonGenerator::OnPostGeneration()
{
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnPostGeneration),NULL);
}
struct Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once after all the dungeon generation (even if failed).\n" },
#endif
		{ "DisplayName", "Post Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once after all the dungeon generation (even if failed)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnPostGeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execOnPostGeneration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPostGeneration_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function OnPostGeneration

// Begin Class ADungeonGenerator Function OnPreGeneration
static FName NAME_ADungeonGenerator_OnPreGeneration = FName(TEXT("OnPreGeneration"));
void ADungeonGenerator::OnPreGeneration()
{
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnPreGeneration),NULL);
}
struct Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once before anything else when generating a new dungeon.\n" },
#endif
		{ "DisplayName", "Pre Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once before anything else when generating a new dungeon." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnPreGeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execOnPreGeneration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreGeneration_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function OnPreGeneration

// Begin Class ADungeonGenerator Function OnRoomAdded
struct DungeonGenerator_eventOnRoomAdded_Parms
{
	const URoomData* NewRoom;
};
static FName NAME_ADungeonGenerator_OnRoomAdded = FName(TEXT("OnRoomAdded"));
void ADungeonGenerator::OnRoomAdded(const URoomData* NewRoom)
{
	DungeonGenerator_eventOnRoomAdded_Parms Parms;
	Parms.NewRoom=NewRoom;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonGenerator_OnRoomAdded),&Parms);
}
struct Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time a room is added in the dungeon (but not spawned yet).\n// Those rooms can be destroyed without loading them if the generation try is not valid.\n" },
#endif
		{ "DisplayName", "On Room Added" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called each time a room is added in the dungeon (but not spawned yet).\nThose rooms can be destroyed without loading them if the generation try is not valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRoom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::NewProp_NewRoom = { "NewRoom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventOnRoomAdded_Parms, NewRoom), Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRoom_MetaData), NewProp_NewRoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::NewProp_NewRoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "OnRoomAdded", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::PropPointers), sizeof(DungeonGenerator_eventOnRoomAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonGenerator_eventOnRoomAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execOnRoomAdded)
{
	P_GET_OBJECT(URoomData,Z_Param_NewRoom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomAdded_Implementation(Z_Param_NewRoom);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function OnRoomAdded

// Begin Class ADungeonGenerator Function SetSeed
struct Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics
{
	struct DungeonGenerator_eventSetSeed_Parms
	{
		int32 NewSeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::NewProp_NewSeed = { "NewSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonGenerator_eventSetSeed_Parms, NewSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::NewProp_NewSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "SetSeed", nullptr, nullptr, Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::DungeonGenerator_eventSetSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::DungeonGenerator_eventSetSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonGenerator_SetSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_SetSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execSetSeed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSeed(Z_Param_NewSeed);
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function SetSeed

// Begin Class ADungeonGenerator Function Unload
struct Z_Construct_UFunction_ADungeonGenerator_Unload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unload the current dungeon\n// Do nothing when called on clients\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unload the current dungeon\nDo nothing when called on clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonGenerator_Unload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonGenerator, nullptr, "Unload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonGenerator_Unload_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonGenerator_Unload_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonGenerator_Unload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonGenerator_Unload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonGenerator::execUnload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unload();
	P_NATIVE_END;
}
// End Class ADungeonGenerator Function Unload

// Begin Class ADungeonGenerator
void ADungeonGenerator::StaticRegisterNativesADungeonGenerator()
{
	UClass* Class = ADungeonGenerator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChooseDoor", &ADungeonGenerator::execChooseDoor },
		{ "ChooseFirstRoomData", &ADungeonGenerator::execChooseFirstRoomData },
		{ "ChooseNextRoomData", &ADungeonGenerator::execChooseNextRoomData },
		{ "ContinueToAddRoom", &ADungeonGenerator::execContinueToAddRoom },
		{ "CountRoomData", &ADungeonGenerator::execCountRoomData },
		{ "CountRoomType", &ADungeonGenerator::execCountRoomType },
		{ "CountTotalRoomData", &ADungeonGenerator::execCountTotalRoomData },
		{ "CountTotalRoomType", &ADungeonGenerator::execCountTotalRoomType },
		{ "CreateDungeon", &ADungeonGenerator::execCreateDungeon },
		{ "Generate", &ADungeonGenerator::execGenerate },
		{ "GetCompatibleRoomData", &ADungeonGenerator::execGetCompatibleRoomData },
		{ "GetNbRoom", &ADungeonGenerator::execGetNbRoom },
		{ "GetProgress", &ADungeonGenerator::execGetProgress },
		{ "GetRandomRoomData", &ADungeonGenerator::execGetRandomRoomData },
		{ "GetRandomRoomDataWeighted", &ADungeonGenerator::execGetRandomRoomDataWeighted },
		{ "GetRandomStream", &ADungeonGenerator::execGetRandomStream },
		{ "GetSeed", &ADungeonGenerator::execGetSeed },
		{ "HasAlreadyOneRoomDataFrom", &ADungeonGenerator::execHasAlreadyOneRoomDataFrom },
		{ "HasAlreadyOneRoomTypeFrom", &ADungeonGenerator::execHasAlreadyOneRoomTypeFrom },
		{ "HasAlreadyRoomData", &ADungeonGenerator::execHasAlreadyRoomData },
		{ "HasAlreadyRoomType", &ADungeonGenerator::execHasAlreadyRoomType },
		{ "InitializeDungeon", &ADungeonGenerator::execInitializeDungeon },
		{ "IsValidDungeon", &ADungeonGenerator::execIsValidDungeon },
		{ "OnFailedToAddRoom", &ADungeonGenerator::execOnFailedToAddRoom },
		{ "OnGenerationFailed", &ADungeonGenerator::execOnGenerationFailed },
		{ "OnGenerationInit", &ADungeonGenerator::execOnGenerationInit },
		{ "OnPostGeneration", &ADungeonGenerator::execOnPostGeneration },
		{ "OnPreGeneration", &ADungeonGenerator::execOnPreGeneration },
		{ "OnRoomAdded", &ADungeonGenerator::execOnRoomAdded },
		{ "SetSeed", &ADungeonGenerator::execSetSeed },
		{ "Unload", &ADungeonGenerator::execUnload },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is the main actor of the plugin. The dungeon generator is responsible to generate dungeons and replicate them over the network. \n" },
#endif
		{ "IncludePath", "DungeonGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the main actor of the plugin. The dungeon generator is responsible to generate dungeons and replicate them over the network." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreGenerationEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once before anything else when generating a new dungeon.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once before anything else when generating a new dungeon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPostGenerationEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called once after all the dungeon generation (even if failed).\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once after all the dungeon generation (even if failed)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerationInitEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called before trying to generate a new dungeon and each time IsValidDungeon return false.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before trying to generate a new dungeon and each time IsValidDungeon return false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerationFailedEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\n// No dungeon had been generated.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when all dungeon generation tries are exhausted (IsValidDungeon always return false).\nNo dungeon had been generated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRoomAddedEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time a room is added in the dungeon (but not spawned yet).\n// Those rooms can be destroyed without loading them if the generation try is not valid.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called each time a room is added in the dungeon (but not spawned yet).\nThose rooms can be destroyed without loading them if the generation try is not valid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailedToAddRoomEvent_MetaData[] = {
		{ "Category", "Dungeon Generator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called each time no room could have been placed at a door (all room placement tries have been exhausted).\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called each time no room could have been placed at a door (all room placement tries have been exhausted)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGeneratorTransform_MetaData[] = {
		{ "Category", "Procedural Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If ticked, the rooms location and rotation will be relative to this actor transform.\n// If unticked, the rooms will be placed relatively to the world's origin.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If ticked, the rooms location and rotation will be relative to this actor transform.\nIf unticked, the rooms will be placed relatively to the world's origin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationType_MetaData[] = {
		{ "Category", "Procedural Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In which order the dungeon generate rooms.\n// Depth First: Dungeon will use the last generated room to place the next one. Resulting in a more linear dungeon.\n// Breadth First: Dungeon will generate a room at each door of the current one before going to the next room. Resulting in a more spread dungeon.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In which order the dungeon generate rooms.\nDepth First: Dungeon will use the last generated room to place the next one. Resulting in a more linear dungeon.\nBreadth First: Dungeon will generate a room at each door of the current one before going to the next room. Resulting in a more spread dungeon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedType_MetaData[] = {
		{ "Category", "Procedural Generation|Seed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How to handle the seed at each generation call.\n// Random: Generate and use a random seed.\n// Auto Increment: Use Seed for first generation, and increment it by SeedIncrement in each subsequent generation.\n// Fixed: Use only Seed for each generation.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The increment number for each subsequent dungeon generation when SeedType is AutoIncrement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanLoop_MetaData[] = {
		{ "Category", "Procedural Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If ticked, newly placed room will check if any door is aligned with another room, and if so will connect them.\n// If unticked, only the doors between CurrentRoom and NextRoom (in the function ChooseNextRoom) will be connected.\n// (will only have effect if the deprecated CanLoop in the plugin settings is ticked too, until it is removed in a future version)\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If ticked, newly placed room will check if any door is aligned with another room, and if so will connect them.\nIf unticked, only the doors between CurrentRoom and NextRoom (in the function ChooseNextRoom) will be connected.\n(will only have effect if the deprecated CanLoop in the plugin settings is ticked too, until it is removed in a future version)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLimits_MetaData[] = {
		{ "Category", "Procedural Generation" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldCollisionChecks_MetaData[] = {
		{ "Category", "Procedural Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If ticked, when trying to place a new room during a dungeon generation,\n// a box overlap test will be made to make sure the room will not spawn\n// inside existing meshes in the persistent world.\n// This is a heavy work and should be ticked only when necessary.\n// Does not have impact during gameplay. Only during the generation process.\n" },
#endif
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If ticked, when trying to place a new room during a dungeon generation,\na box overlap test will be made to make sure the room will not spawn\ninside existing meshes in the persistent world.\nThis is a heavy work and should be ticked only when necessary.\nDoes not have impact during gameplay. Only during the generation process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "Category", "Dungeon Generator" },
		{ "DisplayName", "Rooms" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Procedural Generation|Seed" },
		{ "EditCondition", "SeedType!=ESeedType::Random" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DungeonGenerator.h" },
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
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SeedType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SeedType;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SeedIncrement;
	static void NewProp_bCanLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonLimits;
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
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseDoor, "ChooseDoor" }, // 1910664129
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseFirstRoomData, "ChooseFirstRoomData" }, // 2792457932
		{ &Z_Construct_UFunction_ADungeonGenerator_ChooseNextRoomData, "ChooseNextRoomData" }, // 1872766430
		{ &Z_Construct_UFunction_ADungeonGenerator_ContinueToAddRoom, "ContinueToAddRoom" }, // 1293062094
		{ &Z_Construct_UFunction_ADungeonGenerator_CountRoomData, "CountRoomData" }, // 1759688818
		{ &Z_Construct_UFunction_ADungeonGenerator_CountRoomType, "CountRoomType" }, // 2557181716
		{ &Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomData, "CountTotalRoomData" }, // 2043551075
		{ &Z_Construct_UFunction_ADungeonGenerator_CountTotalRoomType, "CountTotalRoomType" }, // 1038645697
		{ &Z_Construct_UFunction_ADungeonGenerator_CreateDungeon, "CreateDungeon" }, // 2338806977
		{ &Z_Construct_UFunction_ADungeonGenerator_Generate, "Generate" }, // 2613238295
		{ &Z_Construct_UFunction_ADungeonGenerator_GetCompatibleRoomData, "GetCompatibleRoomData" }, // 4176039988
		{ &Z_Construct_UFunction_ADungeonGenerator_GetNbRoom, "GetNbRoom" }, // 2594580551
		{ &Z_Construct_UFunction_ADungeonGenerator_GetProgress, "GetProgress" }, // 1081336974
		{ &Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomData, "GetRandomRoomData" }, // 729402774
		{ &Z_Construct_UFunction_ADungeonGenerator_GetRandomRoomDataWeighted, "GetRandomRoomDataWeighted" }, // 385742097
		{ &Z_Construct_UFunction_ADungeonGenerator_GetRandomStream, "GetRandomStream" }, // 72683524
		{ &Z_Construct_UFunction_ADungeonGenerator_GetSeed, "GetSeed" }, // 2376573577
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomDataFrom, "HasAlreadyOneRoomDataFrom" }, // 2159571479
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyOneRoomTypeFrom, "HasAlreadyOneRoomTypeFrom" }, // 721603391
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomData, "HasAlreadyRoomData" }, // 715971135
		{ &Z_Construct_UFunction_ADungeonGenerator_HasAlreadyRoomType, "HasAlreadyRoomType" }, // 4186938138
		{ &Z_Construct_UFunction_ADungeonGenerator_InitializeDungeon, "InitializeDungeon" }, // 3545852622
		{ &Z_Construct_UFunction_ADungeonGenerator_IsValidDungeon, "IsValidDungeon" }, // 2895030523
		{ &Z_Construct_UFunction_ADungeonGenerator_OnFailedToAddRoom, "OnFailedToAddRoom" }, // 3683757103
		{ &Z_Construct_UFunction_ADungeonGenerator_OnGenerationFailed, "OnGenerationFailed" }, // 169780894
		{ &Z_Construct_UFunction_ADungeonGenerator_OnGenerationInit, "OnGenerationInit" }, // 878969385
		{ &Z_Construct_UFunction_ADungeonGenerator_OnPostGeneration, "OnPostGeneration" }, // 3053238440
		{ &Z_Construct_UFunction_ADungeonGenerator_OnPreGeneration, "OnPreGeneration" }, // 2308112885
		{ &Z_Construct_UFunction_ADungeonGenerator_OnRoomAdded, "OnRoomAdded" }, // 2376426625
		{ &Z_Construct_UFunction_ADungeonGenerator_SetSeed, "SetSeed" }, // 3466384735
		{ &Z_Construct_UFunction_ADungeonGenerator_Unload, "Unload" }, // 3602825385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent = { "OnPreGenerationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnPreGenerationEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreGenerationEvent_MetaData), NewProp_OnPreGenerationEvent_MetaData) }; // 3495254887
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent = { "OnPostGenerationEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnPostGenerationEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPostGenerationEvent_MetaData), NewProp_OnPostGenerationEvent_MetaData) }; // 3495254887
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent = { "OnGenerationInitEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnGenerationInitEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerationInitEvent_MetaData), NewProp_OnGenerationInitEvent_MetaData) }; // 3495254887
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationFailedEvent = { "OnGenerationFailedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnGenerationFailedEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerationFailedEvent_MetaData), NewProp_OnGenerationFailedEvent_MetaData) }; // 3495254887
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent = { "OnRoomAddedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnRoomAddedEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRoomAddedEvent_MetaData), NewProp_OnRoomAddedEvent_MetaData) }; // 3780801334
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnFailedToAddRoomEvent = { "OnFailedToAddRoomEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, OnFailedToAddRoomEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailedToAddRoomEvent_MetaData), NewProp_OnFailedToAddRoomEvent_MetaData) }; // 3350789848
void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform_SetBit(void* Obj)
{
	((ADungeonGenerator*)Obj)->bUseGeneratorTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform = { "bUseGeneratorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGeneratorTransform_MetaData), NewProp_bUseGeneratorTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType = { "GenerationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, GenerationType), Z_Construct_UEnum_ProceduralDungeon_EGenerationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationType_MetaData), NewProp_GenerationType_MetaData) }; // 513687356
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType = { "SeedType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, SeedType), Z_Construct_UEnum_ProceduralDungeon_ESeedType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedType_MetaData), NewProp_SeedType_MetaData) }; // 1284640329
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedIncrement = { "SeedIncrement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, SeedIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedIncrement_MetaData), NewProp_SeedIncrement_MetaData) };
void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bCanLoop_SetBit(void* Obj)
{
	((ADungeonGenerator*)Obj)->bCanLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bCanLoop = { "bCanLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bCanLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanLoop_MetaData), NewProp_bCanLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DungeonLimits = { "DungeonLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, DungeonLimits), Z_Construct_UScriptStruct_FBoundsParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonLimits_MetaData), NewProp_DungeonLimits_MetaData) }; // 4215163218
void Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseWorldCollisionChecks_SetBit(void* Obj)
{
	((ADungeonGenerator*)Obj)->bUseWorldCollisionChecks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseWorldCollisionChecks = { "bUseWorldCollisionChecks", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonGenerator), &Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseWorldCollisionChecks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldCollisionChecks_MetaData), NewProp_bUseWorldCollisionChecks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, Graph), Z_Construct_UClass_UDungeonGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0040000000000021, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_Inner = { "DoorList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList = { "DoorList", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, DoorList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorList_MetaData), NewProp_DoorList_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Generation = { "Generation", nullptr, (EPropertyFlags)0x0040000000002020, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonGenerator, Generation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generation_MetaData), NewProp_Generation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPreGenerationEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnPostGenerationEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationInitEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnGenerationFailedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnRoomAddedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_OnFailedToAddRoomEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseGeneratorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_GenerationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_SeedIncrement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bCanLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DungeonLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_bUseWorldCollisionChecks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_DoorList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonGenerator_Statics::NewProp_Generation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
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
void ADungeonGenerator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Graph(TEXT("Graph"));
	static const FName Name_Seed(TEXT("Seed"));
	static const FName Name_Generation(TEXT("Generation"));
	const bool bIsValid = true
		&& Name_Graph == ClassReps[(int32)ENetFields_Private::Graph].Property->GetFName()
		&& Name_Seed == ClassReps[(int32)ENetFields_Private::Seed].Property->GetFName()
		&& Name_Generation == ClassReps[(int32)ENetFields_Private::Generation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADungeonGenerator"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonGenerator);
ADungeonGenerator::~ADungeonGenerator() {}
// End Class ADungeonGenerator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGenerationResult_StaticEnum, TEXT("EGenerationResult"), &Z_Registration_Info_UEnum_EGenerationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1105764481U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoundsParams::StaticStruct, Z_Construct_UScriptStruct_FBoundsParams_Statics::NewStructOps, TEXT("BoundsParams"), &Z_Registration_Info_UScriptStruct_BoundsParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoundsParams), 4215163218U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonGenerator, ADungeonGenerator::StaticClass, TEXT("ADungeonGenerator"), &Z_Registration_Info_UClass_ADungeonGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonGenerator), 990175993U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_1567271722(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

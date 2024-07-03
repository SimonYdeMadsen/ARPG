// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/ProceduralDungeonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeonTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationState();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationType();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_ESeedType();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode();
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FDoorDef();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Enum EGenerationState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerationState;
static UEnum* EGenerationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenerationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenerationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EGenerationState, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EGenerationState"));
	}
	return Z_Registration_Info_UEnum_EGenerationState.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationState>()
{
	return EGenerationState_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralDungeon_EGenerationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Generation.DisplayName", "Generation" },
		{ "Generation.Name", "EGenerationState::Generation" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EGenerationState::Idle" },
		{ "Initialization.DisplayName", "Initialization" },
		{ "Initialization.Name", "EGenerationState::Initialization" },
		{ "Load.DisplayName", "Load" },
		{ "Load.Name", "EGenerationState::Load" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
		{ "NbState.Hidden", "" },
		{ "NbState.Name", "EGenerationState::NbState" },
		{ "Play.DisplayName", "Play" },
		{ "Play.Name", "EGenerationState::Play" },
		{ "Unload.DisplayName", "Unload" },
		{ "Unload.Name", "EGenerationState::Unload" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenerationState::Idle", (int64)EGenerationState::Idle },
		{ "EGenerationState::Generation", (int64)EGenerationState::Generation },
		{ "EGenerationState::Load", (int64)EGenerationState::Load },
		{ "EGenerationState::Initialization", (int64)EGenerationState::Initialization },
		{ "EGenerationState::Unload", (int64)EGenerationState::Unload },
		{ "EGenerationState::Play", (int64)EGenerationState::Play },
		{ "EGenerationState::NbState", (int64)EGenerationState::NbState },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EGenerationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	"EGenerationState",
	"EGenerationState",
	Z_Construct_UEnum_ProceduralDungeon_EGenerationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EGenerationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EGenerationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EGenerationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationState()
{
	if (!Z_Registration_Info_UEnum_EGenerationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerationState.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EGenerationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenerationState.InnerSingleton;
}
// End Enum EGenerationState

// Begin Enum EDoorDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorDirection;
static UEnum* EDoorDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDoorDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDoorDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EDoorDirection"));
	}
	return Z_Registration_Info_UEnum_EDoorDirection.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EDoorDirection>()
{
	return EDoorDirection_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralDungeon_EDoorDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Door Direction" },
		{ "East.DisplayName", "East" },
		{ "East.Name", "EDoorDirection::East" },
		{ "East.ToolTip", "rotation = 90 | positive Y (world right)" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
		{ "NbDirection.Hidden", "" },
		{ "NbDirection.Name", "EDoorDirection::NbDirection" },
		{ "North.DisplayName", "North" },
		{ "North.Name", "EDoorDirection::North" },
		{ "North.ToolTip", "rotation = 0 | positive X (world forward)" },
		{ "South.DisplayName", "South" },
		{ "South.Name", "EDoorDirection::South" },
		{ "South.ToolTip", "rotation = 180 | negative X (world backward)" },
		{ "West.DisplayName", "West" },
		{ "West.Name", "EDoorDirection::West" },
		{ "West.ToolTip", "rotation = 270 | negative Y (world left)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDoorDirection::North", (int64)EDoorDirection::North },
		{ "EDoorDirection::East", (int64)EDoorDirection::East },
		{ "EDoorDirection::South", (int64)EDoorDirection::South },
		{ "EDoorDirection::West", (int64)EDoorDirection::West },
		{ "EDoorDirection::NbDirection", (int64)EDoorDirection::NbDirection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EDoorDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	"EDoorDirection",
	"EDoorDirection",
	Z_Construct_UEnum_ProceduralDungeon_EDoorDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EDoorDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EDoorDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection()
{
	if (!Z_Registration_Info_UEnum_EDoorDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorDirection.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EDoorDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDoorDirection.InnerSingleton;
}
// End Enum EDoorDirection

// Begin Enum EGenerationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerationType;
static UEnum* EGenerationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenerationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EGenerationType, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EGenerationType"));
	}
	return Z_Registration_Info_UEnum_EGenerationType.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationType>()
{
	return EGenerationType_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralDungeon_EGenerationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BFS.DisplayName", "Breadth First" },
		{ "BFS.Name", "EGenerationType::BFS" },
		{ "BFS.Tooltip", "Make the dungeon less linear" },
		{ "BlueprintType", "true" },
		{ "DFS.DisplayName", "Depth First" },
		{ "DFS.Name", "EGenerationType::DFS" },
		{ "DFS.Tooltip", "Make the dungeon more linear" },
		{ "DisplayName", "Generation Type" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
		{ "NbType.Hidden", "" },
		{ "NbType.Name", "EGenerationType::NbType" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenerationType::DFS", (int64)EGenerationType::DFS },
		{ "EGenerationType::BFS", (int64)EGenerationType::BFS },
		{ "EGenerationType::NbType", (int64)EGenerationType::NbType },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EGenerationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	"EGenerationType",
	"EGenerationType",
	Z_Construct_UEnum_ProceduralDungeon_EGenerationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EGenerationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EGenerationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EGenerationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralDungeon_EGenerationType()
{
	if (!Z_Registration_Info_UEnum_EGenerationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerationType.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EGenerationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenerationType.InnerSingleton;
}
// End Enum EGenerationType

// Begin Enum ESeedType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESeedType;
static UEnum* ESeedType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESeedType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESeedType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_ESeedType, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("ESeedType"));
	}
	return Z_Registration_Info_UEnum_ESeedType.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<ESeedType>()
{
	return ESeedType_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralDungeon_ESeedType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AutoIncrement.DisplayName", "Auto Increment" },
		{ "AutoIncrement.Name", "ESeedType::AutoIncrement" },
		{ "AutoIncrement.Tooltip", "Get the initial seed and increment at each generation" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Seed Type" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "ESeedType::Fixed" },
		{ "Fixed.Tooltip", "Always use initial seed (or you can set it manually via blueprint)" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
		{ "NbType.Hidden", "" },
		{ "NbType.Name", "ESeedType::NbType" },
		{ "Random.DisplayName", "Random" },
		{ "Random.Name", "ESeedType::Random" },
		{ "Random.Tooltip", "Random seed at each generation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESeedType::Random", (int64)ESeedType::Random },
		{ "ESeedType::AutoIncrement", (int64)ESeedType::AutoIncrement },
		{ "ESeedType::Fixed", (int64)ESeedType::Fixed },
		{ "ESeedType::NbType", (int64)ESeedType::NbType },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_ESeedType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	"ESeedType",
	"ESeedType",
	Z_Construct_UEnum_ProceduralDungeon_ESeedType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_ESeedType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_ESeedType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_ESeedType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralDungeon_ESeedType()
{
	if (!Z_Registration_Info_UEnum_ESeedType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESeedType.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_ESeedType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESeedType.InnerSingleton;
}
// End Enum ESeedType

// Begin Enum EVisibilityMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisibilityMode;
static UEnum* EVisibilityMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVisibilityMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVisibilityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("EVisibilityMode"));
	}
	return Z_Registration_Info_UEnum_EVisibilityMode.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EVisibilityMode>()
{
	return EVisibilityMode_StaticEnum();
}
struct Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Visibility mode for Room Visibilty Components.\n" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EVisibilityMode::Custom" },
		{ "Default.DisplayName", "Same As Room" },
		{ "Default.Name", "EVisibilityMode::Default" },
		{ "DisplayName", "Room Visibility" },
		{ "ForceHidden.DisplayName", "Force Hidden" },
		{ "ForceHidden.Name", "EVisibilityMode::ForceHidden" },
		{ "ForceVisible.DisplayName", "Force Visible" },
		{ "ForceVisible.Name", "EVisibilityMode::ForceVisible" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
		{ "NbMode.Hidden", "" },
		{ "NbMode.Name", "EVisibilityMode::NbMode" },
		{ "ToolTip", "Visibility mode for Room Visibilty Components." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVisibilityMode::Default", (int64)EVisibilityMode::Default },
		{ "EVisibilityMode::ForceVisible", (int64)EVisibilityMode::ForceVisible },
		{ "EVisibilityMode::ForceHidden", (int64)EVisibilityMode::ForceHidden },
		{ "EVisibilityMode::Custom", (int64)EVisibilityMode::Custom },
		{ "EVisibilityMode::NbMode", (int64)EVisibilityMode::NbMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	"EVisibilityMode",
	"EVisibilityMode",
	Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode()
{
	if (!Z_Registration_Info_UEnum_EVisibilityMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisibilityMode.InnerSingleton, Z_Construct_UEnum_ProceduralDungeon_EVisibilityMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVisibilityMode.InnerSingleton;
}
// End Enum EVisibilityMode

// Begin ScriptStruct FDoorDef
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoorDef;
class UScriptStruct* FDoorDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoorDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoorDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoorDef, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeon(), TEXT("DoorDef"));
	}
	return Z_Registration_Info_UScriptStruct_DoorDef.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<FDoorDef>()
{
	return FDoorDef::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoorDef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "DoorDef" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "DoorDef" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "DoorDef" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoorDef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorDef, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorDef, Direction), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 687843478
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorDef, Type), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoorDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorDef_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoorDef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
	nullptr,
	&NewStructOps,
	"DoorDef",
	Z_Construct_UScriptStruct_FDoorDef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorDef_Statics::PropPointers),
	sizeof(FDoorDef),
	alignof(FDoorDef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorDef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoorDef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoorDef()
{
	if (!Z_Registration_Info_UScriptStruct_DoorDef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoorDef.InnerSingleton, Z_Construct_UScriptStruct_FDoorDef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoorDef.InnerSingleton;
}
// End ScriptStruct FDoorDef

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGenerationState_StaticEnum, TEXT("EGenerationState"), &Z_Registration_Info_UEnum_EGenerationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3727864342U) },
		{ EDoorDirection_StaticEnum, TEXT("EDoorDirection"), &Z_Registration_Info_UEnum_EDoorDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 687843478U) },
		{ EGenerationType_StaticEnum, TEXT("EGenerationType"), &Z_Registration_Info_UEnum_EGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 513687356U) },
		{ ESeedType_StaticEnum, TEXT("ESeedType"), &Z_Registration_Info_UEnum_ESeedType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1284640329U) },
		{ EVisibilityMode_StaticEnum, TEXT("EVisibilityMode"), &Z_Registration_Info_UEnum_EVisibilityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2249036084U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDoorDef::StaticStruct, Z_Construct_UScriptStruct_FDoorDef_Statics::NewStructOps, TEXT("DoorDef"), &Z_Registration_Info_UScriptStruct_DoorDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoorDef), 3661065545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonTypes_h_2942898526(TEXT("/Script/ProceduralDungeon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

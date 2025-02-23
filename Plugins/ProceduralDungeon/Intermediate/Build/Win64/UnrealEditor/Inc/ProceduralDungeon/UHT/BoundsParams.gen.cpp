// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/BoundsParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoundsParams() {}

// Begin Cross Module References
PROCEDURALDUNGEON_API UScriptStruct* Z_Construct_UScriptStruct_FBoundsParams();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

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
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
		{ "ShortToolTip", "Holds the settings for the dungeon limits." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the settings for the dungeon limits.\nThese values are expressed in Room cells, and are based on the origin of the first room (0,0,0).\nFor example, if the first room is only 1 room cell (`FirstPoint = (0,0,0)`, `SecondPoint = (1,1,1)`), then  this is the cell (0,0,0).\nIf you set a `MinY=2` et `MaxY=2`, then on the Y axis the dungeon can go from the cell -2 to cell 2,\nMaking an effective range of 5 cells, centered on the first room." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMaxX_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the X limit in positive axis (north from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the X limit in positive axis (north from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The X positive limit (north) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMaxX" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The X positive limit (north) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMinX_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the X limit in negative axis (south from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the X limit in negative axis (south from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The X negative limit (south) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMinX" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The X negative limit (south) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMaxY_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the Y limit in positive axis (east from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the Y limit in positive axis (east from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Y positive limit (east) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMaxY" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Y positive limit (east) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMinY_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the Y limit in negative axis (west from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the Y limit in negative axis (west from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinY_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Y negative limit (west) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMinY" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Y negative limit (west) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMaxZ_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the Z limit in positive axis (up from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the Z limit in positive axis (up from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZ_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Z positive limit (up) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMaxZ" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Z positive limit (up) of the dungeon in room units (starting from the origin of the first room)." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitMinZ_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables the Z limit in negative axis (down from the first room).\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables the Z limit in negative axis (down from the first room)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZ_MetaData[] = {
		{ "Category", "Procedural Generation|Bounds Limits" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Z negative limit (down) of the dungeon in room units (starting from the origin of the first room).\n" },
#endif
		{ "EditCondition", "bLimitMinZ" },
		{ "ModuleRelativePath", "Public/BoundsParams.h" },
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

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_BoundsParams_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoundsParams::StaticStruct, Z_Construct_UScriptStruct_FBoundsParams_Statics::NewStructOps, TEXT("BoundsParams"), &Z_Registration_Info_UScriptStruct_BoundsParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoundsParams), 3499304364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_BoundsParams_h_640759495(TEXT("/Script/ProceduralDungeon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_BoundsParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_BoundsParams_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

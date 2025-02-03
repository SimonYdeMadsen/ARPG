// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeonEditor/Private/ProceduralDungeonEdTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeonEdTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
PROCEDURALDUNGEONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMargin3D();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeonEditor();
// End Cross Module References

// Begin ScriptStruct FMargin3D
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Margin3D;
class UScriptStruct* FMargin3D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Margin3D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Margin3D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMargin3D, (UObject*)Z_Construct_UPackage__Script_ProceduralDungeonEditor(), TEXT("Margin3D"));
	}
	return Z_Registration_Info_UScriptStruct_Margin3D.OuterSingleton;
}
template<> PROCEDURALDUNGEONEDITOR_API UScriptStruct* StaticStruct<FMargin3D>()
{
	return FMargin3D::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMargin3D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Holds margin values in 3D (e.g. used for box volumes)\n" },
#endif
		{ "ModuleRelativePath", "Private/ProceduralDungeonEdTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds margin values in 3D (e.g. used for box volumes)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[] = {
		{ "Category", "Margin" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Private/ProceduralDungeonEdTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[] = {
		{ "Category", "Margin" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Private/ProceduralDungeonEdTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[] = {
		{ "Category", "Margin" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Private/ProceduralDungeonEdTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_XAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMargin3D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMargin3D_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMargin3D, XAxis), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XAxis_MetaData), NewProp_XAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMargin3D_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMargin3D, YAxis), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxis_MetaData), NewProp_YAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMargin3D_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMargin3D, ZAxis), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZAxis_MetaData), NewProp_ZAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMargin3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin3D_Statics::NewProp_XAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin3D_Statics::NewProp_YAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMargin3D_Statics::NewProp_ZAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMargin3D_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeonEditor,
	nullptr,
	&NewStructOps,
	"Margin3D",
	Z_Construct_UScriptStruct_FMargin3D_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin3D_Statics::PropPointers),
	sizeof(FMargin3D),
	alignof(FMargin3D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMargin3D_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMargin3D_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMargin3D()
{
	if (!Z_Registration_Info_UScriptStruct_Margin3D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Margin3D.InnerSingleton, Z_Construct_UScriptStruct_FMargin3D_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Margin3D.InnerSingleton;
}
// End ScriptStruct FMargin3D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_ProceduralDungeonEdTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMargin3D::StaticStruct, Z_Construct_UScriptStruct_FMargin3D_Statics::NewStructOps, TEXT("Margin3D"), &Z_Registration_Info_UScriptStruct_Margin3D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMargin3D), 321781792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_ProceduralDungeonEdTypes_h_2783516910(TEXT("/Script/ProceduralDungeonEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_ProceduralDungeonEdTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_ProceduralDungeonEdTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

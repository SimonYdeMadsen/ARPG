// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DoorType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorType() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Class UDoorType
void UDoorType::StaticRegisterNativesUDoorType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorType);
UClass* Z_Construct_UClass_UDoorType_NoRegister()
{
	return UDoorType::StaticClass();
}
struct Z_Construct_UClass_UDoorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DoorType.h" },
		{ "ModuleRelativePath", "Public/DoorType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Door Type" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of the door bounds, only used by the debug draw as a visual hint for designers and artists.\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the door bounds, only used by the debug draw as a visual hint for designers and artists." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Door Type" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Just a description, used nowhere.\n" },
#endif
		{ "ModuleRelativePath", "Public/DoorType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Just a description, used nowhere." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorType, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDoorType_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080800000801, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDoorType, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Size,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorType_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDoorType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorType_Statics::ClassParams = {
	&UDoorType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDoorType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDoorType_Statics::Class_MetaDataParams), Z_Construct_UClass_UDoorType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDoorType()
{
	if (!Z_Registration_Info_UClass_UDoorType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorType.OuterSingleton, Z_Construct_UClass_UDoorType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDoorType.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UDoorType>()
{
	return UDoorType::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorType);
UDoorType::~UDoorType() {}
// End Class UDoorType

// Begin Registration
<<<<<<< Updated upstream
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics
>>>>>>> Stashed changes
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDoorType, UDoorType::StaticClass, TEXT("UDoorType"), &Z_Registration_Info_UClass_UDoorType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorType), 1015544195U) },
	};
};
<<<<<<< Updated upstream
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_3854430744(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_3854430744(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DoorType_h_Statics::ClassInfo),
>>>>>>> Stashed changes
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

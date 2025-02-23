// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomCustomData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomCustomData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UReplicableObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Class URoomCustomData
void URoomCustomData::StaticRegisterNativesURoomCustomData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoomCustomData);
UClass* Z_Construct_UClass_URoomCustomData_NoRegister()
{
	return URoomCustomData::StaticClass();
}
struct Z_Construct_UClass_URoomCustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base class for user custom data embedded in room instances\n" },
#endif
		{ "IncludePath", "RoomCustomData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoomCustomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for user custom data embedded in room instances" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelComponent_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Dungeon Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component to create and attach on the Level Script Actor of the instanced room.\n" },
#endif
		{ "ModuleRelativePath", "Public/RoomCustomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component to create and attach on the Level Script Actor of the instanced room." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LevelComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomCustomData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URoomCustomData_Statics::NewProp_LevelComponent = { "LevelComponent", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URoomCustomData, LevelComponent), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelComponent_MetaData), NewProp_LevelComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoomCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoomCustomData_Statics::NewProp_LevelComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomCustomData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URoomCustomData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReplicableObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomCustomData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomCustomData_Statics::ClassParams = {
	&URoomCustomData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URoomCustomData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URoomCustomData_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomCustomData_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomCustomData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoomCustomData()
{
	if (!Z_Registration_Info_UClass_URoomCustomData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomCustomData.OuterSingleton, Z_Construct_UClass_URoomCustomData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomCustomData.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<URoomCustomData>()
{
	return URoomCustomData::StaticClass();
}
URoomCustomData::URoomCustomData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoomCustomData);
URoomCustomData::~URoomCustomData() {}
// End Class URoomCustomData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomCustomData, URoomCustomData::StaticClass, TEXT("URoomCustomData"), &Z_Registration_Info_UClass_URoomCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomCustomData), 1092613565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_1327365283(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

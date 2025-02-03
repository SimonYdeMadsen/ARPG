// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeonEditor/Private/Factories/RoomDataFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomDataFactory() {}

// Begin Cross Module References
PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_URoomDataFactory();
PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_URoomDataFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeonEditor();
// End Cross Module References

// Begin Class URoomDataFactory
void URoomDataFactory::StaticRegisterNativesURoomDataFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoomDataFactory);
UClass* Z_Construct_UClass_URoomDataFactory_NoRegister()
{
	return URoomDataFactory::StaticClass();
}
struct Z_Construct_UClass_URoomDataFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/RoomDataFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/RoomDataFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomDataFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URoomDataFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeonEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomDataFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomDataFactory_Statics::ClassParams = {
	&URoomDataFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomDataFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomDataFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoomDataFactory()
{
	if (!Z_Registration_Info_UClass_URoomDataFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomDataFactory.OuterSingleton, Z_Construct_UClass_URoomDataFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomDataFactory.OuterSingleton;
}
template<> PROCEDURALDUNGEONEDITOR_API UClass* StaticClass<URoomDataFactory>()
{
	return URoomDataFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoomDataFactory);
URoomDataFactory::~URoomDataFactory() {}
// End Class URoomDataFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomDataFactory, URoomDataFactory::StaticClass, TEXT("URoomDataFactory"), &Z_Registration_Info_UClass_URoomDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomDataFactory), 1644853813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h_671135532(TEXT("/Script/ProceduralDungeonEditor"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_Factories_RoomDataFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

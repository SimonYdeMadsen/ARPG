// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomVisibilityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomVisibilityComponent() {}

// Begin Cross Module References
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisibilityComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisibilityComponent_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UStaticRoomVisibilityComponent();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Class URoomVisibilityComponent
void URoomVisibilityComponent::StaticRegisterNativesURoomVisibilityComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoomVisibilityComponent);
UClass* Z_Construct_UClass_URoomVisibilityComponent_NoRegister()
{
	return URoomVisibilityComponent::StaticClass();
}
struct Z_Construct_UClass_URoomVisibilityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ProceduralDungeon" },
		{ "DisplayName", "Room Visibility" },
		{ "IncludePath", "RoomVisibilityComponent.h" },
		{ "ModuleRelativePath", "Public/RoomVisibilityComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomVisibilityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URoomVisibilityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticRoomVisibilityComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URoomVisibilityComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_URoomVisitor_NoRegister, (int32)VTABLE_OFFSET(URoomVisibilityComponent, IRoomVisitor), false },  // 4091944047
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomVisibilityComponent_Statics::ClassParams = {
	&URoomVisibilityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisibilityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomVisibilityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoomVisibilityComponent()
{
	if (!Z_Registration_Info_UClass_URoomVisibilityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomVisibilityComponent.OuterSingleton, Z_Construct_UClass_URoomVisibilityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomVisibilityComponent.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<URoomVisibilityComponent>()
{
	return URoomVisibilityComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoomVisibilityComponent);
URoomVisibilityComponent::~URoomVisibilityComponent() {}
// End Class URoomVisibilityComponent

// Begin Registration
<<<<<<< Updated upstream
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics
>>>>>>> Stashed changes
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomVisibilityComponent, URoomVisibilityComponent::StaticClass, TEXT("URoomVisibilityComponent"), &Z_Registration_Info_UClass_URoomVisibilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomVisibilityComponent), 3667167334U) },
	};
};
<<<<<<< Updated upstream
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_129136697(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_129136697(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisibilityComponent_h_Statics::ClassInfo),
>>>>>>> Stashed changes
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

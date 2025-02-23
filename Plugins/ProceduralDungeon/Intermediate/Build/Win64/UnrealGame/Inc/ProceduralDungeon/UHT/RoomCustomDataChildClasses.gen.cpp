// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Private/Tests/Classes/RoomCustomDataChildClasses.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomCustomDataChildClasses() {}

// Begin Cross Module References
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataA();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataA_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataB();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataB_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataC();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UCustomDataC_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Class UCustomDataA
void UCustomDataA::StaticRegisterNativesUCustomDataA()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomDataA);
UClass* Z_Construct_UClass_UCustomDataA_NoRegister()
{
	return UCustomDataA::StaticClass();
}
struct Z_Construct_UClass_UCustomDataA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomDataA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomDataA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomCustomData,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomDataA_Statics::ClassParams = {
	&UCustomDataA::StaticClass,
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
	0x040000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataA_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomDataA_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomDataA()
{
	if (!Z_Registration_Info_UClass_UCustomDataA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomDataA.OuterSingleton, Z_Construct_UClass_UCustomDataA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomDataA.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UCustomDataA>()
{
	return UCustomDataA::StaticClass();
}
UCustomDataA::UCustomDataA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomDataA);
UCustomDataA::~UCustomDataA() {}
// End Class UCustomDataA

// Begin Class UCustomDataB
void UCustomDataB::StaticRegisterNativesUCustomDataB()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomDataB);
UClass* Z_Construct_UClass_UCustomDataB_NoRegister()
{
	return UCustomDataB::StaticClass();
}
struct Z_Construct_UClass_UCustomDataB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomDataB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomDataB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomCustomData,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomDataB_Statics::ClassParams = {
	&UCustomDataB::StaticClass,
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
	0x040000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataB_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomDataB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomDataB()
{
	if (!Z_Registration_Info_UClass_UCustomDataB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomDataB.OuterSingleton, Z_Construct_UClass_UCustomDataB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomDataB.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UCustomDataB>()
{
	return UCustomDataB::StaticClass();
}
UCustomDataB::UCustomDataB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomDataB);
UCustomDataB::~UCustomDataB() {}
// End Class UCustomDataB

// Begin Class UCustomDataC
void UCustomDataC::StaticRegisterNativesUCustomDataC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomDataC);
UClass* Z_Construct_UClass_UCustomDataC_NoRegister()
{
	return UCustomDataC::StaticClass();
}
struct Z_Construct_UClass_UCustomDataC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Tests/Classes/RoomCustomDataChildClasses.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomDataC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomDataC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URoomCustomData,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomDataC_Statics::ClassParams = {
	&UCustomDataC::StaticClass,
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
	0x040000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomDataC_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomDataC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomDataC()
{
	if (!Z_Registration_Info_UClass_UCustomDataC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomDataC.OuterSingleton, Z_Construct_UClass_UCustomDataC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomDataC.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UCustomDataC>()
{
	return UCustomDataC::StaticClass();
}
UCustomDataC::UCustomDataC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomDataC);
UCustomDataC::~UCustomDataC() {}
// End Class UCustomDataC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomCustomDataChildClasses_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomDataA, UCustomDataA::StaticClass, TEXT("UCustomDataA"), &Z_Registration_Info_UClass_UCustomDataA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomDataA), 691288807U) },
		{ Z_Construct_UClass_UCustomDataB, UCustomDataB::StaticClass, TEXT("UCustomDataB"), &Z_Registration_Info_UClass_UCustomDataB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomDataB), 1316144333U) },
		{ Z_Construct_UClass_UCustomDataC, UCustomDataC::StaticClass, TEXT("UCustomDataC"), &Z_Registration_Info_UClass_UCustomDataC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomDataC), 2194376213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomCustomDataChildClasses_h_1562996055(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomCustomDataChildClasses_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Private_Tests_Classes_RoomCustomDataChildClasses_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

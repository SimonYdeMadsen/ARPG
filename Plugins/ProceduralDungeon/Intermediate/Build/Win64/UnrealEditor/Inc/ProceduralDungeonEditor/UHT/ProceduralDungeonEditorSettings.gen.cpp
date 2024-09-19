// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeonEditor/Private/ProceduralDungeonEditorSettings.h"
#include "ProceduralDungeonEditor/Private/ProceduralDungeonEdTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeonEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomData_NoRegister();
PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UProceduralDungeonEditorSettings();
PROCEDURALDUNGEONEDITOR_API UClass* Z_Construct_UClass_UProceduralDungeonEditorSettings_NoRegister();
PROCEDURALDUNGEONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMargin3D();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeonEditor();
// End Cross Module References

// Begin Class UProceduralDungeonEditorSettings
void UProceduralDungeonEditorSettings::StaticRegisterNativesUProceduralDungeonEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralDungeonEditorSettings);
UClass* Z_Construct_UClass_UProceduralDungeonEditorSettings_NoRegister()
{
	return UProceduralDungeonEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralDungeonEditorSettings.h" },
		{ "ModuleRelativePath", "Private/ProceduralDungeonEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRoomDataClass_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The default RoomData class to use in the class picker when creating a new RoomData asset.\n" },
#endif
		{ "ModuleRelativePath", "Private/ProceduralDungeonEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default RoomData class to use in the class picker when creating a new RoomData asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultIfNoChild_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The class picker will not show if the default RoomData class has no child classes\n" },
#endif
		{ "DisplayName", "Use Automatically Default Class If No Child" },
		{ "ModuleRelativePath", "Private/ProceduralDungeonEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class picker will not show if the default RoomData class has no child classes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMargins_MetaData[] = {
		{ "Category", "Room Editor Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default margin values on each axis to update volumes in Room Editor mode.\n" },
#endif
		{ "ModuleRelativePath", "Private/ProceduralDungeonEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default margin values on each axis to update volumes in Room Editor mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRoomAsOrbitPivot_MetaData[] = {
		{ "Category", "Room Editor Mode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When ticked the orbit rotation of the camera will use the room bounds center as pivot point\n// instead of the current selected actor when the Room Editor Mode is active.\n// (Works only when \"Orbit Camera Around Selection\" is ticked in your Editor Preferences)\n" },
#endif
		{ "DisplayName", "Use the room bounds center as pivot for camera orbit" },
		{ "ModuleRelativePath", "Private/ProceduralDungeonEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When ticked the orbit rotation of the camera will use the room bounds center as pivot point\ninstead of the current selected actor when the Room Editor Mode is active.\n(Works only when \"Orbit Camera Around Selection\" is ticked in your Editor Preferences)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultRoomDataClass;
	static void NewProp_bUseDefaultIfNoChild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultIfNoChild;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMargins;
	static void NewProp_bUseRoomAsOrbitPivot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRoomAsOrbitPivot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralDungeonEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_DefaultRoomDataClass = { "DefaultRoomDataClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonEditorSettings, DefaultRoomDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRoomDataClass_MetaData), NewProp_DefaultRoomDataClass_MetaData) };
void Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild_SetBit(void* Obj)
{
	((UProceduralDungeonEditorSettings*)Obj)->bUseDefaultIfNoChild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild = { "bUseDefaultIfNoChild", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonEditorSettings), &Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultIfNoChild_MetaData), NewProp_bUseDefaultIfNoChild_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_DefaultMargins = { "DefaultMargins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonEditorSettings, DefaultMargins), Z_Construct_UScriptStruct_FMargin3D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMargins_MetaData), NewProp_DefaultMargins_MetaData) }; // 321781792
void Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseRoomAsOrbitPivot_SetBit(void* Obj)
{
	((UProceduralDungeonEditorSettings*)Obj)->bUseRoomAsOrbitPivot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseRoomAsOrbitPivot = { "bUseRoomAsOrbitPivot", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonEditorSettings), &Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseRoomAsOrbitPivot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRoomAsOrbitPivot_MetaData), NewProp_bUseRoomAsOrbitPivot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_DefaultRoomDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseDefaultIfNoChild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_DefaultMargins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::NewProp_bUseRoomAsOrbitPivot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeonEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::ClassParams = {
	&UProceduralDungeonEditorSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProceduralDungeonEditorSettings()
{
	if (!Z_Registration_Info_UClass_UProceduralDungeonEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralDungeonEditorSettings.OuterSingleton, Z_Construct_UClass_UProceduralDungeonEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProceduralDungeonEditorSettings.OuterSingleton;
}
template<> PROCEDURALDUNGEONEDITOR_API UClass* StaticClass<UProceduralDungeonEditorSettings>()
{
	return UProceduralDungeonEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralDungeonEditorSettings);
UProceduralDungeonEditorSettings::~UProceduralDungeonEditorSettings() {}
// End Class UProceduralDungeonEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_ProceduralDungeonEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralDungeonEditorSettings, UProceduralDungeonEditorSettings::StaticClass, TEXT("UProceduralDungeonEditorSettings"), &Z_Registration_Info_UClass_UProceduralDungeonEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralDungeonEditorSettings), 3515329228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_ProceduralDungeonEditorSettings_h_2797058249(TEXT("/Script/ProceduralDungeonEditor"),
	Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_ProceduralDungeonEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeonEditor_Private_ProceduralDungeonEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

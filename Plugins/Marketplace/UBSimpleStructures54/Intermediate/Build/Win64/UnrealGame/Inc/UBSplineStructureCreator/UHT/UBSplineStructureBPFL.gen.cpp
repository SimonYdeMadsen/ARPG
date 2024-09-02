// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UBSplineStructureCreator/Public/UBSplineStructureBPFL.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUBSplineStructureBPFL() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
UBSPLINESTRUCTURECREATOR_API UClass* Z_Construct_UClass_UUBSplineStructureBPFL();
UBSPLINESTRUCTURECREATOR_API UClass* Z_Construct_UClass_UUBSplineStructureBPFL_NoRegister();
UPackage* Z_Construct_UPackage__Script_UBSplineStructureCreator();
// End Cross Module References

// Begin Class UUBSplineStructureBPFL Function GetLandscapeHeightScale
struct Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics
{
	struct UBSplineStructureBPFL_eventGetLandscapeHeightScale_Parms
	{
		ALandscape* Landscape;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UB Spline" },
		{ "ModuleRelativePath", "Public/UBSplineStructureBPFL.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSplineStructureBPFL_eventGetLandscapeHeightScale_Parms, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSplineStructureBPFL_eventGetLandscapeHeightScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUBSplineStructureBPFL, nullptr, "GetLandscapeHeightScale", nullptr, nullptr, Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::UBSplineStructureBPFL_eventGetLandscapeHeightScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::UBSplineStructureBPFL_eventGetLandscapeHeightScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUBSplineStructureBPFL::execGetLandscapeHeightScale)
{
	P_GET_OBJECT(ALandscape,Z_Param_Landscape);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UUBSplineStructureBPFL::GetLandscapeHeightScale(Z_Param_Landscape);
	P_NATIVE_END;
}
// End Class UUBSplineStructureBPFL Function GetLandscapeHeightScale

// Begin Class UUBSplineStructureBPFL Function LockActor
struct Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics
{
	struct UBSplineStructureBPFL_eventLockActor_Parms
	{
		AActor* ActorToLock;
		bool bLockStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UB Spline" },
		{ "ModuleRelativePath", "Public/UBSplineStructureBPFL.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToLock;
	static void NewProp_bLockStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::NewProp_ActorToLock = { "ActorToLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSplineStructureBPFL_eventLockActor_Parms, ActorToLock), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::NewProp_bLockStatus_SetBit(void* Obj)
{
	((UBSplineStructureBPFL_eventLockActor_Parms*)Obj)->bLockStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::NewProp_bLockStatus = { "bLockStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBSplineStructureBPFL_eventLockActor_Parms), &Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::NewProp_bLockStatus_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::NewProp_ActorToLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::NewProp_bLockStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUBSplineStructureBPFL, nullptr, "LockActor", nullptr, nullptr, Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::UBSplineStructureBPFL_eventLockActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::UBSplineStructureBPFL_eventLockActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUBSplineStructureBPFL::execLockActor)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToLock);
	P_GET_UBOOL(Z_Param_bLockStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUBSplineStructureBPFL::LockActor(Z_Param_ActorToLock,Z_Param_bLockStatus);
	P_NATIVE_END;
}
// End Class UUBSplineStructureBPFL Function LockActor

// Begin Class UUBSplineStructureBPFL Function MergeStaticMeshes
struct Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics
{
	struct UBSplineStructureBPFL_eventMergeStaticMeshes_Parms
	{
		AActor* ActorToMerge;
		bool UseNanite;
		bool CombineBuilding;
		FString AssetPath;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UB Spline" },
		{ "ModuleRelativePath", "Public/UBSplineStructureBPFL.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToMerge;
	static void NewProp_UseNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseNanite;
	static void NewProp_CombineBuilding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CombineBuilding;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_ActorToMerge = { "ActorToMerge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSplineStructureBPFL_eventMergeStaticMeshes_Parms, ActorToMerge), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_UseNanite_SetBit(void* Obj)
{
	((UBSplineStructureBPFL_eventMergeStaticMeshes_Parms*)Obj)->UseNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_UseNanite = { "UseNanite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBSplineStructureBPFL_eventMergeStaticMeshes_Parms), &Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_UseNanite_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_CombineBuilding_SetBit(void* Obj)
{
	((UBSplineStructureBPFL_eventMergeStaticMeshes_Parms*)Obj)->CombineBuilding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_CombineBuilding = { "CombineBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBSplineStructureBPFL_eventMergeStaticMeshes_Parms), &Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_CombineBuilding_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSplineStructureBPFL_eventMergeStaticMeshes_Parms, AssetPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSplineStructureBPFL_eventMergeStaticMeshes_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_ActorToMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_UseNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_CombineBuilding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUBSplineStructureBPFL, nullptr, "MergeStaticMeshes", nullptr, nullptr, Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::UBSplineStructureBPFL_eventMergeStaticMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::UBSplineStructureBPFL_eventMergeStaticMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUBSplineStructureBPFL::execMergeStaticMeshes)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToMerge);
	P_GET_UBOOL(Z_Param_UseNanite);
	P_GET_UBOOL(Z_Param_CombineBuilding);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UUBSplineStructureBPFL::MergeStaticMeshes(Z_Param_ActorToMerge,Z_Param_UseNanite,Z_Param_CombineBuilding,Z_Param_AssetPath);
	P_NATIVE_END;
}
// End Class UUBSplineStructureBPFL Function MergeStaticMeshes

// Begin Class UUBSplineStructureBPFL Function RerunConstructionScript
struct Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics
{
	struct UBSplineStructureBPFL_eventRerunConstructionScript_Parms
	{
		AActor* ActorToConstruct;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UB Spline" },
		{ "ModuleRelativePath", "Public/UBSplineStructureBPFL.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToConstruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::NewProp_ActorToConstruct = { "ActorToConstruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSplineStructureBPFL_eventRerunConstructionScript_Parms, ActorToConstruct), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::NewProp_ActorToConstruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUBSplineStructureBPFL, nullptr, "RerunConstructionScript", nullptr, nullptr, Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::UBSplineStructureBPFL_eventRerunConstructionScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::UBSplineStructureBPFL_eventRerunConstructionScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUBSplineStructureBPFL::execRerunConstructionScript)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToConstruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	UUBSplineStructureBPFL::RerunConstructionScript(Z_Param_ActorToConstruct);
	P_NATIVE_END;
}
// End Class UUBSplineStructureBPFL Function RerunConstructionScript

// Begin Class UUBSplineStructureBPFL
void UUBSplineStructureBPFL::StaticRegisterNativesUUBSplineStructureBPFL()
{
	UClass* Class = UUBSplineStructureBPFL::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLandscapeHeightScale", &UUBSplineStructureBPFL::execGetLandscapeHeightScale },
		{ "LockActor", &UUBSplineStructureBPFL::execLockActor },
		{ "MergeStaticMeshes", &UUBSplineStructureBPFL::execMergeStaticMeshes },
		{ "RerunConstructionScript", &UUBSplineStructureBPFL::execRerunConstructionScript },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUBSplineStructureBPFL);
UClass* Z_Construct_UClass_UUBSplineStructureBPFL_NoRegister()
{
	return UUBSplineStructureBPFL::StaticClass();
}
struct Z_Construct_UClass_UUBSplineStructureBPFL_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UBSplineStructureBPFL.h" },
		{ "ModuleRelativePath", "Public/UBSplineStructureBPFL.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUBSplineStructureBPFL_GetLandscapeHeightScale, "GetLandscapeHeightScale" }, // 99445140
		{ &Z_Construct_UFunction_UUBSplineStructureBPFL_LockActor, "LockActor" }, // 3998625793
		{ &Z_Construct_UFunction_UUBSplineStructureBPFL_MergeStaticMeshes, "MergeStaticMeshes" }, // 3360176058
		{ &Z_Construct_UFunction_UUBSplineStructureBPFL_RerunConstructionScript, "RerunConstructionScript" }, // 2843204045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUBSplineStructureBPFL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUBSplineStructureBPFL_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UBSplineStructureCreator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUBSplineStructureBPFL_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUBSplineStructureBPFL_Statics::ClassParams = {
	&UUBSplineStructureBPFL::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUBSplineStructureBPFL_Statics::Class_MetaDataParams), Z_Construct_UClass_UUBSplineStructureBPFL_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUBSplineStructureBPFL()
{
	if (!Z_Registration_Info_UClass_UUBSplineStructureBPFL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUBSplineStructureBPFL.OuterSingleton, Z_Construct_UClass_UUBSplineStructureBPFL_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUBSplineStructureBPFL.OuterSingleton;
}
template<> UBSPLINESTRUCTURECREATOR_API UClass* StaticClass<UUBSplineStructureBPFL>()
{
	return UUBSplineStructureBPFL::StaticClass();
}
UUBSplineStructureBPFL::UUBSplineStructureBPFL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUBSplineStructureBPFL);
UUBSplineStructureBPFL::~UUBSplineStructureBPFL() {}
// End Class UUBSplineStructureBPFL

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUBSplineStructureBPFL, UUBSplineStructureBPFL::StaticClass, TEXT("UUBSplineStructureBPFL"), &Z_Registration_Info_UClass_UUBSplineStructureBPFL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUBSplineStructureBPFL), 1259537985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_2642963756(TEXT("/Script/UBSplineStructureCreator"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

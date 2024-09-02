// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UBSplineStructureBPFL.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ALandscape;
class UObject;
#ifdef UBSPLINESTRUCTURECREATOR_UBSplineStructureBPFL_generated_h
#error "UBSplineStructureBPFL.generated.h already included, missing '#pragma once' in UBSplineStructureBPFL.h"
#endif
#define UBSPLINESTRUCTURECREATOR_UBSplineStructureBPFL_generated_h

#define FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLandscapeHeightScale); \
	DECLARE_FUNCTION(execRerunConstructionScript); \
	DECLARE_FUNCTION(execLockActor); \
	DECLARE_FUNCTION(execMergeStaticMeshes);


#define FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUBSplineStructureBPFL(); \
	friend struct Z_Construct_UClass_UUBSplineStructureBPFL_Statics; \
public: \
	DECLARE_CLASS(UUBSplineStructureBPFL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UBSplineStructureCreator"), NO_API) \
	DECLARE_SERIALIZER(UUBSplineStructureBPFL)


#define FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUBSplineStructureBPFL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUBSplineStructureBPFL(UUBSplineStructureBPFL&&); \
	UUBSplineStructureBPFL(const UUBSplineStructureBPFL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUBSplineStructureBPFL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUBSplineStructureBPFL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUBSplineStructureBPFL) \
	NO_API virtual ~UUBSplineStructureBPFL();


#define FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_14_PROLOG
#define FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UBSPLINESTRUCTURECREATOR_API UClass* StaticClass<class UUBSplineStructureBPFL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UBSplineStructureCreator_Source_UBSplineStructureCreator_Public_UBSplineStructureBPFL_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReplicableObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURALDUNGEON_ReplicableObject_generated_h
#error "ReplicableObject.generated.h already included, missing '#pragma once' in ReplicableObject.h"
#endif
#define PROCEDURALDUNGEON_ReplicableObject_generated_h

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execWakeUpOwnerActor);


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicableObject(); \
	friend struct Z_Construct_UClass_UReplicableObject_Statics; \
public: \
	DECLARE_CLASS(UReplicableObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(UReplicableObject)


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UReplicableObject(UReplicableObject&&); \
	UReplicableObject(const UReplicableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicableObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicableObject) \
	NO_API virtual ~UReplicableObject();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_52_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_55_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class UReplicableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ReplicableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

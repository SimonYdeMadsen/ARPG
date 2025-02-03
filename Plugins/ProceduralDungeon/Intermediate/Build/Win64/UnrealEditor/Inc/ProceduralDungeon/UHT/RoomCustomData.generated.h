// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomCustomData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURALDUNGEON_RoomCustomData_generated_h
#error "RoomCustomData.generated.h already included, missing '#pragma once' in RoomCustomData.h"
#endif
#define PROCEDURALDUNGEON_RoomCustomData_generated_h

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomCustomData(); \
	friend struct Z_Construct_UClass_URoomCustomData_Statics; \
public: \
	DECLARE_CLASS(URoomCustomData, UReplicableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(URoomCustomData)


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoomCustomData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URoomCustomData(URoomCustomData&&); \
	URoomCustomData(const URoomCustomData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomCustomData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomCustomData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoomCustomData) \
	NO_API virtual ~URoomCustomData();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_34_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_37_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoomCustomData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomCustomData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

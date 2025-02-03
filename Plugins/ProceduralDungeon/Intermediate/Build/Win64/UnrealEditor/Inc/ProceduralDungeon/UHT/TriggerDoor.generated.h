// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROCEDURALDUNGEON_TriggerDoor_generated_h
#error "TriggerDoor.generated.h already included, missing '#pragma once' in TriggerDoor.h"
#endif
#define PROCEDURALDUNGEON_TriggerDoor_generated_h

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsValidActor_Implementation(AActor* Actor, UPrimitiveComponent* Component); \
	DECLARE_FUNCTION(execIsValidActor); \
	DECLARE_FUNCTION(execOnTriggerExit); \
	DECLARE_FUNCTION(execOnTriggerEnter);


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_34_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerDoor(); \
	friend struct Z_Construct_UClass_ATriggerDoor_Statics; \
public: \
	DECLARE_CLASS(ATriggerDoor, ADoor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ATriggerDoor)


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATriggerDoor(ATriggerDoor&&); \
	ATriggerDoor(const ATriggerDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerDoor) \
	NO_API virtual ~ATriggerDoor();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_31_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_34_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_34_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class ATriggerDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_TriggerDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

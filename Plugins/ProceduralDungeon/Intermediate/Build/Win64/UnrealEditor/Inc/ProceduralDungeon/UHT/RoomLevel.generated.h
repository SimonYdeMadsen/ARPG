// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomLevel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ARoomLevel;
class UPrimitiveComponent;
class URoom;
struct FHitResult;
#ifdef PROCEDURALDUNGEON_RoomLevel_generated_h
#error "RoomLevel.generated.h already included, missing '#pragma once' in RoomLevel.h"
#endif
#define PROCEDURALDUNGEON_RoomLevel_generated_h

<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_33_DELEGATE \
PROCEDURALDUNGEON_API void FRoomLevelVisibilityEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomLevelVisibilityEvent, ARoomLevel* RoomLevel, bool IsVisible);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_34_DELEGATE \
PROCEDURALDUNGEON_API void FRoomLevelActorEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomLevelActorEvent, ARoomLevel* RoomLevel, AActor* Actor);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_33_DELEGATE \
PROCEDURALDUNGEON_API void FRoomLevelVisibilityEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomLevelVisibilityEvent, ARoomLevel* RoomLevel, bool IsVisible);


#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_34_DELEGATE \
PROCEDURALDUNGEON_API void FRoomLevelActorEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomLevelActorEvent, ARoomLevel* RoomLevel, AActor* Actor);


#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> Stashed changes
	DECLARE_FUNCTION(execGetBoundsExtent); \
	DECLARE_FUNCTION(execGetBoundsCenter); \
	DECLARE_FUNCTION(execOnTriggerEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBeginOverlap); \
	DECLARE_FUNCTION(execGetRoom); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsPlayerInside);


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_INCLASS_NO_PURE_DECLS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_INCLASS_NO_PURE_DECLS \
>>>>>>> Stashed changes
private: \
	static void StaticRegisterNativesARoomLevel(); \
	friend struct Z_Construct_UClass_ARoomLevel_Statics; \
public: \
	DECLARE_CLASS(ARoomLevel, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ARoomLevel)


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARoomLevel(ARoomLevel&&); \
	ARoomLevel(const ARoomLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoomLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoomLevel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoomLevel) \
	NO_API virtual ~ARoomLevel();


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_42_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_42_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h_45_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class ARoomLevel>();

#undef CURRENT_FILE_ID
<<<<<<< Updated upstream
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h
=======
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomLevel_h
>>>>>>> Stashed changes


PRAGMA_ENABLE_DEPRECATION_WARNINGS

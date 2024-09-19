// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StaticRoomObserverComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ARoomLevel;
#ifdef PROCEDURALDUNGEON_StaticRoomObserverComponent_generated_h
#error "StaticRoomObserverComponent.generated.h already included, missing '#pragma once' in StaticRoomObserverComponent.h"
#endif
#define PROCEDURALDUNGEON_StaticRoomObserverComponent_generated_h

#define FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_31_DELEGATE \
PROCEDURALDUNGEON_API void FStaticRoomObserverEvent_DelegateWrapper(const FMulticastScriptDelegate& StaticRoomObserverEvent, ARoomLevel* RoomLevel, AActor* Actor);


#define FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorExitRoom); \
	DECLARE_FUNCTION(execOnActorEnterRoom);


#define FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticRoomObserverComponent(); \
	friend struct Z_Construct_UClass_UStaticRoomObserverComponent_Statics; \
public: \
	DECLARE_CLASS(UStaticRoomObserverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(UStaticRoomObserverComponent)


#define FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStaticRoomObserverComponent(UStaticRoomObserverComponent&&); \
	UStaticRoomObserverComponent(const UStaticRoomObserverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticRoomObserverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticRoomObserverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStaticRoomObserverComponent) \
	NO_API virtual ~UStaticRoomObserverComponent();


#define FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_36_PROLOG
#define FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_39_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class UStaticRoomObserverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_OneDrive_Documents_GitHub_SecondTopDown_5_4_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

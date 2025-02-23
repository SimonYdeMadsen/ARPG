// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RoomObserverComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ARoomLevel;
#ifdef PROCEDURALDUNGEON_RoomObserverComponent_generated_h
#error "RoomObserverComponent.generated.h already included, missing '#pragma once' in RoomObserverComponent.h"
#endif
#define PROCEDURALDUNGEON_RoomObserverComponent_generated_h

#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_32_DELEGATE \
PROCEDURALDUNGEON_API void FRoomObserverEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomObserverEvent, ARoomLevel* RoomLevel, AActor* Actor);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnActorExitRoom); \
	DECLARE_FUNCTION(execOnActorEnterRoom);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomObserverComponent(); \
	friend struct Z_Construct_UClass_URoomObserverComponent_Statics; \
public: \
	DECLARE_CLASS(URoomObserverComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(URoomObserverComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URoomObserverComponent*>(this); }


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URoomObserverComponent(URoomObserverComponent&&); \
	URoomObserverComponent(const URoomObserverComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomObserverComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomObserverComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoomObserverComponent) \
	NO_API virtual ~URoomObserverComponent();


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_37_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_40_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoomObserverComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_RoomObserverComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

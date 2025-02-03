// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StaticRoomVisibilityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ARoomLevel;
enum class EVisibilityMode : uint8;
#ifdef PROCEDURALDUNGEON_StaticRoomVisibilityComponent_generated_h
#error "StaticRoomVisibilityComponent.generated.h already included, missing '#pragma once' in StaticRoomVisibilityComponent.h"
#endif
#define PROCEDURALDUNGEON_StaticRoomVisibilityComponent_generated_h

<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_32_DELEGATE \
PROCEDURALDUNGEON_API void FRoomVisibilityEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomVisibilityEvent, AActor* Actor, bool IsInVisibleRoom);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_32_DELEGATE \
PROCEDURALDUNGEON_API void FRoomVisibilityEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomVisibilityEvent, AActor* Actor, bool IsInVisibleRoom);


#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> Stashed changes
	DECLARE_FUNCTION(execRoomVisibilityChanged); \
	DECLARE_FUNCTION(execGetVisibilityMode); \
	DECLARE_FUNCTION(execSetVisibilityMode); \
	DECLARE_FUNCTION(execIsVisible);


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_INCLASS_NO_PURE_DECLS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_INCLASS_NO_PURE_DECLS \
>>>>>>> Stashed changes
private: \
	static void StaticRegisterNativesUStaticRoomVisibilityComponent(); \
	friend struct Z_Construct_UClass_UStaticRoomVisibilityComponent_Statics; \
public: \
	DECLARE_CLASS(UStaticRoomVisibilityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(UStaticRoomVisibilityComponent)


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStaticRoomVisibilityComponent(UStaticRoomVisibilityComponent&&); \
	UStaticRoomVisibilityComponent(const UStaticRoomVisibilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticRoomVisibilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticRoomVisibilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStaticRoomVisibilityComponent) \
	NO_API virtual ~UStaticRoomVisibilityComponent();


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_34_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_34_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h_37_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class UStaticRoomVisibilityComponent>();

#undef CURRENT_FILE_ID
<<<<<<< Updated upstream
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h
=======
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomVisibilityComponent_h
>>>>>>> Stashed changes


PRAGMA_ENABLE_DEPRECATION_WARNINGS

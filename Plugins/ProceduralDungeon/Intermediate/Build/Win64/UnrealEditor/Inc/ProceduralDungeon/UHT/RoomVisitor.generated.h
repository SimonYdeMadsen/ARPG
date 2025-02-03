// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomVisitor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARoomLevel;
#ifdef PROCEDURALDUNGEON_RoomVisitor_generated_h
#error "RoomVisitor.generated.h already included, missing '#pragma once' in RoomVisitor.h"
#endif
#define PROCEDURALDUNGEON_RoomVisitor_generated_h

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRoomExit_Implementation(ARoomLevel* RoomLevel) {}; \
	virtual void OnRoomEnter_Implementation(ARoomLevel* RoomLevel) {}; \
	DECLARE_FUNCTION(execOnRoomExit); \
	DECLARE_FUNCTION(execOnRoomEnter);


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROCEDURALDUNGEON_API URoomVisitor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URoomVisitor(URoomVisitor&&); \
	URoomVisitor(const URoomVisitor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROCEDURALDUNGEON_API, URoomVisitor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomVisitor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoomVisitor) \
	PROCEDURALDUNGEON_API virtual ~URoomVisitor();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURoomVisitor(); \
	friend struct Z_Construct_UClass_URoomVisitor_Statics; \
public: \
	DECLARE_CLASS(URoomVisitor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), PROCEDURALDUNGEON_API) \
	DECLARE_SERIALIZER(URoomVisitor)


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRoomVisitor() {} \
public: \
	typedef URoomVisitor UClassType; \
	typedef IRoomVisitor ThisClass; \
	static void Execute_OnRoomEnter(UObject* O, ARoomLevel* RoomLevel); \
	static void Execute_OnRoomExit(UObject* O, ARoomLevel* RoomLevel); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_34_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoomVisitor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

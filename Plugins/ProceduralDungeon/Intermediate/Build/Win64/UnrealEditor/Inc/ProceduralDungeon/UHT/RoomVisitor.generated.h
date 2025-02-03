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

<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> Stashed changes
	virtual void OnRoomExit_Implementation(ARoomLevel* RoomLevel) {}; \
	virtual void OnRoomEnter_Implementation(ARoomLevel* RoomLevel) {}; \
	DECLARE_FUNCTION(execOnRoomExit); \
	DECLARE_FUNCTION(execOnRoomEnter);


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_CALLBACK_WRAPPERS
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_CALLBACK_WRAPPERS
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
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


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_GENERATED_UINTERFACE_BODY() \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_GENERATED_UINTERFACE_BODY() \
>>>>>>> Stashed changes
private: \
	static void StaticRegisterNativesURoomVisitor(); \
	friend struct Z_Construct_UClass_URoomVisitor_Statics; \
public: \
	DECLARE_CLASS(URoomVisitor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), PROCEDURALDUNGEON_API) \
	DECLARE_SERIALIZER(URoomVisitor)


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_GENERATED_UINTERFACE_BODY() \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_GENERATED_UINTERFACE_BODY() \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
>>>>>>> Stashed changes
protected: \
	virtual ~IRoomVisitor() {} \
public: \
	typedef URoomVisitor UClassType; \
	typedef IRoomVisitor ThisClass; \
	static void Execute_OnRoomEnter(UObject* O, ARoomLevel* RoomLevel); \
	static void Execute_OnRoomExit(UObject* O, ARoomLevel* RoomLevel); \
	virtual UObject* _getUObject() const { return nullptr; }


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_34_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_34_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
>>>>>>> Stashed changes
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoomVisitor>();

#undef CURRENT_FILE_ID
<<<<<<< Updated upstream
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h
=======
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h
>>>>>>> Stashed changes


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IReadOnlyRoom;
class URoomData;
struct FDoorDef;
#ifdef PROCEDURALDUNGEON_DungeonGenerator_generated_h
#error "DungeonGenerator.generated.h already included, missing '#pragma once' in DungeonGenerator.h"
#endif
#define PROCEDURALDUNGEON_DungeonGenerator_generated_h

#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ContinueToAddRoom_Implementation(); \
	virtual bool IsValidDungeon_Implementation(); \
	virtual URoomData* ChooseNextRoomData_Implementation(const URoomData* CurrentRoom, TScriptInterface<IReadOnlyRoom> const& CurrentRoomInstance, FDoorDef const& DoorData, int32& DoorIndex); \
	virtual URoomData* ChooseFirstRoomData_Implementation(); \
	DECLARE_FUNCTION(execDiscardRoom); \
	DECLARE_FUNCTION(execGetNbRoom); \
	DECLARE_FUNCTION(execCountTotalRoomType); \
	DECLARE_FUNCTION(execCountRoomType); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomTypeFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomType); \
	DECLARE_FUNCTION(execCountTotalRoomData); \
	DECLARE_FUNCTION(execCountRoomData); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomDataFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomData); \
	DECLARE_FUNCTION(execContinueToAddRoom); \
	DECLARE_FUNCTION(execIsValidDungeon); \
	DECLARE_FUNCTION(execChooseNextRoomData); \
	DECLARE_FUNCTION(execChooseFirstRoomData);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_38_CALLBACK_WRAPPERS
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonGenerator(); \
	friend struct Z_Construct_UClass_ADungeonGenerator_Statics; \
public: \
	DECLARE_CLASS(ADungeonGenerator, ADungeonGeneratorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ADungeonGenerator)


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonGenerator(ADungeonGenerator&&); \
	ADungeonGenerator(const ADungeonGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonGenerator) \
	NO_API virtual ~ADungeonGenerator();


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_35_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_38_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_38_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class ADungeonGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

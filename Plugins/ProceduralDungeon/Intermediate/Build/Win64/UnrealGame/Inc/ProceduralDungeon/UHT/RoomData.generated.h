// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoomData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDungeonGraph;
class URoom;
struct FDoorDef;
#ifdef PROCEDURALDUNGEON_RoomData_generated_h
#error "RoomData.generated.h already included, missing '#pragma once' in RoomData.h"
#endif
#define PROCEDURALDUNGEON_RoomData_generated_h

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CleanupRoom_Implementation(URoom* Room, UDungeonGraph* Dungeon) const; \
	virtual void InitializeRoom_Implementation(URoom* Room, UDungeonGraph* Dungeon) const; \
	DECLARE_FUNCTION(execCleanupRoom); \
	DECLARE_FUNCTION(execInitializeRoom); \
	DECLARE_FUNCTION(execHasCompatibleDoor); \
	DECLARE_FUNCTION(execGetNbDoor);


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_51_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoomData(); \
	friend struct Z_Construct_UClass_URoomData_Statics; \
public: \
	DECLARE_CLASS(URoomData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(URoomData)


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URoomData(URoomData&&); \
	URoomData(const URoomData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoomData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoomData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoomData) \
	NO_API virtual ~URoomData();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_48_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_51_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_51_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoomData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
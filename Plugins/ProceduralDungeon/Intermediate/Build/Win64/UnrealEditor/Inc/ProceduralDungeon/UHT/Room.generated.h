// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Room.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADoor;
class URoom;
class URoomCustomData;
class URoomData;
struct FRandomStream;
#ifdef PROCEDURALDUNGEON_Room_generated_h
#error "Room.generated.h already included, missing '#pragma once' in Room.h"
#endif
#define PROCEDURALDUNGEON_Room_generated_h

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoomConnection_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<struct FRoomConnection>();

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomDataPair_Statics; \
	PROCEDURALDUNGEON_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALDUNGEON_API UScriptStruct* StaticStruct<struct FCustomDataPair>();

#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnInstanceLoaded); \
	DECLARE_FUNCTION(execOnRep_IsLocked); \
	DECLARE_FUNCTION(execGetBoundsExtent); \
	DECLARE_FUNCTION(execGetBoundsCenter); \
	DECLARE_FUNCTION(execGetAllConnectedRooms); \
	DECLARE_FUNCTION(execGetConnectedRoomAt); \
	DECLARE_FUNCTION(execAreAllDoorsConnected); \
	DECLARE_FUNCTION(execIsDoorConnected); \
	DECLARE_FUNCTION(execGetAllDoors); \
	DECLARE_FUNCTION(execGetDoor); \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execHasCustomData_BP); \
	DECLARE_FUNCTION(execGetCustomData_BP); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsPlayerInside); \
	DECLARE_FUNCTION(execGetRoomData);


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoom(); \
	friend struct Z_Construct_UClass_URoom_Statics; \
public: \
	DECLARE_CLASS(URoom, UReplicableObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(URoom) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Position=NETFIELD_REP_START, \
		Direction, \
		RoomData, \
		CustomData, \
		Connections, \
		GeneratorOwner, \
		Id, \
		bIsLocked, \
		NETFIELD_REP_END=bIsLocked	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URoom) \
public:


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URoom(URoom&&); \
	URoom(const URoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoom); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoom) \
	NO_API virtual ~URoom();


#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_66_PROLOG
#define FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_69_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class URoom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Room_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
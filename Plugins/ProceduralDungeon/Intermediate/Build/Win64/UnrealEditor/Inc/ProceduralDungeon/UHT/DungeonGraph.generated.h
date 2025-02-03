// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URoom;
class URoomCustomData;
class URoomData;
#ifdef PROCEDURALDUNGEON_DungeonGraph_generated_h
#error "DungeonGraph.generated.h already included, missing '#pragma once' in DungeonGraph.h"
#endif
#define PROCEDURALDUNGEON_DungeonGraph_generated_h

<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> Stashed changes
	DECLARE_FUNCTION(execOnRep_Rooms); \
	DECLARE_FUNCTION(execGetPathBetween); \
	DECLARE_FUNCTION(execNumberOfRoomBetween); \
	DECLARE_FUNCTION(execHasValidPath); \
	DECLARE_FUNCTION(execCountTotalRoomType); \
	DECLARE_FUNCTION(execCountRoomType); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomTypeFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomType); \
	DECLARE_FUNCTION(execCountTotalRoomData); \
	DECLARE_FUNCTION(execCountRoomData); \
	DECLARE_FUNCTION(execHasAlreadyOneRoomDataFrom); \
	DECLARE_FUNCTION(execHasAlreadyRoomData); \
	DECLARE_FUNCTION(execCount); \
	DECLARE_FUNCTION(execGetRandomRoom); \
	DECLARE_FUNCTION(execGetAllRoomsWithAnyCustomData); \
	DECLARE_FUNCTION(execGetAllRoomsWithAllCustomData); \
	DECLARE_FUNCTION(execGetAllRoomsWithCustomData); \
	DECLARE_FUNCTION(execGetFirstRoomFromData); \
	DECLARE_FUNCTION(execGetAllRoomsFromDataList); \
	DECLARE_FUNCTION(execGetAllRoomsFromData); \
	DECLARE_FUNCTION(execGetAllRooms);


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_INCLASS_NO_PURE_DECLS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_INCLASS_NO_PURE_DECLS \
>>>>>>> Stashed changes
private: \
	static void StaticRegisterNativesUDungeonGraph(); \
	friend struct Z_Construct_UClass_UDungeonGraph_Statics; \
public: \
	DECLARE_CLASS(UDungeonGraph, UReplicableObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(UDungeonGraph) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedRooms=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedRooms	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UDungeonGraph) \
public:


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonGraph(UDungeonGraph&&); \
	UDungeonGraph(const UDungeonGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonGraph) \
	NO_API virtual ~UDungeonGraph();


<<<<<<< Updated upstream
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_47_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_ENHANCED_CONSTRUCTORS \
=======
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_47_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h_50_ENHANCED_CONSTRUCTORS \
>>>>>>> Stashed changes
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class UDungeonGraph>();

#undef CURRENT_FILE_ID
<<<<<<< Updated upstream
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h
=======
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_5_5_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGraph_h
>>>>>>> Stashed changes


#define FOREACH_ENUM_EDUNGEONGRAPHSTATE(op) \
	op(EDungeonGraphState::None) \
	op(EDungeonGraphState::RoomListChanged) \
	op(EDungeonGraphState::RequestGeneration) \
	op(EDungeonGraphState::NbState) 

enum class EDungeonGraphState : uint8;
template<> struct TIsUEnumClass<EDungeonGraphState> { enum { Value = true }; };
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EDungeonGraphState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

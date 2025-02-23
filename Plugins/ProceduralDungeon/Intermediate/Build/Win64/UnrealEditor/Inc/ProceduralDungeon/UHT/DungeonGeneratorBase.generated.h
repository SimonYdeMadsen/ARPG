// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonGeneratorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADoor;
class APawn;
class IReadOnlyRoom;
class UDoorType;
class UDungeonGraph;
class URoom;
class URoomData;
class URoomData; 
class UWorld;
struct FDoorDef;
struct FRandomStream;
#ifdef PROCEDURALDUNGEON_DungeonGeneratorBase_generated_h
#error "DungeonGeneratorBase.generated.h already included, missing '#pragma once' in DungeonGeneratorBase.h"
#endif
#define PROCEDURALDUNGEON_DungeonGeneratorBase_generated_h

#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_36_DELEGATE \
PROCEDURALDUNGEON_API void FGenerationEvent_DelegateWrapper(const FMulticastScriptDelegate& GenerationEvent);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_37_DELEGATE \
PROCEDURALDUNGEON_API void FRoomEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomEvent, const URoomData* Room, TScriptInterface<IReadOnlyRoom> const& RoomInstance);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_38_DELEGATE \
PROCEDURALDUNGEON_API void FRoomDoorEvent_DelegateWrapper(const FMulticastScriptDelegate& RoomDoorEvent, const URoomData* Room, FDoorDef const& Door);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CreateDungeon_Implementation(); \
	virtual void OnFailedToAddRoom_Implementation(const URoomData* FromRoom, FDoorDef const& FromDoor); \
	virtual void OnRoomAdded_Implementation(const URoomData* NewRoom, TScriptInterface<IReadOnlyRoom> const& RoomInstance); \
	virtual void OnGenerationFailed_Implementation(); \
	virtual void OnGenerationInit_Implementation(); \
	virtual void OnPostGeneration_Implementation(); \
	virtual void OnPreGeneration_Implementation(); \
	virtual APawn* GetVisibilityPawn_Implementation(); \
	virtual void InitializeDungeon_Implementation(const UDungeonGraph* Rooms); \
	virtual TSubclassOf<ADoor> ChooseDoor_Implementation(const URoomData* CurrentRoom, const URoomData* NextRoom, const UDoorType* DoorType, bool& Flipped); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execAddRoomToDungeon); \
	DECLARE_FUNCTION(execTryPlaceRoom); \
	DECLARE_FUNCTION(execCreateRoomInstance); \
	DECLARE_FUNCTION(execFinalizeDungeon); \
	DECLARE_FUNCTION(execStartNewDungeon); \
	DECLARE_FUNCTION(execCreateDungeon); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetRandomStream); \
	DECLARE_FUNCTION(execGetCompatibleRoomData); \
	DECLARE_FUNCTION(execGetRandomRoomDataWeighted); \
	DECLARE_FUNCTION(execGetRandomRoomData); \
	DECLARE_FUNCTION(execOnFailedToAddRoom); \
	DECLARE_FUNCTION(execOnRoomAdded); \
	DECLARE_FUNCTION(execOnGenerationFailed); \
	DECLARE_FUNCTION(execOnGenerationInit); \
	DECLARE_FUNCTION(execOnPostGeneration); \
	DECLARE_FUNCTION(execOnPreGeneration); \
	DECLARE_FUNCTION(execGetVisibilityPawn); \
	DECLARE_FUNCTION(execInitializeDungeon); \
	DECLARE_FUNCTION(execChooseDoor); \
	DECLARE_FUNCTION(execUnload); \
	DECLARE_FUNCTION(execGenerate);


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_57_CALLBACK_WRAPPERS
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonGeneratorBase(); \
	friend struct Z_Construct_UClass_ADungeonGeneratorBase_Statics; \
public: \
	DECLARE_CLASS(ADungeonGeneratorBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralDungeon"), NO_API) \
	DECLARE_SERIALIZER(ADungeonGeneratorBase) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Seed=NETFIELD_REP_START, \
		Generation, \
		NETFIELD_REP_END=Generation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonGeneratorBase(ADungeonGeneratorBase&&); \
	ADungeonGeneratorBase(const ADungeonGeneratorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonGeneratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonGeneratorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADungeonGeneratorBase) \
	NO_API virtual ~ADungeonGeneratorBase();


#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_54_PROLOG
#define FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_57_CALLBACK_WRAPPERS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_57_INCLASS_NO_PURE_DECLS \
	FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALDUNGEON_API UClass* StaticClass<class ADungeonGeneratorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonGeneratorBase_h


#define FOREACH_ENUM_EGENERATIONRESULT(op) \
	op(EGenerationResult::None) \
	op(EGenerationResult::Error) \
	op(EGenerationResult::Success) 

enum class EGenerationResult : uint8;
template<> struct TIsUEnumClass<EGenerationResult> { enum { Value = true }; };
template<> PROCEDURALDUNGEON_API UEnum* StaticEnum<EGenerationResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeon_init() {}
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_ActorTriggerArrayEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_ActorTriggerEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature();
	PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProceduralDungeon;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProceduralDungeon()
	{
		if (!Z_Registration_Info_UPackage__Script_ProceduralDungeon.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_ActorTriggerArrayEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_ActorTriggerEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_GenerationEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_RoomDoorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_RoomEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelActorEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_RoomLevelVisibilityEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_RoomObserverEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_RoomVisibilityEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProceduralDungeon",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x39105678,
				0xAE6E2670,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProceduralDungeon.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProceduralDungeon.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProceduralDungeon(Z_Construct_UPackage__Script_ProceduralDungeon, TEXT("/Script/ProceduralDungeon"), Z_Registration_Info_UPackage__Script_ProceduralDungeon, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x39105678, 0xAE6E2670));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

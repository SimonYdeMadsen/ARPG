// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/Components/StaticRoomObserverComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticRoomObserverComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UStaticRoomObserverComponent();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UStaticRoomObserverComponent_NoRegister();
PROCEDURALDUNGEON_API UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Delegate FStaticRoomObserverEvent
struct Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics
{
	struct _Script_ProceduralDungeon_eventStaticRoomObserverEvent_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StaticRoomObserverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventStaticRoomObserverEvent_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProceduralDungeon_eventStaticRoomObserverEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProceduralDungeon, nullptr, "StaticRoomObserverEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventStaticRoomObserverEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::_Script_ProceduralDungeon_eventStaticRoomObserverEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStaticRoomObserverEvent_DelegateWrapper(const FMulticastScriptDelegate& StaticRoomObserverEvent, ARoomLevel* RoomLevel, AActor* Actor)
{
	struct _Script_ProceduralDungeon_eventStaticRoomObserverEvent_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Actor;
	};
	_Script_ProceduralDungeon_eventStaticRoomObserverEvent_Parms Parms;
	Parms.RoomLevel=RoomLevel;
	Parms.Actor=Actor;
	StaticRoomObserverEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FStaticRoomObserverEvent

// Begin Class UStaticRoomObserverComponent Function OnActorEnterRoom
struct Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics
{
	struct StaticRoomObserverComponent_eventOnActorEnterRoom_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Visitor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StaticRoomObserverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Visitor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticRoomObserverComponent_eventOnActorEnterRoom_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::NewProp_Visitor = { "Visitor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticRoomObserverComponent_eventOnActorEnterRoom_Parms, Visitor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::NewProp_Visitor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticRoomObserverComponent, nullptr, "OnActorEnterRoom", nullptr, nullptr, Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::StaticRoomObserverComponent_eventOnActorEnterRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::StaticRoomObserverComponent_eventOnActorEnterRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticRoomObserverComponent::execOnActorEnterRoom)
{
	P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
	P_GET_OBJECT(AActor,Z_Param_Visitor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorEnterRoom(Z_Param_RoomLevel,Z_Param_Visitor);
	P_NATIVE_END;
}
// End Class UStaticRoomObserverComponent Function OnActorEnterRoom

// Begin Class UStaticRoomObserverComponent Function OnActorExitRoom
struct Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics
{
	struct StaticRoomObserverComponent_eventOnActorExitRoom_Parms
	{
		ARoomLevel* RoomLevel;
		AActor* Visitor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/StaticRoomObserverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Visitor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticRoomObserverComponent_eventOnActorExitRoom_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::NewProp_Visitor = { "Visitor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StaticRoomObserverComponent_eventOnActorExitRoom_Parms, Visitor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::NewProp_RoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::NewProp_Visitor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticRoomObserverComponent, nullptr, "OnActorExitRoom", nullptr, nullptr, Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::StaticRoomObserverComponent_eventOnActorExitRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::StaticRoomObserverComponent_eventOnActorExitRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStaticRoomObserverComponent::execOnActorExitRoom)
{
	P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
	P_GET_OBJECT(AActor,Z_Param_Visitor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorExitRoom(Z_Param_RoomLevel,Z_Param_Visitor);
	P_NATIVE_END;
}
// End Class UStaticRoomObserverComponent Function OnActorExitRoom

// Begin Class UStaticRoomObserverComponent
void UStaticRoomObserverComponent::StaticRegisterNativesUStaticRoomObserverComponent()
{
	UClass* Class = UStaticRoomObserverComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnActorEnterRoom", &UStaticRoomObserverComponent::execOnActorEnterRoom },
		{ "OnActorExitRoom", &UStaticRoomObserverComponent::execOnActorExitRoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticRoomObserverComponent);
UClass* Z_Construct_UClass_UStaticRoomObserverComponent_NoRegister()
{
	return UStaticRoomObserverComponent::StaticClass();
}
struct Z_Construct_UClass_UStaticRoomObserverComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ProceduralDungeon" },
		{ "Comment", "// Room Observer that auto-(un)bind itself at BeginPlay and EndPlay.\n// This component will bind to the level it belongs to. So it needs to be placed directly in the Room map.\n// This component does **not** track its own Room, thus the actor should not move between rooms (use RoomObserverComponent instead).\n" },
		{ "IncludePath", "Components/StaticRoomObserverComponent.h" },
		{ "ModuleRelativePath", "Public/Components/StaticRoomObserverComponent.h" },
		{ "ToolTip", "Room Observer that auto-(un)bind itself at BeginPlay and EndPlay.\nThis component will bind to the level it belongs to. So it needs to be placed directly in the Room map.\nThis component does **not** track its own Room, thus the actor should not move between rooms (use RoomObserverComponent instead)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorEnterRoomEvent_MetaData[] = {
		{ "Category", "Room Observer" },
		{ "DisplayName", "On Actor Enter Room" },
		{ "ModuleRelativePath", "Public/Components/StaticRoomObserverComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorExitRoomEvent_MetaData[] = {
		{ "Category", "Room Observer" },
		{ "DisplayName", "On Actor Exit Room" },
		{ "ModuleRelativePath", "Public/Components/StaticRoomObserverComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActorEnterRoomEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActorExitRoomEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorEnterRoom, "OnActorEnterRoom" }, // 4105186912
		{ &Z_Construct_UFunction_UStaticRoomObserverComponent_OnActorExitRoom, "OnActorExitRoom" }, // 3658553109
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticRoomObserverComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStaticRoomObserverComponent_Statics::NewProp_ActorEnterRoomEvent = { "ActorEnterRoomEvent", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticRoomObserverComponent, ActorEnterRoomEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorEnterRoomEvent_MetaData), NewProp_ActorEnterRoomEvent_MetaData) }; // 3159703974
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStaticRoomObserverComponent_Statics::NewProp_ActorExitRoomEvent = { "ActorExitRoomEvent", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticRoomObserverComponent, ActorExitRoomEvent), Z_Construct_UDelegateFunction_ProceduralDungeon_StaticRoomObserverEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorExitRoomEvent_MetaData), NewProp_ActorExitRoomEvent_MetaData) }; // 3159703974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticRoomObserverComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticRoomObserverComponent_Statics::NewProp_ActorEnterRoomEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticRoomObserverComponent_Statics::NewProp_ActorExitRoomEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticRoomObserverComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStaticRoomObserverComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticRoomObserverComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticRoomObserverComponent_Statics::ClassParams = {
	&UStaticRoomObserverComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStaticRoomObserverComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStaticRoomObserverComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticRoomObserverComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaticRoomObserverComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaticRoomObserverComponent()
{
	if (!Z_Registration_Info_UClass_UStaticRoomObserverComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticRoomObserverComponent.OuterSingleton, Z_Construct_UClass_UStaticRoomObserverComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaticRoomObserverComponent.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UStaticRoomObserverComponent>()
{
	return UStaticRoomObserverComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticRoomObserverComponent);
UStaticRoomObserverComponent::~UStaticRoomObserverComponent() {}
// End Class UStaticRoomObserverComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaticRoomObserverComponent, UStaticRoomObserverComponent::StaticClass, TEXT("UStaticRoomObserverComponent"), &Z_Registration_Info_UClass_UStaticRoomObserverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticRoomObserverComponent), 881538894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_2850515163(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_Components_StaticRoomObserverComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

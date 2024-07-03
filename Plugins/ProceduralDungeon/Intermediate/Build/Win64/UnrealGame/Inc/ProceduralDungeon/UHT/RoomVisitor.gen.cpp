// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/RoomVisitor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomVisitor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ARoomLevel_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomVisitor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Interface URoomVisitor Function OnRoomEnter
struct RoomVisitor_eventOnRoomEnter_Parms
{
	ARoomLevel* RoomLevel;
};
void IRoomVisitor::OnRoomEnter(ARoomLevel* RoomLevel)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRoomEnter instead.");
}
static FName NAME_URoomVisitor_OnRoomEnter = FName(TEXT("OnRoomEnter"));
void IRoomVisitor::Execute_OnRoomEnter(UObject* O, ARoomLevel* RoomLevel)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URoomVisitor::StaticClass()));
	RoomVisitor_eventOnRoomEnter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URoomVisitor_OnRoomEnter);
	if (Func)
	{
		Parms.RoomLevel=RoomLevel;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRoomVisitor*)(O->GetNativeInterfaceAddress(URoomVisitor::StaticClass())))
	{
		I->OnRoomEnter_Implementation(RoomLevel);
	}
}
struct Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Visitor" },
		{ "Comment", "// This function is called when the actor enters a dungeon room.\n// @param RoomLevel The room level blueprint this actor has entered. You can use the Room accessor from here.\n" },
		{ "ModuleRelativePath", "Public/RoomVisitor.h" },
		{ "ToolTip", "This function is called when the actor enters a dungeon room.\n@param RoomLevel The room level blueprint this actor has entered. You can use the Room accessor from here." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomVisitor_eventOnRoomEnter_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::NewProp_RoomLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomVisitor, nullptr, "OnRoomEnter", nullptr, nullptr, Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::PropPointers), sizeof(RoomVisitor_eventOnRoomEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(RoomVisitor_eventOnRoomEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomVisitor_OnRoomEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomVisitor_OnRoomEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRoomVisitor::execOnRoomEnter)
{
	P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomEnter_Implementation(Z_Param_RoomLevel);
	P_NATIVE_END;
}
// End Interface URoomVisitor Function OnRoomEnter

// Begin Interface URoomVisitor Function OnRoomExit
struct RoomVisitor_eventOnRoomExit_Parms
{
	ARoomLevel* RoomLevel;
};
void IRoomVisitor::OnRoomExit(ARoomLevel* RoomLevel)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRoomExit instead.");
}
static FName NAME_URoomVisitor_OnRoomExit = FName(TEXT("OnRoomExit"));
void IRoomVisitor::Execute_OnRoomExit(UObject* O, ARoomLevel* RoomLevel)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(URoomVisitor::StaticClass()));
	RoomVisitor_eventOnRoomExit_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_URoomVisitor_OnRoomExit);
	if (Func)
	{
		Parms.RoomLevel=RoomLevel;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IRoomVisitor*)(O->GetNativeInterfaceAddress(URoomVisitor::StaticClass())))
	{
		I->OnRoomExit_Implementation(RoomLevel);
	}
}
struct Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Room Visitor" },
		{ "Comment", "// This function is called when the actor exits a dungeon room.\n// @param RoomLevel The room level blueprint this actor has exited. You can use the Room accessor from here.\n" },
		{ "ModuleRelativePath", "Public/RoomVisitor.h" },
		{ "ToolTip", "This function is called when the actor exits a dungeon room.\n@param RoomLevel The room level blueprint this actor has exited. You can use the Room accessor from here." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RoomVisitor_eventOnRoomExit_Parms, RoomLevel), Z_Construct_UClass_ARoomLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::NewProp_RoomLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoomVisitor, nullptr, "OnRoomExit", nullptr, nullptr, Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::PropPointers), sizeof(RoomVisitor_eventOnRoomExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(RoomVisitor_eventOnRoomExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoomVisitor_OnRoomExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URoomVisitor_OnRoomExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IRoomVisitor::execOnRoomExit)
{
	P_GET_OBJECT(ARoomLevel,Z_Param_RoomLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomExit_Implementation(Z_Param_RoomLevel);
	P_NATIVE_END;
}
// End Interface URoomVisitor Function OnRoomExit

// Begin Interface URoomVisitor
void URoomVisitor::StaticRegisterNativesURoomVisitor()
{
	UClass* Class = URoomVisitor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRoomEnter", &IRoomVisitor::execOnRoomEnter },
		{ "OnRoomExit", &IRoomVisitor::execOnRoomExit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoomVisitor);
UClass* Z_Construct_UClass_URoomVisitor_NoRegister()
{
	return URoomVisitor::StaticClass();
}
struct Z_Construct_UClass_URoomVisitor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoomVisitor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoomVisitor_OnRoomEnter, "OnRoomEnter" }, // 3577754884
		{ &Z_Construct_UFunction_URoomVisitor_OnRoomExit, "OnRoomExit" }, // 2012539264
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRoomVisitor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URoomVisitor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisitor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomVisitor_Statics::ClassParams = {
	&URoomVisitor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URoomVisitor_Statics::Class_MetaDataParams), Z_Construct_UClass_URoomVisitor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URoomVisitor()
{
	if (!Z_Registration_Info_UClass_URoomVisitor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomVisitor.OuterSingleton, Z_Construct_UClass_URoomVisitor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URoomVisitor.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<URoomVisitor>()
{
	return URoomVisitor::StaticClass();
}
URoomVisitor::URoomVisitor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URoomVisitor);
URoomVisitor::~URoomVisitor() {}
// End Interface URoomVisitor

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoomVisitor, URoomVisitor::StaticClass, TEXT("URoomVisitor"), &Z_Registration_Info_UClass_URoomVisitor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomVisitor), 654307368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_1498438010(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_RoomVisitor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

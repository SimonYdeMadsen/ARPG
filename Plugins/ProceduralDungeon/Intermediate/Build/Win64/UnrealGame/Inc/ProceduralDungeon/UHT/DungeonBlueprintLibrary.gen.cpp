// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/DungeonBlueprintLibrary.h"
#include "ProceduralDungeon/Public/RoomCustomData.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_ADoor_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDoorType_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonBlueprintLibrary();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UDungeonBlueprintLibrary_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoom_NoRegister();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_URoomCustomData_NoRegister();
PROCEDURALDUNGEON_API UEnum* Z_Construct_UEnum_ProceduralDungeon_EDoorDirection();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Class UDungeonBlueprintLibrary Function CompareDataTableRows
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics
{
	struct DungeonBlueprintLibrary_eventCompareDataTableRows_Parms
	{
		FDataTableRowHandle A;
		FDataTableRowHandle B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Data Table Row Handle)" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventCompareDataTableRows_Parms, A), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventCompareDataTableRows_Parms, B), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 1360917958
void Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventCompareDataTableRows_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventCompareDataTableRows_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "CompareDataTableRows", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::DungeonBlueprintLibrary_eventCompareDataTableRows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::DungeonBlueprintLibrary_eventCompareDataTableRows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execCompareDataTableRows)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_A);
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::CompareDataTableRows(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function CompareDataTableRows

// Begin Class UDungeonBlueprintLibrary Function DoorDirection_Add
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Add_Parms
	{
		EDoorDirection A;
		EDoorDirection B;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A,B" },
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Addition (A + B)\n" },
#endif
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "Direction + Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Addition (A + B)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Add_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 687843478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Add_Parms, B), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 687843478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Add_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Add", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::DungeonBlueprintLibrary_eventDoorDirection_Add_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::DungeonBlueprintLibrary_eventDoorDirection_Add_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Add)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Add((EDoorDirection&)(Z_Param_Out_A),(EDoorDirection&)(Z_Param_Out_B));
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function DoorDirection_Add

// Begin Class UDungeonBlueprintLibrary Function DoorDirection_Decrement
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms
	{
		EDoorDirection A;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Decrement the direction and set it\n" },
#endif
		{ "CompactNodeTitle", "--" },
		{ "DisplayName", "Decrement Door Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decrement the direction and set it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Decrement", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::DungeonBlueprintLibrary_eventDoorDirection_Decrement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Decrement)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Decrement((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function DoorDirection_Decrement

// Begin Class UDungeonBlueprintLibrary Function DoorDirection_Increment
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms
	{
		EDoorDirection A;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increment the direction and set it\n" },
#endif
		{ "CompactNodeTitle", "++" },
		{ "DisplayName", "Increment Door Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increment the direction and set it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Increment", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::DungeonBlueprintLibrary_eventDoorDirection_Increment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Increment)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Increment((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function DoorDirection_Increment

// Begin Class UDungeonBlueprintLibrary Function DoorDirection_Negate
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms
	{
		EDoorDirection A;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Negate the direction and set it (same as North - Direction)\n" },
#endif
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "Negate Door Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Negate the direction and set it (same as North - Direction)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Negate", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::DungeonBlueprintLibrary_eventDoorDirection_Negate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Negate)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Negate((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function DoorDirection_Negate

// Begin Class UDungeonBlueprintLibrary Function DoorDirection_Opposite
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms
	{
		EDoorDirection A;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A" },
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transforms North into South and East into West (and vice versa)\n" },
#endif
		{ "CompactNodeTitle", "Opposite" },
		{ "DisplayName", "Opposite" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transforms North into South and East into West (and vice versa)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 687843478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Opposite", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::DungeonBlueprintLibrary_eventDoorDirection_Opposite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Opposite)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Opposite((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function DoorDirection_Opposite

// Begin Class UDungeonBlueprintLibrary Function DoorDirection_Sub
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms
	{
		EDoorDirection A;
		EDoorDirection B;
		EDoorDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "A,B" },
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Subtraction (A - B)\n" },
#endif
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "Direction - Direction" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subtraction (A - B)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 687843478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms, B), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 687843478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms, ReturnValue), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(0, nullptr) }; // 687843478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Sub", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::DungeonBlueprintLibrary_eventDoorDirection_Sub_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Sub)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDoorDirection*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Sub((EDoorDirection&)(Z_Param_Out_A),(EDoorDirection&)(Z_Param_Out_B));
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function DoorDirection_Sub

// Begin Class UDungeonBlueprintLibrary Function DoorDirection_Valid
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics
{
	struct DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms
	{
		EDoorDirection A;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Door Direction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if the value is set (either North, South, East, West)\n// False otherwise\n" },
#endif
		{ "DisplayName", "Is Valid" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the value is set (either North, South, East, West)\nFalse otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_A;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms, A), Z_Construct_UEnum_ProceduralDungeon_EDoorDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 687843478
void Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "DoorDirection_Valid", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::DungeonBlueprintLibrary_eventDoorDirection_Valid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execDoorDirection_Valid)
{
	P_GET_ENUM_REF(EDoorDirection,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::DoorDirection_Valid((EDoorDirection&)(Z_Param_Out_A));
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function DoorDirection_Valid

// Begin Class UDungeonBlueprintLibrary Function GetOwningRoom
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics
{
	struct DungeonBlueprintLibrary_eventGetOwningRoom_Parms
	{
		const AActor* Target;
		URoom* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the room instance the actor is in.\n// If the actor is spawned at runtime or the owning level is not a room level, returns null.\n" },
#endif
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the room instance the actor is in.\nIf the actor is spawned at runtime or the owning level is not a room level, returns null." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoom_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoom_Parms, ReturnValue), Z_Construct_UClass_URoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "GetOwningRoom", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::DungeonBlueprintLibrary_eventGetOwningRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::DungeonBlueprintLibrary_eventGetOwningRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execGetOwningRoom)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoom**)Z_Param__Result=UDungeonBlueprintLibrary::GetOwningRoom(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function GetOwningRoom

// Begin Class UDungeonBlueprintLibrary Function GetOwningRoomCustomData
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics
{
	struct DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms
	{
		const AActor* Target;
		TSubclassOf<URoomCustomData> CustomDataClass;
		URoomCustomData* CustomData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Procedural Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the first RoomCustomData of the provided type in the owning room.\n// If no owning room or no custom data of this type, returns null.\n" },
#endif
		{ "DefaultToSelf", "Target" },
		{ "DeterminesOutputType", "CustomDataClass" },
		{ "DynamicOutputParam", "CustomData" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the first RoomCustomData of the provided type in the owning room.\nIf no owning room or no custom data of this type, returns null." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomDataClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_CustomDataClass = { "CustomDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms, CustomDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms, CustomData), Z_Construct_UClass_URoomCustomData_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_CustomDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_CustomData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "GetOwningRoomCustomData", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::DungeonBlueprintLibrary_eventGetOwningRoomCustomData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execGetOwningRoomCustomData)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_OBJECT(UClass,Z_Param_CustomDataClass);
	P_GET_OBJECT_REF(URoomCustomData,Z_Param_Out_CustomData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::GetOwningRoomCustomData(Z_Param_Target,Z_Param_CustomDataClass,P_ARG_GC_BARRIER(Z_Param_Out_CustomData));
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function GetOwningRoomCustomData

// Begin Class UDungeonBlueprintLibrary Function IsDoorOfType
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics
{
	struct DungeonBlueprintLibrary_eventIsDoorOfType_Parms
	{
		const TSubclassOf<ADoor> DoorClass;
		const UDoorType* DoorType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Procedural Dungeon" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DoorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorClass = { "DoorClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIsDoorOfType_Parms, DoorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorClass_MetaData), NewProp_DoorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventIsDoorOfType_Parms, DoorType), Z_Construct_UClass_UDoorType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorType_MetaData), NewProp_DoorType_MetaData) };
void Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventIsDoorOfType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventIsDoorOfType_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_DoorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "IsDoorOfType", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::DungeonBlueprintLibrary_eventIsDoorOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::DungeonBlueprintLibrary_eventIsDoorOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execIsDoorOfType)
{
	P_GET_OBJECT(UClass,Z_Param_DoorClass);
	P_GET_OBJECT(UDoorType,Z_Param_DoorType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::IsDoorOfType(Z_Param_DoorClass,Z_Param_DoorType);
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function IsDoorOfType

// Begin Class UDungeonBlueprintLibrary Function Settings_DefaultDoorSize
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_DefaultDoorSize_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the default door type's size\n" },
#endif
		{ "DisplayName", "Get Default Door Size" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the default door type's size" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_DefaultDoorSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_DefaultDoorSize", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::DungeonBlueprintLibrary_eventSettings_DefaultDoorSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::DungeonBlueprintLibrary_eventSettings_DefaultDoorSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_DefaultDoorSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_DefaultDoorSize();
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function Settings_DefaultDoorSize

// Begin Class UDungeonBlueprintLibrary Function Settings_DoorOffset
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_DoorOffset_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the room offset as a percentage of the height of a room unit\n" },
#endif
		{ "DisplayName", "Get Door Offset" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the room offset as a percentage of the height of a room unit" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_DoorOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_DoorOffset", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::DungeonBlueprintLibrary_eventSettings_DoorOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::DungeonBlueprintLibrary_eventSettings_DoorOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_DoorOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_DoorOffset();
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function Settings_DoorOffset

// Begin Class UDungeonBlueprintLibrary Function Settings_OccludeDynamicActors
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if actors with a RoomVisibility component should have their visibility toggled with the rooms\n" },
#endif
		{ "DisplayName", "Should Dynamic Actors Be Occluded" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if actors with a RoomVisibility component should have their visibility toggled with the rooms" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_OccludeDynamicActors", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::DungeonBlueprintLibrary_eventSettings_OccludeDynamicActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_OccludeDynamicActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_OccludeDynamicActors();
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function Settings_OccludeDynamicActors

// Begin Class UDungeonBlueprintLibrary Function Settings_OcclusionCulling
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the plugin's occlusion system is enabled\n" },
#endif
		{ "DisplayName", "Is Occlusion Culling Enabled" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the plugin's occlusion system is enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_OcclusionCulling", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::DungeonBlueprintLibrary_eventSettings_OcclusionCulling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_OcclusionCulling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_OcclusionCulling();
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function Settings_OcclusionCulling

// Begin Class UDungeonBlueprintLibrary Function Settings_OcclusionDistance
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_OcclusionDistance_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of visible room from the player's room (1 mean only the player room is visible)\n" },
#endif
		{ "DisplayName", "Get Occlusion Culling Distance" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of visible room from the player's room (1 mean only the player room is visible)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_OcclusionDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_OcclusionDistance", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::DungeonBlueprintLibrary_eventSettings_OcclusionDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::DungeonBlueprintLibrary_eventSettings_OcclusionDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_OcclusionDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_OcclusionDistance();
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function Settings_OcclusionDistance

// Begin Class UDungeonBlueprintLibrary Function Settings_RoomUnit
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_RoomUnit_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the room unit size in unreal units\n" },
#endif
		{ "DisplayName", "Get Room Unit" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the room unit size in unreal units" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_RoomUnit_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_RoomUnit", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::DungeonBlueprintLibrary_eventSettings_RoomUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::DungeonBlueprintLibrary_eventSettings_RoomUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_RoomUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UDungeonBlueprintLibrary::Settings_RoomUnit();
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function Settings_RoomUnit

// Begin Class UDungeonBlueprintLibrary Function Settings_SetOcclusionCulling
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms
	{
		bool Enable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable/disable the plugin's occlusion system\n" },
#endif
		{ "DisplayName", "Enable Occlusion Culling" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/disable the plugin's occlusion system" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_SetOcclusionCulling", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::DungeonBlueprintLibrary_eventSettings_SetOcclusionCulling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_SetOcclusionCulling)
{
	P_GET_UBOOL(Z_Param_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonBlueprintLibrary::Settings_SetOcclusionCulling(Z_Param_Enable);
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function Settings_SetOcclusionCulling

// Begin Class UDungeonBlueprintLibrary Function Settings_SetOcclusionDistance
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics
{
	struct DungeonBlueprintLibrary_eventSettings_SetOcclusionDistance_Parms
	{
		int32 Distance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Procedural Dungeon|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the number of visible rooms from the player's room (1 mean only the player room is visible)\n" },
#endif
		{ "DisplayName", "Set Occlusion Culling Distance" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the number of visible rooms from the player's room (1 mean only the player room is visible)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSettings_SetOcclusionDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Settings_SetOcclusionDistance", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::DungeonBlueprintLibrary_eventSettings_SetOcclusionDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::DungeonBlueprintLibrary_eventSettings_SetOcclusionDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSettings_SetOcclusionDistance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonBlueprintLibrary::Settings_SetOcclusionDistance(Z_Param_Distance);
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function Settings_SetOcclusionDistance

// Begin Class UDungeonBlueprintLibrary Function Spectate
struct Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics
{
	struct DungeonBlueprintLibrary_eventSpectate_Parms
	{
		APlayerController* Controller;
		bool DestroyPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set player to spectate\n" },
#endif
		{ "CPP_Default_DestroyPawn", "true" },
		{ "DefaultToSelf", "Controller" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set player to spectate" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static void NewProp_DestroyPawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBlueprintLibrary_eventSpectate_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn_SetBit(void* Obj)
{
	((DungeonBlueprintLibrary_eventSpectate_Parms*)Obj)->DestroyPawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn = { "DestroyPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBlueprintLibrary_eventSpectate_Parms), &Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::NewProp_DestroyPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBlueprintLibrary, nullptr, "Spectate", nullptr, nullptr, Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::DungeonBlueprintLibrary_eventSpectate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::DungeonBlueprintLibrary_eventSpectate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBlueprintLibrary::execSpectate)
{
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_GET_UBOOL(Z_Param_DestroyPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	UDungeonBlueprintLibrary::Spectate(Z_Param_Controller,Z_Param_DestroyPawn);
	P_NATIVE_END;
}
// End Class UDungeonBlueprintLibrary Function Spectate

// Begin Class UDungeonBlueprintLibrary
void UDungeonBlueprintLibrary::StaticRegisterNativesUDungeonBlueprintLibrary()
{
	UClass* Class = UDungeonBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompareDataTableRows", &UDungeonBlueprintLibrary::execCompareDataTableRows },
		{ "DoorDirection_Add", &UDungeonBlueprintLibrary::execDoorDirection_Add },
		{ "DoorDirection_Decrement", &UDungeonBlueprintLibrary::execDoorDirection_Decrement },
		{ "DoorDirection_Increment", &UDungeonBlueprintLibrary::execDoorDirection_Increment },
		{ "DoorDirection_Negate", &UDungeonBlueprintLibrary::execDoorDirection_Negate },
		{ "DoorDirection_Opposite", &UDungeonBlueprintLibrary::execDoorDirection_Opposite },
		{ "DoorDirection_Sub", &UDungeonBlueprintLibrary::execDoorDirection_Sub },
		{ "DoorDirection_Valid", &UDungeonBlueprintLibrary::execDoorDirection_Valid },
		{ "GetOwningRoom", &UDungeonBlueprintLibrary::execGetOwningRoom },
		{ "GetOwningRoomCustomData", &UDungeonBlueprintLibrary::execGetOwningRoomCustomData },
		{ "IsDoorOfType", &UDungeonBlueprintLibrary::execIsDoorOfType },
		{ "Settings_DefaultDoorSize", &UDungeonBlueprintLibrary::execSettings_DefaultDoorSize },
		{ "Settings_DoorOffset", &UDungeonBlueprintLibrary::execSettings_DoorOffset },
		{ "Settings_OccludeDynamicActors", &UDungeonBlueprintLibrary::execSettings_OccludeDynamicActors },
		{ "Settings_OcclusionCulling", &UDungeonBlueprintLibrary::execSettings_OcclusionCulling },
		{ "Settings_OcclusionDistance", &UDungeonBlueprintLibrary::execSettings_OcclusionDistance },
		{ "Settings_RoomUnit", &UDungeonBlueprintLibrary::execSettings_RoomUnit },
		{ "Settings_SetOcclusionCulling", &UDungeonBlueprintLibrary::execSettings_SetOcclusionCulling },
		{ "Settings_SetOcclusionDistance", &UDungeonBlueprintLibrary::execSettings_SetOcclusionDistance },
		{ "Spectate", &UDungeonBlueprintLibrary::execSpectate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonBlueprintLibrary);
UClass* Z_Construct_UClass_UDungeonBlueprintLibrary_NoRegister()
{
	return UDungeonBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UDungeonBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DungeonBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DungeonBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_CompareDataTableRows, "CompareDataTableRows" }, // 1698588697
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Add, "DoorDirection_Add" }, // 2530733014
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Decrement, "DoorDirection_Decrement" }, // 1846651023
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Increment, "DoorDirection_Increment" }, // 164865553
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Negate, "DoorDirection_Negate" }, // 95214931
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Opposite, "DoorDirection_Opposite" }, // 757569933
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Sub, "DoorDirection_Sub" }, // 255502739
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_DoorDirection_Valid, "DoorDirection_Valid" }, // 119151302
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoom, "GetOwningRoom" }, // 794719910
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_GetOwningRoomCustomData, "GetOwningRoomCustomData" }, // 1410920744
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_IsDoorOfType, "IsDoorOfType" }, // 4210210093
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DefaultDoorSize, "Settings_DefaultDoorSize" }, // 3099797002
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_DoorOffset, "Settings_DoorOffset" }, // 2986817957
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OccludeDynamicActors, "Settings_OccludeDynamicActors" }, // 2018643107
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionCulling, "Settings_OcclusionCulling" }, // 2096209389
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_OcclusionDistance, "Settings_OcclusionDistance" }, // 1418568832
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_RoomUnit, "Settings_RoomUnit" }, // 4209713251
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionCulling, "Settings_SetOcclusionCulling" }, // 2857207652
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Settings_SetOcclusionDistance, "Settings_SetOcclusionDistance" }, // 1784821214
		{ &Z_Construct_UFunction_UDungeonBlueprintLibrary_Spectate, "Spectate" }, // 3047675139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::ClassParams = {
	&UDungeonBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UDungeonBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDungeonBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonBlueprintLibrary.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UDungeonBlueprintLibrary>()
{
	return UDungeonBlueprintLibrary::StaticClass();
}
UDungeonBlueprintLibrary::UDungeonBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonBlueprintLibrary);
UDungeonBlueprintLibrary::~UDungeonBlueprintLibrary() {}
// End Class UDungeonBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonBlueprintLibrary, UDungeonBlueprintLibrary::StaticClass, TEXT("UDungeonBlueprintLibrary"), &Z_Registration_Info_UClass_UDungeonBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonBlueprintLibrary), 1842867093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_543725828(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_DungeonBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralDungeon/Public/ProceduralDungeonSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralDungeonSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UProceduralDungeonSettings();
PROCEDURALDUNGEON_API UClass* Z_Construct_UClass_UProceduralDungeonSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProceduralDungeon();
// End Cross Module References

// Begin Class UProceduralDungeonSettings
void UProceduralDungeonSettings::StaticRegisterNativesUProceduralDungeonSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralDungeonSettings);
UClass* Z_Construct_UClass_UProceduralDungeonSettings_NoRegister()
{
	return UProceduralDungeonSettings::StaticClass();
}
struct Z_Construct_UClass_UProceduralDungeonSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Holds the plugin's settings.\n" },
#endif
		{ "IncludePath", "ProceduralDungeonSettings.h" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the plugin's settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomUnit_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of a room unit. Room's size in data assets will express the multiple of this unit size.\n// For example a room size of (5, 10, 1) with a unit size of (100, 100, 400) will result of a real room size of (500, 1000, 400).\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of a room unit. Room's size in data assets will express the multiple of this unit size.\nFor example a room size of (5, 10, 1) with a unit size of (100, 100, 400) will result of a real room size of (500, 1000, 400)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorSize_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The bounding size of the doors. It is used only to display the door's blue box when \"Draw Debug\" is set to true.\n" },
#endif
		{ "DisplayName", "Default Door Size" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bounding size of the doors. It is used only to display the door's blue box when \"Draw Debug\" is set to true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorOffset_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The height of the door's base from the room's base (in percentage of the room unit Z)\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The height of the door's base from the room's base (in percentage of the room unit Z)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanLoop_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When true, doors will be connected as long they are at the same place.\n// When false, only the doors between the previous and the new generated room will be connected.\n// DEPRECATED: Keep it true and use the CanLoop setting in the DungeonGenerator actor instead. This project-wide setting will be removed in a future version.\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When true, doors will be connected as long they are at the same place.\nWhen false, only the doors between the previous and the new generated room will be connected.\nDEPRECATED: Keep it true and use the CanLoop setting in the DungeonGenerator actor instead. This project-wide setting will be removed in a future version." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomObjectType_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The object type used for the dungeon rooms trigger boxes.\n// Defaulted to Engine Trace Channel 6.\n// You can create new ones in your project settings under the Collision tab.\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object type used for the dungeon rooms trigger boxes.\nDefaulted to Engine Trace Channel 6.\nYou can create new ones in your project settings under the Collision tab." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGenerationTry_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of dungeon generation retry before the generator gives up.\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of dungeon generation retry before the generator gives up." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRoomPlacementTry_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The number of room placement retry on a specific door before the generator gives up and continues with the next door.\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of room placement retry on a specific door before the generator gives up and continues with the next door." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionCulling_MetaData[] = {
		{ "Category", "Occlusion Culling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The rooms visibility will be toggled off when the player is not inside it or in a room next to it.\n" },
#endif
		{ "DisplayName", "Enable Occlusion Culling" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rooms visibility will be toggled off when the player is not inside it or in a room next to it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionDistance_MetaData[] = {
		{ "Category", "Occlusion Culling" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how many connected rooms are visible from the player's room (1 means only the room where the player is).\n" },
#endif
		{ "EditCondition", "OcclusionCulling" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how many connected rooms are visible from the player's room (1 means only the room where the player is)." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccludeDynamicActors_MetaData[] = {
		{ "Category", "Occlusion Culling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keep track of dynamic actors entering and leaving the room to be able to show/hide them with the room.\n// TODO: Still useful? It was there for performance issues, but there is none anymore...\n// Maybe moving it in a console variable only for debug purpose?\n" },
#endif
		{ "EditCondition", "OcclusionCulling" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep track of dynamic actors entering and leaving the room to be able to show/hide them with the room.\nTODO: Still useful? It was there for performance issues, but there is none anymore...\nMaybe moving it in a console variable only for debug purpose?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show room and door outlines in editor and development builds\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show room and door outlines in editor and development builds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowRoomOrigin_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show the room origin in magenta\n// DEPRECATED: This setting will be removed in a future release of the plugin.\n" },
#endif
		{ "EditCondition", "DrawDebug" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show the room origin in magenta\nDEPRECATED: This setting will be removed in a future release of the plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipDoorArrowSide_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flip side the arrow that shows door facing direction.\n// True means that the arrow gets inside the room (opposite of door actor's forward).\n// False means that the arrow goes outside the room (same as door actor's forward).\n" },
#endif
		{ "EditCondition", "DrawDebug" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flip side the arrow that shows door facing direction.\nTrue means that the arrow gets inside the room (opposite of door actor's forward).\nFalse means that the arrow goes outside the room (same as door actor's forward)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorArrowLength_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Length of the door's debug arrow.\n" },
#endif
		{ "EditCondition", "DrawDebug" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of the door's debug arrow." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorArrowHeadSize_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of the door's debug arrow head.\n" },
#endif
		{ "EditCondition", "DrawDebug" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the door's debug arrow head." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScreenPrintDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show some logs on the screen\n" },
#endif
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show some logs on the screen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrintDebugDuration_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Duration of the screen logs\n" },
#endif
		{ "EditCondition", "OnScreenPrintDebug" },
		{ "ModuleRelativePath", "Public/ProceduralDungeonSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration of the screen logs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomUnit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorOffset;
	static void NewProp_CanLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanLoop;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoomObjectType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGenerationTry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRoomPlacementTry;
	static void NewProp_OcclusionCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OcclusionCulling;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OcclusionDistance;
	static void NewProp_OccludeDynamicActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OccludeDynamicActors;
	static void NewProp_DrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
	static void NewProp_ShowRoomOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowRoomOrigin;
	static void NewProp_bFlipDoorArrowSide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipDoorArrowSide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorArrowLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorArrowHeadSize;
	static void NewProp_OnScreenPrintDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnScreenPrintDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrintDebugDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralDungeonSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit = { "RoomUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, RoomUnit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomUnit_MetaData), NewProp_RoomUnit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize = { "DoorSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, DoorSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorSize_MetaData), NewProp_DoorSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset = { "DoorOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, DoorOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorOffset_MetaData), NewProp_DoorOffset_MetaData) };
void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_SetBit(void* Obj)
{
	((UProceduralDungeonSettings*)Obj)->CanLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop = { "CanLoop", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanLoop_MetaData), NewProp_CanLoop_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomObjectType = { "RoomObjectType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, RoomObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomObjectType_MetaData), NewProp_RoomObjectType_MetaData) }; // 756624936
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_MaxGenerationTry = { "MaxGenerationTry", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, MaxGenerationTry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGenerationTry_MetaData), NewProp_MaxGenerationTry_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_MaxRoomPlacementTry = { "MaxRoomPlacementTry", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, MaxRoomPlacementTry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRoomPlacementTry_MetaData), NewProp_MaxRoomPlacementTry_MetaData) };
void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_SetBit(void* Obj)
{
	((UProceduralDungeonSettings*)Obj)->OcclusionCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling = { "OcclusionCulling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionCulling_MetaData), NewProp_OcclusionCulling_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionDistance = { "OcclusionDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, OcclusionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionDistance_MetaData), NewProp_OcclusionDistance_MetaData) };
void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors_SetBit(void* Obj)
{
	((UProceduralDungeonSettings*)Obj)->OccludeDynamicActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors = { "OccludeDynamicActors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccludeDynamicActors_MetaData), NewProp_OccludeDynamicActors_MetaData) };
void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_SetBit(void* Obj)
{
	((UProceduralDungeonSettings*)Obj)->DrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebug_MetaData), NewProp_DrawDebug_MetaData) };
void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin_SetBit(void* Obj)
{
	((UProceduralDungeonSettings*)Obj)->ShowRoomOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin = { "ShowRoomOrigin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowRoomOrigin_MetaData), NewProp_ShowRoomOrigin_MetaData) };
void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_bFlipDoorArrowSide_SetBit(void* Obj)
{
	((UProceduralDungeonSettings*)Obj)->bFlipDoorArrowSide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_bFlipDoorArrowSide = { "bFlipDoorArrowSide", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_bFlipDoorArrowSide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipDoorArrowSide_MetaData), NewProp_bFlipDoorArrowSide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorArrowLength = { "DoorArrowLength", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, DoorArrowLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorArrowLength_MetaData), NewProp_DoorArrowLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorArrowHeadSize = { "DoorArrowHeadSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, DoorArrowHeadSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorArrowHeadSize_MetaData), NewProp_DoorArrowHeadSize_MetaData) };
void Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_SetBit(void* Obj)
{
	((UProceduralDungeonSettings*)Obj)->OnScreenPrintDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug = { "OnScreenPrintDebug", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UProceduralDungeonSettings), &Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScreenPrintDebug_MetaData), NewProp_OnScreenPrintDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration = { "PrintDebugDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProceduralDungeonSettings, PrintDebugDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrintDebugDuration_MetaData), NewProp_PrintDebugDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_CanLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_RoomObjectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_MaxGenerationTry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_MaxRoomPlacementTry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OcclusionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OccludeDynamicActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_ShowRoomOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_bFlipDoorArrowSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorArrowLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_DoorArrowHeadSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_OnScreenPrintDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralDungeonSettings_Statics::NewProp_PrintDebugDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProceduralDungeonSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProceduralDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralDungeonSettings_Statics::ClassParams = {
	&UProceduralDungeonSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralDungeonSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UProceduralDungeonSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProceduralDungeonSettings()
{
	if (!Z_Registration_Info_UClass_UProceduralDungeonSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralDungeonSettings.OuterSingleton, Z_Construct_UClass_UProceduralDungeonSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProceduralDungeonSettings.OuterSingleton;
}
template<> PROCEDURALDUNGEON_API UClass* StaticClass<UProceduralDungeonSettings>()
{
	return UProceduralDungeonSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralDungeonSettings);
UProceduralDungeonSettings::~UProceduralDungeonSettings() {}
// End Class UProceduralDungeonSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralDungeonSettings, UProceduralDungeonSettings::StaticClass, TEXT("UProceduralDungeonSettings"), &Z_Registration_Info_UClass_UProceduralDungeonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralDungeonSettings), 3737218545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonSettings_h_2997165878(TEXT("/Script/ProceduralDungeon"),
	Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_symig_Documents_GitHub_ARPG_Plugins_ProceduralDungeon_Source_ProceduralDungeon_Public_ProceduralDungeonSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

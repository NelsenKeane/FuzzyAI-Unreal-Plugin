// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debug/FuzzyAIDebugSnapshot.h"
#include "Core/FuzzyAITypes.h"
#include "Interpretation/FuzzyInterpretationTypes.h"
#include "Profiling/FuzzyProfileTypes.h"
#include "Utility/FuzzyUtilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIDebugSnapshot() {}

// ********** Begin Cross Module References ********************************************************
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIDecisionContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIStageResult();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFuzzyAIDebugSnapshot *********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIDebugSnapshot); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIDebugSnapshot); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Read-only diagnostic copy. Rendering and editor tabs belong in FuzzyAIEditor. */" },
#endif
		{ "ModuleRelativePath", "Public/Debug/FuzzyAIDebugSnapshot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read-only diagnostic copy. Rendering and editor tabs belong in FuzzyAIEditor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evidence_MetaData[] = {
		{ "Category", "Fuzzy AI|Debug" },
		{ "ModuleRelativePath", "Public/Debug/FuzzyAIDebugSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[] = {
		{ "Category", "Fuzzy AI|Debug" },
		{ "ModuleRelativePath", "Public/Debug/FuzzyAIDebugSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpretation_MetaData[] = {
		{ "Category", "Fuzzy AI|Debug" },
		{ "ModuleRelativePath", "Public/Debug/FuzzyAIDebugSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Decision_MetaData[] = {
		{ "Category", "Fuzzy AI|Debug" },
		{ "ModuleRelativePath", "Public/Debug/FuzzyAIDebugSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileStage_MetaData[] = {
		{ "Category", "Fuzzy AI|Debug" },
		{ "ModuleRelativePath", "Public/Debug/FuzzyAIDebugSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpretationStage_MetaData[] = {
		{ "Category", "Fuzzy AI|Debug" },
		{ "ModuleRelativePath", "Public/Debug/FuzzyAIDebugSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UtilityStage_MetaData[] = {
		{ "Category", "Fuzzy AI|Debug" },
		{ "ModuleRelativePath", "Public/Debug/FuzzyAIDebugSnapshot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionStage_MetaData[] = {
		{ "Category", "Fuzzy AI|Debug" },
		{ "ModuleRelativePath", "Public/Debug/FuzzyAIDebugSnapshot.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIDebugSnapshot constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Evidence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Interpretation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Decision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileStage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpretationStage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UtilityStage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionStage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIDebugSnapshot constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIDebugSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIDebugSnapshot;
class UScriptStruct* FFuzzyAIDebugSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIDebugSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIDebugSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIDebugSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIDebugSnapshot.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIDebugSnapshot Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_Evidence = { "Evidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDebugSnapshot, Evidence), Z_Construct_UScriptStruct_FFuzzyAIDecisionContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evidence_MetaData), NewProp_Evidence_MetaData) }; // 3105545654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDebugSnapshot, Profile), Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Profile_MetaData), NewProp_Profile_MetaData) }; // 3246492483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_Interpretation = { "Interpretation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDebugSnapshot, Interpretation), Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpretation_MetaData), NewProp_Interpretation_MetaData) }; // 3563302436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_Decision = { "Decision", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDebugSnapshot, Decision), Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Decision_MetaData), NewProp_Decision_MetaData) }; // 1587986685
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_ProfileStage = { "ProfileStage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDebugSnapshot, ProfileStage), Z_Construct_UScriptStruct_FFuzzyAIStageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileStage_MetaData), NewProp_ProfileStage_MetaData) }; // 3164831944
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_InterpretationStage = { "InterpretationStage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDebugSnapshot, InterpretationStage), Z_Construct_UScriptStruct_FFuzzyAIStageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpretationStage_MetaData), NewProp_InterpretationStage_MetaData) }; // 3164831944
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_UtilityStage = { "UtilityStage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDebugSnapshot, UtilityStage), Z_Construct_UScriptStruct_FFuzzyAIStageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UtilityStage_MetaData), NewProp_UtilityStage_MetaData) }; // 3164831944
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_ExecutionStage = { "ExecutionStage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDebugSnapshot, ExecutionStage), Z_Construct_UScriptStruct_FFuzzyAIStageResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionStage_MetaData), NewProp_ExecutionStage_MetaData) }; // 3164831944
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_Evidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_Profile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_Interpretation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_Decision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_ProfileStage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_InterpretationStage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_UtilityStage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewProp_ExecutionStage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIDebugSnapshot Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIDebugSnapshot",
	Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::PropPointers),
	sizeof(FFuzzyAIDebugSnapshot),
	alignof(FFuzzyAIDebugSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIDebugSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIDebugSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIDebugSnapshot.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIDebugSnapshot ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Debug_FuzzyAIDebugSnapshot_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIDebugSnapshot::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIDebugSnapshot_Statics::NewStructOps, TEXT("FuzzyAIDebugSnapshot"),&Z_Registration_Info_UScriptStruct_FFuzzyAIDebugSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIDebugSnapshot), 3547044081U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Debug_FuzzyAIDebugSnapshot_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Debug_FuzzyAIDebugSnapshot_h__Script_FuzzyAIRuntime_1321255345{
	TEXT("/Script/FuzzyAIRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Debug_FuzzyAIDebugSnapshot_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Debug_FuzzyAIDebugSnapshot_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Profiling/FuzzyProfileTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyProfileTypes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIProfileMetric();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFuzzyAIProfileMetric *********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIProfileMetric); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIProfileMetric); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unknown metrics retain bIsValid=false, even though their numeric storage defaults to zero. */" },
#endif
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unknown metrics retain bIsValid=false, even though their numeric storage defaults to zero." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Fuzzy AI|Profile" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Fuzzy AI|Profile" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Fuzzy AI|Profile" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleCount_MetaData[] = {
		{ "Category", "Fuzzy AI|Profile" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[] = {
		{ "Category", "Fuzzy AI|Profile" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastEvidenceTime_MetaData[] = {
		{ "Category", "Fuzzy AI|Profile" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIProfileMetric constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastEvidenceTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIProfileMetric constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIProfileMetric>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIProfileMetric;
class UScriptStruct* FFuzzyAIProfileMetric::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIProfileMetric.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIProfileMetric.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIProfileMetric, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIProfileMetric"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIProfileMetric.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIProfileMetric Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIProfileMetric, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FFuzzyAIProfileMetric*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIProfileMetric), &Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIProfileMetric, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_SampleCount = { "SampleCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIProfileMetric, SampleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleCount_MetaData), NewProp_SampleCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIProfileMetric, Confidence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Confidence_MetaData), NewProp_Confidence_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_LastEvidenceTime = { "LastEvidenceTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIProfileMetric, LastEvidenceTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastEvidenceTime_MetaData), NewProp_LastEvidenceTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_SampleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_Confidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewProp_LastEvidenceTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIProfileMetric Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIProfileMetric",
	Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::PropPointers),
	sizeof(FFuzzyAIProfileMetric),
	alignof(FFuzzyAIProfileMetric),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIProfileMetric()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIProfileMetric.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIProfileMetric.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIProfileMetric.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIProfileMetric ***********************************************

// ********** Begin ScriptStruct FFuzzyAIProfileSnapshot *******************************************
struct Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIProfileSnapshot); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIProfileSnapshot); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Fuzzy AI|Profile" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorMetrics_MetaData[] = {
		{ "Category", "Fuzzy AI|Profile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tactical preferences, such as parry reliance; not measures of player skill. */" },
#endif
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tactical preferences, such as parry reliance; not measures of player skill." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceMetrics_MetaData[] = {
		{ "Category", "Fuzzy AI|Profile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Separate evidence for future difficulty adaptation. No difficulty changes are applied here. */" },
#endif
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Separate evidence for future difficulty adaptation. No difficulty changes are applied here." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIProfileSnapshot constinit property declarations ***********
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BehaviorMetrics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BehaviorMetrics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerformanceMetrics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerformanceMetrics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIProfileSnapshot constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIProfileSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIProfileSnapshot;
class UScriptStruct* FFuzzyAIProfileSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIProfileSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIProfileSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIProfileSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIProfileSnapshot.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIProfileSnapshot Property Definitions **********************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIProfileSnapshot, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_BehaviorMetrics_Inner = { "BehaviorMetrics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIProfileMetric, METADATA_PARAMS(0, nullptr) }; // 1931777774
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_BehaviorMetrics = { "BehaviorMetrics", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIProfileSnapshot, BehaviorMetrics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorMetrics_MetaData), NewProp_BehaviorMetrics_MetaData) }; // 1931777774
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_PerformanceMetrics_Inner = { "PerformanceMetrics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIProfileMetric, METADATA_PARAMS(0, nullptr) }; // 1931777774
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_PerformanceMetrics = { "PerformanceMetrics", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIProfileSnapshot, PerformanceMetrics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformanceMetrics_MetaData), NewProp_PerformanceMetrics_MetaData) }; // 1931777774
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_BehaviorMetrics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_BehaviorMetrics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_PerformanceMetrics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewProp_PerformanceMetrics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIProfileSnapshot Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIProfileSnapshot",
	Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::PropPointers),
	sizeof(FFuzzyAIProfileSnapshot),
	alignof(FFuzzyAIProfileSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIProfileSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIProfileSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIProfileSnapshot.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIProfileSnapshot *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileTypes_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIProfileMetric::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIProfileMetric_Statics::NewStructOps, TEXT("FuzzyAIProfileMetric"),&Z_Registration_Info_UScriptStruct_FFuzzyAIProfileMetric, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIProfileMetric), 1931777774U) },
		{ FFuzzyAIProfileSnapshot::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot_Statics::NewStructOps, TEXT("FuzzyAIProfileSnapshot"),&Z_Registration_Info_UScriptStruct_FFuzzyAIProfileSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIProfileSnapshot), 3246492483U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileTypes_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileTypes_h__Script_FuzzyAIRuntime_1402688018{
	TEXT("/Script/FuzzyAIRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileTypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileTypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

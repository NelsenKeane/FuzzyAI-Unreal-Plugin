// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/FuzzyUtilityTypes.h"
#include "Core/FuzzyAITypes.h"
#include "Interpretation/FuzzyInterpretationTypes.h"
#include "Profiling/FuzzyProfileTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyUtilityTypes() {}

// ********** Begin Cross Module References ********************************************************
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyUtilityAction_NoRegister();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIActionScore();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIDecisionContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIUtilityContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIUtilityValue();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFuzzyAIUtilityContext ********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIUtilityContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIUtilityContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evidence_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpretation_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIUtilityContext constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Evidence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Interpretation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIUtilityContext constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIUtilityContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityContext;
class UScriptStruct* FFuzzyAIUtilityContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIUtilityContext, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIUtilityContext"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityContext.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIUtilityContext Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::NewProp_Evidence = { "Evidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIUtilityContext, Evidence), Z_Construct_UScriptStruct_FFuzzyAIDecisionContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evidence_MetaData), NewProp_Evidence_MetaData) }; // 3105545654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIUtilityContext, Profile), Z_Construct_UScriptStruct_FFuzzyAIProfileSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Profile_MetaData), NewProp_Profile_MetaData) }; // 3246492483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::NewProp_Interpretation = { "Interpretation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIUtilityContext, Interpretation), Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpretation_MetaData), NewProp_Interpretation_MetaData) }; // 3563302436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::NewProp_Evidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::NewProp_Profile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::NewProp_Interpretation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIUtilityContext Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIUtilityContext",
	Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::PropPointers),
	sizeof(FFuzzyAIUtilityContext),
	alignof(FFuzzyAIUtilityContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIUtilityContext()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityContext.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityContext.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIUtilityContext **********************************************

// ********** Begin ScriptStruct FFuzzyAIUtilityValue **********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIUtilityValue); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIUtilityValue); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Availability is a hard gate; a zero score must not be used to represent unknown evidence. */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Availability is a hard gate; a zero score must not be used to represent unknown evidence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEligible_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIUtilityValue constinit property declarations **************
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static void NewProp_bEligible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEligible;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIUtilityValue constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIUtilityValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityValue;
class UScriptStruct* FFuzzyAIUtilityValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIUtilityValue, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIUtilityValue"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityValue.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIUtilityValue Property Definitions *************************
void Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FFuzzyAIUtilityValue*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIUtilityValue), &Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_bEligible_SetBit(void* Obj)
{
	((FFuzzyAIUtilityValue*)Obj)->bEligible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_bEligible = { "bEligible", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIUtilityValue), &Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_bEligible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEligible_MetaData), NewProp_bEligible_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIUtilityValue, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_bEligible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIUtilityValue Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIUtilityValue",
	Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::PropPointers),
	sizeof(FFuzzyAIUtilityValue),
	alignof(FFuzzyAIUtilityValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIUtilityValue()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityValue.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityValue.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIUtilityValue ************************************************

// ********** Begin ScriptStruct FFuzzyAIActionScore ***********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIActionScore); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIActionScore); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIActionScore constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIActionScore constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIActionScore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIActionScore;
class UScriptStruct* FFuzzyAIActionScore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIActionScore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIActionScore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIActionScore, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIActionScore"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIActionScore.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIActionScore Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIActionScore, Action), Z_Construct_UClass_UFuzzyUtilityAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIActionScore, Value), Z_Construct_UScriptStruct_FFuzzyAIUtilityValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 3511070729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIActionScore Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIActionScore",
	Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::PropPointers),
	sizeof(FFuzzyAIActionScore),
	alignof(FFuzzyAIActionScore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIActionScore()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIActionScore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIActionScore.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIActionScore.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIActionScore *************************************************

// ********** Begin ScriptStruct FFuzzyAIUtilityDecision *******************************************
struct Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIUtilityDecision); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIUtilityDecision); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAction_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scores_MetaData[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIUtilityDecision constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scores;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIUtilityDecision constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIUtilityDecision>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityDecision;
class UScriptStruct* FFuzzyAIUtilityDecision::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityDecision.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityDecision.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIUtilityDecision"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityDecision.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIUtilityDecision Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::NewProp_SelectedAction = { "SelectedAction", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIUtilityDecision, SelectedAction), Z_Construct_UClass_UFuzzyUtilityAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedAction_MetaData), NewProp_SelectedAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::NewProp_Scores_Inner = { "Scores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIActionScore, METADATA_PARAMS(0, nullptr) }; // 78930279
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::NewProp_Scores = { "Scores", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIUtilityDecision, Scores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scores_MetaData), NewProp_Scores_MetaData) }; // 78930279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::NewProp_SelectedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::NewProp_Scores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::NewProp_Scores,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIUtilityDecision Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIUtilityDecision",
	Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::PropPointers),
	sizeof(FFuzzyAIUtilityDecision),
	alignof(FFuzzyAIUtilityDecision),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityDecision.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityDecision.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityDecision.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIUtilityDecision *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityTypes_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIUtilityContext::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIUtilityContext_Statics::NewStructOps, TEXT("FuzzyAIUtilityContext"),&Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIUtilityContext), 986985052U) },
		{ FFuzzyAIUtilityValue::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIUtilityValue_Statics::NewStructOps, TEXT("FuzzyAIUtilityValue"),&Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIUtilityValue), 3511070729U) },
		{ FFuzzyAIActionScore::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewStructOps, TEXT("FuzzyAIActionScore"),&Z_Registration_Info_UScriptStruct_FFuzzyAIActionScore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIActionScore), 78930279U) },
		{ FFuzzyAIUtilityDecision::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIUtilityDecision_Statics::NewStructOps, TEXT("FuzzyAIUtilityDecision"),&Z_Registration_Info_UScriptStruct_FFuzzyAIUtilityDecision, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIUtilityDecision), 1587986685U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityTypes_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityTypes_h__Script_FuzzyAIRuntime_660870998{
	TEXT("/Script/FuzzyAIRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityTypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityTypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

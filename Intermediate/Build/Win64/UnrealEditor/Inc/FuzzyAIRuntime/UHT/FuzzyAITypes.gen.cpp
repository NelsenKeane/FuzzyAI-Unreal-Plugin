// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/FuzzyAITypes.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAITypes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIComponent_NoRegister();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIActionScore();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIFactor();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInput();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRequirement();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIResponse();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFuzzyAIInputSource *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFuzzyAIInputSource;
static UEnum* EFuzzyAIInputSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIInputSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFuzzyAIInputSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("EFuzzyAIInputSource"));
	}
	return Z_Registration_Info_UEnum_EFuzzyAIInputSource.OuterSingleton;
}
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIInputSource>()
{
	return EFuzzyAIInputSource_StaticEnum();
}
struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Constant.Name", "EFuzzyAIInputSource::Constant" },
		{ "EventCount.Name", "EFuzzyAIInputSource::EventCount" },
		{ "EventRate.Name", "EFuzzyAIInputSource::EventRate" },
		{ "EventRatio.Name", "EFuzzyAIInputSource::EventRatio" },
		{ "Interpretation.Name", "EFuzzyAIInputSource::Interpretation" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
		{ "Observation.Name", "EFuzzyAIInputSource::Observation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFuzzyAIInputSource::Observation", (int64)EFuzzyAIInputSource::Observation },
		{ "EFuzzyAIInputSource::Interpretation", (int64)EFuzzyAIInputSource::Interpretation },
		{ "EFuzzyAIInputSource::EventCount", (int64)EFuzzyAIInputSource::EventCount },
		{ "EFuzzyAIInputSource::EventRate", (int64)EFuzzyAIInputSource::EventRate },
		{ "EFuzzyAIInputSource::EventRatio", (int64)EFuzzyAIInputSource::EventRatio },
		{ "EFuzzyAIInputSource::Constant", (int64)EFuzzyAIInputSource::Constant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	"EFuzzyAIInputSource",
	"EFuzzyAIInputSource",
	Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIInputSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFuzzyAIInputSource.InnerSingleton, Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFuzzyAIInputSource.InnerSingleton;
}
// ********** End Enum EFuzzyAIInputSource *********************************************************

// ********** Begin Enum EFuzzyAICombine ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFuzzyAICombine;
static UEnum* EFuzzyAICombine_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAICombine.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFuzzyAICombine.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("EFuzzyAICombine"));
	}
	return Z_Registration_Info_UEnum_EFuzzyAICombine.OuterSingleton;
}
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAICombine>()
{
	return EFuzzyAICombine_StaticEnum();
}
struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Average.Name", "EFuzzyAICombine::Average" },
		{ "BlueprintType", "true" },
		{ "Maximum.Name", "EFuzzyAICombine::Maximum" },
		{ "Minimum.Name", "EFuzzyAICombine::Minimum" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
		{ "Product.Name", "EFuzzyAICombine::Product" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFuzzyAICombine::Product", (int64)EFuzzyAICombine::Product },
		{ "EFuzzyAICombine::Minimum", (int64)EFuzzyAICombine::Minimum },
		{ "EFuzzyAICombine::Maximum", (int64)EFuzzyAICombine::Maximum },
		{ "EFuzzyAICombine::Average", (int64)EFuzzyAICombine::Average },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	"EFuzzyAICombine",
	"EFuzzyAICombine",
	Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAICombine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFuzzyAICombine.InnerSingleton, Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFuzzyAICombine.InnerSingleton;
}
// ********** End Enum EFuzzyAICombine *************************************************************

// ********** Begin Enum EFuzzyAIActionResult ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFuzzyAIActionResult;
static UEnum* EFuzzyAIActionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIActionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFuzzyAIActionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("EFuzzyAIActionResult"));
	}
	return Z_Registration_Info_UEnum_EFuzzyAIActionResult.OuterSingleton;
}
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIActionResult>()
{
	return EFuzzyAIActionResult_StaticEnum();
}
struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "EFuzzyAIActionResult::Cancelled" },
		{ "Failed.Name", "EFuzzyAIActionResult::Failed" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
		{ "Succeeded.Name", "EFuzzyAIActionResult::Succeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFuzzyAIActionResult::Succeeded", (int64)EFuzzyAIActionResult::Succeeded },
		{ "EFuzzyAIActionResult::Failed", (int64)EFuzzyAIActionResult::Failed },
		{ "EFuzzyAIActionResult::Cancelled", (int64)EFuzzyAIActionResult::Cancelled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	"EFuzzyAIActionResult",
	"EFuzzyAIActionResult",
	Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIActionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFuzzyAIActionResult.InnerSingleton, Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFuzzyAIActionResult.InnerSingleton;
}
// ********** End Enum EFuzzyAIActionResult ********************************************************

// ********** Begin ScriptStruct FFuzzyAIContext ***************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Context" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Context" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIContext constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIContext constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIContext_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIContext;
class UScriptStruct* FFuzzyAIContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIContext, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIContext"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIContext.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIContext Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIContext, Component), Z_Construct_UClass_UFuzzyAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIContext, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observer_MetaData), NewProp_Observer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIContext, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::NewProp_Observer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIContext Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIContext",
	Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::PropPointers),
	sizeof(FFuzzyAIContext),
	alignof(FFuzzyAIContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIContext()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIContext.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIContext.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIContext *****************************************************

// ********** Begin ScriptStruct FFuzzyAIInput *****************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIInput_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIInput); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIInput); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservationKey_MetaData[] = {
		{ "Categories", "Observation" },
		{ "Category", "Input" },
		{ "EditCondition", "Source == EFuzzyAIInputSource::Observation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpretationId_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Source == EFuzzyAIInputSource::Interpretation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventKey_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Source == EFuzzyAIInputSource::EventCount || Source == EFuzzyAIInputSource::EventRate || Source == EFuzzyAIInputSource::EventRatio" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpportunityEventKey_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Source == EFuzzyAIInputSource::EventRatio" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowSeconds_MetaData[] = {
		{ "Category", "Input" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEventsFromCurrentTargetOnly_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Filters by Source actor. Event producers must identify the actor whose behavior was observed. */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filters by Source actor. Event producers must identify the actor whose behavior was observed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxObservationAge_MetaData[] = {
		{ "Category", "Input" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Zero disables age rejection. Last successful observation time is used. */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zero disables age rejection. Last successful observation time is used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "Category", "Input" },
		{ "EditCondition", "Source == EFuzzyAIInputSource::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIInput constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObservationKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterpretationId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventKey;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OpportunityEventKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindowSeconds;
	static void NewProp_bEventsFromCurrentTargetOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEventsFromCurrentTargetOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxObservationAge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIInput constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIInput_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIInput;
class UScriptStruct* FFuzzyAIInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIInput, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIInput"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIInput.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIInput Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInput, Source), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 365081902
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_ObservationKey = { "ObservationKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInput, ObservationKey), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservationKey_MetaData), NewProp_ObservationKey_MetaData) }; // 517357616
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_InterpretationId = { "InterpretationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInput, InterpretationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpretationId_MetaData), NewProp_InterpretationId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_EventKey = { "EventKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInput, EventKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventKey_MetaData), NewProp_EventKey_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_OpportunityEventKey = { "OpportunityEventKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInput, OpportunityEventKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpportunityEventKey_MetaData), NewProp_OpportunityEventKey_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_WindowSeconds = { "WindowSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInput, WindowSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowSeconds_MetaData), NewProp_WindowSeconds_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_bEventsFromCurrentTargetOnly_SetBit(void* Obj)
{
	((FFuzzyAIInput*)Obj)->bEventsFromCurrentTargetOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_bEventsFromCurrentTargetOnly = { "bEventsFromCurrentTargetOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIInput), &Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_bEventsFromCurrentTargetOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEventsFromCurrentTargetOnly_MetaData), NewProp_bEventsFromCurrentTargetOnly_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_MaxObservationAge = { "MaxObservationAge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInput, MaxObservationAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxObservationAge_MetaData), NewProp_MaxObservationAge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInput, Constant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_ObservationKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_InterpretationId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_EventKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_OpportunityEventKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_WindowSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_bEventsFromCurrentTargetOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_MaxObservationAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewProp_Constant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIInput Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIInput",
	Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::PropPointers),
	sizeof(FFuzzyAIInput),
	alignof(FFuzzyAIInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInput()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIInput.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIInput.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIInput *******************************************************

// ********** Begin ScriptStruct FFuzzyAIResponse **************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIResponse); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIResponse); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default is a clamped linear ramp; optional curve uses normalized X in [0,1]. */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default is a clamped linear ramp; optional curve uses normalized X in [0,1]." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMin_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMax_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurve_MetaData[] = {
		{ "Category", "Response" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Response" },
		{ "EditCondition", "bUseCurve" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIResponse constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputMax;
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static void NewProp_bUseCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIResponse constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIResponse>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIResponse;
class UScriptStruct* FFuzzyAIResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIResponse, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIResponse"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIResponse.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIResponse Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_InputMin = { "InputMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIResponse, InputMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMin_MetaData), NewProp_InputMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_InputMax = { "InputMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIResponse, InputMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMax_MetaData), NewProp_InputMax_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((FFuzzyAIResponse*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIResponse), &Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_bUseCurve_SetBit(void* Obj)
{
	((FFuzzyAIResponse*)Obj)->bUseCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_bUseCurve = { "bUseCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIResponse), &Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_bUseCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCurve_MetaData), NewProp_bUseCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIResponse, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) }; // 2560417949
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_InputMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_InputMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_bInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_bUseCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewProp_Curve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIResponse Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIResponse",
	Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::PropPointers),
	sizeof(FFuzzyAIResponse),
	alignof(FFuzzyAIResponse),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIResponse()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIResponse.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIResponse.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIResponse ****************************************************

// ********** Begin ScriptStruct FFuzzyAIFactor ****************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIFactor); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIFactor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Factor" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "Category", "Factor" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIFactor constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIFactor constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIFactor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIFactor;
class UScriptStruct* FFuzzyAIFactor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIFactor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIFactor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIFactor, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIFactor"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIFactor.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIFactor Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIFactor, Input), Z_Construct_UScriptStruct_FFuzzyAIInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 755013156
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIFactor, Response), Z_Construct_UScriptStruct_FFuzzyAIResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3877660388
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIFactor Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIFactor",
	Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::PropPointers),
	sizeof(FFuzzyAIFactor),
	alignof(FFuzzyAIFactor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIFactor()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIFactor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIFactor.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIFactor.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIFactor ******************************************************

// ********** Begin ScriptStruct FFuzzyAIRequirement ***********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIRequirement); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIRequirement); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hard numeric range, also supports Boolean observations as 0/1. Unavailable inputs fail. */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hard numeric range, also supports Boolean observations as 0/1. Unavailable inputs fail." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Requirement" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[] = {
		{ "Category", "Requirement" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[] = {
		{ "Category", "Requirement" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIRequirement constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIRequirement constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIRequirement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIRequirement;
class UScriptStruct* FFuzzyAIRequirement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIRequirement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIRequirement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIRequirement, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIRequirement"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIRequirement.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIRequirement Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIRequirement, Input), Z_Construct_UScriptStruct_FFuzzyAIInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) }; // 755013156
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIRequirement, Minimum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimum_MetaData), NewProp_Minimum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIRequirement, Maximum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maximum_MetaData), NewProp_Maximum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::NewProp_Minimum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::NewProp_Maximum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIRequirement Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIRequirement",
	Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::PropPointers),
	sizeof(FFuzzyAIRequirement),
	alignof(FFuzzyAIRequirement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRequirement()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIRequirement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIRequirement.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIRequirement.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIRequirement *************************************************

// ********** Begin ScriptStruct FFuzzyAIInterpretationValue ***************************************
struct Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIInterpretationValue); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIInterpretationValue); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Interpretation" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Interpretation" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "Category", "Interpretation" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIInterpretationValue constinit property declarations *******
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIInterpretationValue constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIInterpretationValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationValue;
class UScriptStruct* FFuzzyAIInterpretationValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIInterpretationValue"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationValue.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIInterpretationValue Property Definitions ******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInterpretationValue, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInterpretationValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((FFuzzyAIInterpretationValue*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIInterpretationValue), &Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::NewProp_bValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIInterpretationValue Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIInterpretationValue",
	Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::PropPointers),
	sizeof(FFuzzyAIInterpretationValue),
	alignof(FFuzzyAIInterpretationValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationValue.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationValue.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIInterpretationValue *****************************************

// ********** Begin ScriptStruct FFuzzyAIActionScore ***********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIActionScore); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIActionScore); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionId_MetaData[] = {
		{ "Categories", "AI.Action" },
		{ "Category", "Decision" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Decision" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEligible_MetaData[] = {
		{ "Category", "Decision" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Decision" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "Category", "Decision" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIActionScore constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Score;
	static void NewProp_bEligible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEligible;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_ActionId = { "ActionId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIActionScore, ActionId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionId_MetaData), NewProp_ActionId_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIActionScore, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_bEligible_SetBit(void* Obj)
{
	((FFuzzyAIActionScore*)Obj)->bEligible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_bEligible = { "bEligible", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIActionScore), &Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_bEligible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEligible_MetaData), NewProp_bEligible_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FFuzzyAIActionScore*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIActionScore), &Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIActionScore, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_ActionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_bEligible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewProp_Reason,
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

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFuzzyAIInputSource_StaticEnum, TEXT("EFuzzyAIInputSource"), &Z_Registration_Info_UEnum_EFuzzyAIInputSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 365081902U) },
		{ EFuzzyAICombine_StaticEnum, TEXT("EFuzzyAICombine"), &Z_Registration_Info_UEnum_EFuzzyAICombine, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3083912316U) },
		{ EFuzzyAIActionResult_StaticEnum, TEXT("EFuzzyAIActionResult"), &Z_Registration_Info_UEnum_EFuzzyAIActionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 75066862U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIContext::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIContext_Statics::NewStructOps, TEXT("FuzzyAIContext"),&Z_Registration_Info_UScriptStruct_FFuzzyAIContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIContext), 1944402176U) },
		{ FFuzzyAIInput::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIInput_Statics::NewStructOps, TEXT("FuzzyAIInput"),&Z_Registration_Info_UScriptStruct_FFuzzyAIInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIInput), 755013156U) },
		{ FFuzzyAIResponse::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics::NewStructOps, TEXT("FuzzyAIResponse"),&Z_Registration_Info_UScriptStruct_FFuzzyAIResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIResponse), 3877660388U) },
		{ FFuzzyAIFactor::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics::NewStructOps, TEXT("FuzzyAIFactor"),&Z_Registration_Info_UScriptStruct_FFuzzyAIFactor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIFactor), 2838162537U) },
		{ FFuzzyAIRequirement::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics::NewStructOps, TEXT("FuzzyAIRequirement"),&Z_Registration_Info_UScriptStruct_FFuzzyAIRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIRequirement), 2404406043U) },
		{ FFuzzyAIInterpretationValue::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics::NewStructOps, TEXT("FuzzyAIInterpretationValue"),&Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIInterpretationValue), 4256652181U) },
		{ FFuzzyAIActionScore::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics::NewStructOps, TEXT("FuzzyAIActionScore"),&Z_Registration_Info_UScriptStruct_FFuzzyAIActionScore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIActionScore), 1868986776U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h__Script_FuzzyAIRuntime_1115656576{
	TEXT("/Script/FuzzyAIRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

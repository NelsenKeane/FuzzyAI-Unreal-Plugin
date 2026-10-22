// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interpretation/FuzzyInterpretationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyInterpretationTypes() {}

// ********** Begin Cross Module References ********************************************************
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInputBinding();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAISemanticValue();
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
		{ "BehaviorMetric.Name", "EFuzzyAIInputSource::BehaviorMetric" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
		{ "Observation.Name", "EFuzzyAIInputSource::Observation" },
		{ "PerformanceMetric.Name", "EFuzzyAIInputSource::PerformanceMetric" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFuzzyAIInputSource::Observation", (int64)EFuzzyAIInputSource::Observation },
		{ "EFuzzyAIInputSource::BehaviorMetric", (int64)EFuzzyAIInputSource::BehaviorMetric },
		{ "EFuzzyAIInputSource::PerformanceMetric", (int64)EFuzzyAIInputSource::PerformanceMetric },
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

// ********** Begin ScriptStruct FFuzzyAIInputBinding **********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIInputBinding); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIInputBinding); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "Category", "Fuzzy AI|Model" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Fuzzy AI|Model" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceKey_MetaData[] = {
		{ "Category", "Fuzzy AI|Model" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIInputBinding constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIInputBinding constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIInputBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIInputBinding;
class UScriptStruct* FFuzzyAIInputBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIInputBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIInputBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIInputBinding, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIInputBinding"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIInputBinding.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIInputBinding Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInputBinding, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInputBinding, Source), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIInputSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 1940460089
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::NewProp_SourceKey = { "SourceKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInputBinding, SourceKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceKey_MetaData), NewProp_SourceKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::NewProp_SourceKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIInputBinding Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIInputBinding",
	Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::PropPointers),
	sizeof(FFuzzyAIInputBinding),
	alignof(FFuzzyAIInputBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInputBinding()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIInputBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIInputBinding.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIInputBinding.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIInputBinding ************************************************

// ********** Begin ScriptStruct FFuzzyAISemanticValue *********************************************
struct Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAISemanticValue); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAISemanticValue); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A semantic degree, such as ParryReliance.High. Membership is not a probability. */" },
#endif
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A semantic degree, such as ParryReliance.High. Membership is not a probability." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Fuzzy AI|Interpretation" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Fuzzy AI|Interpretation" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Degree_MetaData[] = {
		{ "Category", "Fuzzy AI|Interpretation" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAISemanticValue constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Degree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAISemanticValue constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAISemanticValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAISemanticValue;
class UScriptStruct* FFuzzyAISemanticValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAISemanticValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAISemanticValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAISemanticValue, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAISemanticValue"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAISemanticValue.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAISemanticValue Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAISemanticValue, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FFuzzyAISemanticValue*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAISemanticValue), &Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::NewProp_Degree = { "Degree", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAISemanticValue, Degree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Degree_MetaData), NewProp_Degree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::NewProp_Degree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAISemanticValue Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAISemanticValue",
	Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::PropPointers),
	sizeof(FFuzzyAISemanticValue),
	alignof(FFuzzyAISemanticValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAISemanticValue()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAISemanticValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAISemanticValue.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAISemanticValue.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAISemanticValue ***********************************************

// ********** Begin ScriptStruct FFuzzyAIInterpretationSnapshot ************************************
struct Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIInterpretationSnapshot); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIInterpretationSnapshot); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "Fuzzy AI|Interpretation" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpretationTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIInterpretationSnapshot constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIInterpretationSnapshot constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIInterpretationSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationSnapshot;
class UScriptStruct* FFuzzyAIInterpretationSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIInterpretationSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationSnapshot.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIInterpretationSnapshot Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAISemanticValue, METADATA_PARAMS(0, nullptr) }; // 3117816107
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIInterpretationSnapshot, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 3117816107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIInterpretationSnapshot Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIInterpretationSnapshot",
	Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::PropPointers),
	sizeof(FFuzzyAIInterpretationSnapshot),
	alignof(FFuzzyAIInterpretationSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationSnapshot.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIInterpretationSnapshot **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFuzzyAIInputSource_StaticEnum, TEXT("EFuzzyAIInputSource"), &Z_Registration_Info_UEnum_EFuzzyAIInputSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1940460089U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIInputBinding::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics::NewStructOps, TEXT("FuzzyAIInputBinding"),&Z_Registration_Info_UScriptStruct_FFuzzyAIInputBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIInputBinding), 3116845412U) },
		{ FFuzzyAISemanticValue::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics::NewStructOps, TEXT("FuzzyAISemanticValue"),&Z_Registration_Info_UScriptStruct_FFuzzyAISemanticValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAISemanticValue), 3117816107U) },
		{ FFuzzyAIInterpretationSnapshot::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics::NewStructOps, TEXT("FuzzyAIInterpretationSnapshot"),&Z_Registration_Info_UScriptStruct_FFuzzyAIInterpretationSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIInterpretationSnapshot), 3563302436U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h__Script_FuzzyAIRuntime_2734568622{
	TEXT("/Script/FuzzyAIRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h__Script_FuzzyAIRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h__Script_FuzzyAIRuntime_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

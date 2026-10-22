// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/ObservationTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeObservationTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FUZZYAIOBSERVATION_API UEnum* Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject();
FUZZYAIOBSERVATION_API UEnum* Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType();
FUZZYAIOBSERVATION_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationContext();
FUZZYAIOBSERVATION_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FuzzyAIObservation();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFuzzyAIObservationValueType **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFuzzyAIObservationValueType;
static UEnum* EFuzzyAIObservationValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIObservationValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFuzzyAIObservationValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType, (UObject*)Z_Construct_UPackage__Script_FuzzyAIObservation(), TEXT("EFuzzyAIObservationValueType"));
	}
	return Z_Registration_Info_UEnum_EFuzzyAIObservationValueType.OuterSingleton;
}
template<> FUZZYAIOBSERVATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIObservationValueType>()
{
	return EFuzzyAIObservationValueType_StaticEnum();
}
struct Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "EFuzzyAIObservationValueType::Boolean" },
		{ "Float.Name", "EFuzzyAIObservationValueType::Float" },
		{ "GameplayTag.Name", "EFuzzyAIObservationValueType::GameplayTag" },
		{ "Integer.Name", "EFuzzyAIObservationValueType::Integer" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
		{ "Object.Name", "EFuzzyAIObservationValueType::Object" },
		{ "Vector.Name", "EFuzzyAIObservationValueType::Vector" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFuzzyAIObservationValueType::Float", (int64)EFuzzyAIObservationValueType::Float },
		{ "EFuzzyAIObservationValueType::Integer", (int64)EFuzzyAIObservationValueType::Integer },
		{ "EFuzzyAIObservationValueType::Boolean", (int64)EFuzzyAIObservationValueType::Boolean },
		{ "EFuzzyAIObservationValueType::Vector", (int64)EFuzzyAIObservationValueType::Vector },
		{ "EFuzzyAIObservationValueType::Object", (int64)EFuzzyAIObservationValueType::Object },
		{ "EFuzzyAIObservationValueType::GameplayTag", (int64)EFuzzyAIObservationValueType::GameplayTag },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIObservation,
	nullptr,
	"EFuzzyAIObservationValueType",
	"EFuzzyAIObservationValueType",
	Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIObservationValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFuzzyAIObservationValueType.InnerSingleton, Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFuzzyAIObservationValueType.InnerSingleton;
}
// ********** End Enum EFuzzyAIObservationValueType ************************************************

// ********** Begin Enum EFuzzyAIObservationSubject ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFuzzyAIObservationSubject;
static UEnum* EFuzzyAIObservationSubject_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIObservationSubject.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFuzzyAIObservationSubject.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject, (UObject*)Z_Construct_UPackage__Script_FuzzyAIObservation(), TEXT("EFuzzyAIObservationSubject"));
	}
	return Z_Registration_Info_UEnum_EFuzzyAIObservationSubject.OuterSingleton;
}
template<> FUZZYAIOBSERVATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIObservationSubject>()
{
	return EFuzzyAIObservationSubject_StaticEnum();
}
struct Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Name", "EFuzzyAIObservationSubject::Custom" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
		{ "Self.Name", "EFuzzyAIObservationSubject::Self" },
		{ "Target.Name", "EFuzzyAIObservationSubject::Target" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFuzzyAIObservationSubject::Self", (int64)EFuzzyAIObservationSubject::Self },
		{ "EFuzzyAIObservationSubject::Target", (int64)EFuzzyAIObservationSubject::Target },
		{ "EFuzzyAIObservationSubject::Custom", (int64)EFuzzyAIObservationSubject::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIObservation,
	nullptr,
	"EFuzzyAIObservationSubject",
	"EFuzzyAIObservationSubject",
	Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIObservationSubject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFuzzyAIObservationSubject.InnerSingleton, Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationSubject_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFuzzyAIObservationSubject.InnerSingleton;
}
// ********** End Enum EFuzzyAIObservationSubject **************************************************

// ********** Begin ScriptStruct FFuzzyAIObservationContext ****************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIObservationContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIObservationContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTargetVisible_MetaData[] = {
		{ "Category", "Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Supplied by the observer's perception integration, never inferred from target existence. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Supplied by the observer's perception integration, never inferred from target existence." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[] = {
		{ "Category", "Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Supplied by the caller for observations involving additional actors.\n" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Supplied by the caller for observations involving additional actors." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIObservationContext constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bTargetVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetVisible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIObservationContext constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIObservationContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIObservationContext;
class UScriptStruct* FFuzzyAIObservationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIObservationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIObservationContext, (UObject*)Z_Construct_UPackage__Script_FuzzyAIObservation(), TEXT("FuzzyAIObservationContext"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIObservationContext.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIObservationContext Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationContext, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observer_MetaData), NewProp_Observer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationContext, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_bTargetVisible_SetBit(void* Obj)
{
	((FFuzzyAIObservationContext*)Obj)->bTargetVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_bTargetVisible = { "bTargetVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIObservationContext), &Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_bTargetVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTargetVisible_MetaData), NewProp_bTargetVisible_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationContext, Subjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subjects_MetaData), NewProp_Subjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_Observer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_bTargetVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_Subjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewProp_Subjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIObservationContext Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIObservation,
	nullptr,
	&NewStructOps,
	"FuzzyAIObservationContext",
	Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::PropPointers),
	sizeof(FFuzzyAIObservationContext),
	alignof(FFuzzyAIObservationContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationContext()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservationContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIObservationContext.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIObservationContext.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIObservationContext ******************************************

// ********** Begin ScriptStruct FFuzzyAIObservationResult *****************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIObservationResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIObservationResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "Observation" },
		{ "EditCondition", "ValueType == EFuzzyAIObservationValueType::Float" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerValue_MetaData[] = {
		{ "Category", "Observation" },
		{ "EditCondition", "ValueType == EFuzzyAIObservationValueType::Integer" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BooleanValue_MetaData[] = {
		{ "Category", "Observation" },
		{ "EditCondition", "ValueType == EFuzzyAIObservationValueType::Boolean" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[] = {
		{ "Category", "Observation" },
		{ "EditCondition", "ValueType == EFuzzyAIObservationValueType::Vector" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectValue_MetaData[] = {
		{ "Category", "Observation" },
		{ "EditCondition", "ValueType == EFuzzyAIObservationValueType::Object" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagValue_MetaData[] = {
		{ "Category", "Observation" },
		{ "EditCondition", "ValueType == EFuzzyAIObservationValueType::GameplayTag" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIObservationResult constinit property declarations *********
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
	static void NewProp_BooleanValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BooleanValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIObservationResult constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIObservationResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIObservationResult;
class UScriptStruct* FFuzzyAIObservationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIObservationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIObservationResult, (UObject*)Z_Construct_UPackage__Script_FuzzyAIObservation(), TEXT("FuzzyAIObservationResult"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIObservationResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIObservationResult Property Definitions ********************
void Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FFuzzyAIObservationResult*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIObservationResult), &Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationResult, ValueType), Z_Construct_UEnum_FuzzyAIObservation_EFuzzyAIObservationValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 682247071
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationResult, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationResult, IntegerValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerValue_MetaData), NewProp_IntegerValue_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_BooleanValue_SetBit(void* Obj)
{
	((FFuzzyAIObservationResult*)Obj)->BooleanValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_BooleanValue = { "BooleanValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIObservationResult), &Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_BooleanValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BooleanValue_MetaData), NewProp_BooleanValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationResult, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorValue_MetaData), NewProp_VectorValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_ObjectValue = { "ObjectValue", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationResult, ObjectValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectValue_MetaData), NewProp_ObjectValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_GameplayTagValue = { "GameplayTagValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationResult, GameplayTagValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagValue_MetaData), NewProp_GameplayTagValue_MetaData) }; // 517357616
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationResult, FailureReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureReason_MetaData), NewProp_FailureReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_ValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_ValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_IntegerValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_BooleanValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_VectorValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_ObjectValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_GameplayTagValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIObservationResult Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIObservation,
	nullptr,
	&NewStructOps,
	"FuzzyAIObservationResult",
	Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::PropPointers),
	sizeof(FFuzzyAIObservationResult),
	alignof(FFuzzyAIObservationResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationResult()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIObservationResult.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIObservationResult.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIObservationResult *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h__Script_FuzzyAIObservation_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFuzzyAIObservationValueType_StaticEnum, TEXT("EFuzzyAIObservationValueType"), &Z_Registration_Info_UEnum_EFuzzyAIObservationValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 682247071U) },
		{ EFuzzyAIObservationSubject_StaticEnum, TEXT("EFuzzyAIObservationSubject"), &Z_Registration_Info_UEnum_EFuzzyAIObservationSubject, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1585990696U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIObservationContext::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics::NewStructOps, TEXT("FuzzyAIObservationContext"),&Z_Registration_Info_UScriptStruct_FFuzzyAIObservationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIObservationContext), 653118604U) },
		{ FFuzzyAIObservationResult::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics::NewStructOps, TEXT("FuzzyAIObservationResult"),&Z_Registration_Info_UScriptStruct_FFuzzyAIObservationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIObservationResult), 2663767845U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h__Script_FuzzyAIObservation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h__Script_FuzzyAIObservation_1240226069{
	TEXT("/Script/FuzzyAIObservation"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h__Script_FuzzyAIObservation_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h__Script_FuzzyAIObservation_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h__Script_FuzzyAIObservation_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h__Script_FuzzyAIObservation_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

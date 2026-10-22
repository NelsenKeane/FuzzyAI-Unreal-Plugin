// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "Observation/ObservationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeObservationRuntimeTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIObservationAsset_NoRegister();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationEntry();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationRecord();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationResult();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservedEvent();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFuzzyAIObservationUpdatePolicy *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFuzzyAIObservationUpdatePolicy;
static UEnum* EFuzzyAIObservationUpdatePolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIObservationUpdatePolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFuzzyAIObservationUpdatePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("EFuzzyAIObservationUpdatePolicy"));
	}
	return Z_Registration_Info_UEnum_EFuzzyAIObservationUpdatePolicy.OuterSingleton;
}
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIObservationUpdatePolicy>()
{
	return EFuzzyAIObservationUpdatePolicy_StaticEnum();
}
struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EveryFrame.Name", "EFuzzyAIObservationUpdatePolicy::EveryFrame" },
		{ "Interval.Name", "EFuzzyAIObservationUpdatePolicy::Interval" },
		{ "Manual.Name", "EFuzzyAIObservationUpdatePolicy::Manual" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
		{ "SourceEvent.Name", "EFuzzyAIObservationUpdatePolicy::SourceEvent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFuzzyAIObservationUpdatePolicy::Interval", (int64)EFuzzyAIObservationUpdatePolicy::Interval },
		{ "EFuzzyAIObservationUpdatePolicy::SourceEvent", (int64)EFuzzyAIObservationUpdatePolicy::SourceEvent },
		{ "EFuzzyAIObservationUpdatePolicy::EveryFrame", (int64)EFuzzyAIObservationUpdatePolicy::EveryFrame },
		{ "EFuzzyAIObservationUpdatePolicy::Manual", (int64)EFuzzyAIObservationUpdatePolicy::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	"EFuzzyAIObservationUpdatePolicy",
	"EFuzzyAIObservationUpdatePolicy",
	Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIObservationUpdatePolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFuzzyAIObservationUpdatePolicy.InnerSingleton, Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFuzzyAIObservationUpdatePolicy.InnerSingleton;
}
// ********** End Enum EFuzzyAIObservationUpdatePolicy *********************************************

// ********** Begin ScriptStruct FFuzzyAIObservationEntry ******************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIObservationEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIObservationEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observation_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatePolicy_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[] = {
		{ "Category", "Observation" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "UpdatePolicy == EFuzzyAIObservationUpdatePolicy::Interval" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeTolerance_MetaData[] = {
		{ "Category", "Observation" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresVisibleTarget_MetaData[] = {
		{ "Category", "Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gates the read before calling Blueprint, so an unseen target cannot leak live data. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gates the read before calling Blueprint, so an unseen target cannot leak live data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesTargetContext_MetaData[] = {
		{ "Category", "Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable for Custom readers that use Target or Subjects. Target subjects are automatic. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable for Custom readers that use Target or Subjects. Target subjects are automatic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRememberLastSuccessful_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryDuration_MetaData[] = {
		{ "Category", "Memory" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Seconds since the last successful sample; zero retains until eviction or clear. */" },
#endif
		{ "EditCondition", "bRememberLastSuccessful" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds since the last successful sample; zero retains until eviction or clear." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIObservationEntry constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdatePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdatePolicy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeTolerance;
	static void NewProp_bRequiresVisibleTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresVisibleTarget;
	static void NewProp_bUsesTargetContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesTargetContext;
	static void NewProp_bRememberLastSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRememberLastSuccessful;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MemoryDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIObservationEntry constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIObservationEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIObservationEntry;
class UScriptStruct* FFuzzyAIObservationEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservationEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIObservationEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIObservationEntry, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIObservationEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIObservationEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIObservationEntry Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_Observation = { "Observation", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationEntry, Observation), Z_Construct_UClass_UFuzzyAIObservationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observation_MetaData), NewProp_Observation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_UpdatePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_UpdatePolicy = { "UpdatePolicy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationEntry, UpdatePolicy), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatePolicy_MetaData), NewProp_UpdatePolicy_MetaData) }; // 3443719267
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationEntry, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interval_MetaData), NewProp_Interval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_ChangeTolerance = { "ChangeTolerance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationEntry, ChangeTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeTolerance_MetaData), NewProp_ChangeTolerance_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bRequiresVisibleTarget_SetBit(void* Obj)
{
	((FFuzzyAIObservationEntry*)Obj)->bRequiresVisibleTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bRequiresVisibleTarget = { "bRequiresVisibleTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIObservationEntry), &Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bRequiresVisibleTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresVisibleTarget_MetaData), NewProp_bRequiresVisibleTarget_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bUsesTargetContext_SetBit(void* Obj)
{
	((FFuzzyAIObservationEntry*)Obj)->bUsesTargetContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bUsesTargetContext = { "bUsesTargetContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIObservationEntry), &Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bUsesTargetContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesTargetContext_MetaData), NewProp_bUsesTargetContext_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bRememberLastSuccessful_SetBit(void* Obj)
{
	((FFuzzyAIObservationEntry*)Obj)->bRememberLastSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bRememberLastSuccessful = { "bRememberLastSuccessful", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIObservationEntry), &Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bRememberLastSuccessful_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRememberLastSuccessful_MetaData), NewProp_bRememberLastSuccessful_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_MemoryDuration = { "MemoryDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationEntry, MemoryDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryDuration_MetaData), NewProp_MemoryDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_Observation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_UpdatePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_UpdatePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_Interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_ChangeTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bRequiresVisibleTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bUsesTargetContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_bRememberLastSuccessful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewProp_MemoryDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIObservationEntry Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIObservationEntry",
	Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::PropPointers),
	sizeof(FFuzzyAIObservationEntry),
	alignof(FFuzzyAIObservationEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservationEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIObservationEntry.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIObservationEntry.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIObservationEntry ********************************************

// ********** Begin ScriptStruct FFuzzyAIObservationRecord *****************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIObservationRecord); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIObservationRecord); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTargetDependent_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastAttemptTime_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSuccessTime_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastChangeTime_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextRevision_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIObservationRecord constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Observer;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static void NewProp_bTargetDependent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetDependent;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastAttemptTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastSuccessTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastChangeTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ContextRevision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIObservationRecord constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIObservationRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIObservationRecord;
class UScriptStruct* FFuzzyAIObservationRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservationRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIObservationRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIObservationRecord"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIObservationRecord.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIObservationRecord Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationRecord, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationRecord, Result), Z_Construct_UScriptStruct_FFuzzyAIObservationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1088075548
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationRecord, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observer_MetaData), NewProp_Observer_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationRecord, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_bTargetDependent_SetBit(void* Obj)
{
	((FFuzzyAIObservationRecord*)Obj)->bTargetDependent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_bTargetDependent = { "bTargetDependent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIObservationRecord), &Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_bTargetDependent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTargetDependent_MetaData), NewProp_bTargetDependent_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_LastAttemptTime = { "LastAttemptTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationRecord, LastAttemptTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastAttemptTime_MetaData), NewProp_LastAttemptTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_LastSuccessTime = { "LastSuccessTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationRecord, LastSuccessTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSuccessTime_MetaData), NewProp_LastSuccessTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_LastChangeTime = { "LastChangeTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationRecord, LastChangeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastChangeTime_MetaData), NewProp_LastChangeTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_ContextRevision = { "ContextRevision", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservationRecord, ContextRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextRevision_MetaData), NewProp_ContextRevision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_Observer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_bTargetDependent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_LastAttemptTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_LastSuccessTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_LastChangeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewProp_ContextRevision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIObservationRecord Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIObservationRecord",
	Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::PropPointers),
	sizeof(FFuzzyAIObservationRecord),
	alignof(FFuzzyAIObservationRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationRecord()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservationRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIObservationRecord.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIObservationRecord.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIObservationRecord *******************************************

// ********** Begin ScriptStruct FFuzzyAIRememberedObservation *************************************
struct Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIRememberedObservation); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIRememberedObservation); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observation_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpiresAt_MetaData[] = {
		{ "Category", "Memory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Negative means no time-based expiry. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Negative means no time-based expiry." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIRememberedObservation constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Observation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ExpiresAt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIRememberedObservation constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIRememberedObservation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIRememberedObservation;
class UScriptStruct* FFuzzyAIRememberedObservation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIRememberedObservation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIRememberedObservation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIRememberedObservation"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIRememberedObservation.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIRememberedObservation Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::NewProp_Observation = { "Observation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIRememberedObservation, Observation), Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observation_MetaData), NewProp_Observation_MetaData) }; // 3864767520
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::NewProp_ExpiresAt = { "ExpiresAt", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIRememberedObservation, ExpiresAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpiresAt_MetaData), NewProp_ExpiresAt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::NewProp_Observation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::NewProp_ExpiresAt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIRememberedObservation Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIRememberedObservation",
	Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::PropPointers),
	sizeof(FFuzzyAIRememberedObservation),
	alignof(FFuzzyAIRememberedObservation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIRememberedObservation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIRememberedObservation.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIRememberedObservation.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIRememberedObservation ***************************************

// ********** Begin ScriptStruct FFuzzyAIObservedEvent *********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIObservedEvent); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIObservedEvent); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventKey_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Assigned by the runtime on receipt. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assigned by the runtime on receipt." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIObservedEvent constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventKey;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIObservedEvent constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIObservedEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIObservedEvent;
class UScriptStruct* FFuzzyAIObservedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIObservedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIObservedEvent, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIObservedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIObservedEvent.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIObservedEvent Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_EventKey = { "EventKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservedEvent, EventKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventKey_MetaData), NewProp_EventKey_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservedEvent, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservedEvent, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservedEvent, Payload), Z_Construct_UScriptStruct_FFuzzyAIObservationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 1088075548
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIObservedEvent, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_EventKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIObservedEvent Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIObservedEvent",
	Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::PropPointers),
	sizeof(FFuzzyAIObservedEvent),
	alignof(FFuzzyAIObservedEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservedEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIObservedEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIObservedEvent.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIObservedEvent.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIObservedEvent ***********************************************

// ********** Begin ScriptStruct FFuzzyAITargetLocationKnowledge ***********************************
struct Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAITargetLocationKnowledge); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAITargetLocationKnowledge); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasActiveLocation_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLocation_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasLastSeenLocation_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenLocation_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenTime_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenAge_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntimeTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAITargetLocationKnowledge constinit property declarations ***
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static void NewProp_bHasActiveLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasActiveLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveLocation;
	static void NewProp_bHasLastSeenLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLastSeenLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSeenLocation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastSeenTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LastSeenAge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAITargetLocationKnowledge constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAITargetLocationKnowledge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAITargetLocationKnowledge;
class UScriptStruct* FFuzzyAITargetLocationKnowledge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAITargetLocationKnowledge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAITargetLocationKnowledge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAITargetLocationKnowledge"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAITargetLocationKnowledge.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAITargetLocationKnowledge Property Definitions **************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAITargetLocationKnowledge, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_bHasActiveLocation_SetBit(void* Obj)
{
	((FFuzzyAITargetLocationKnowledge*)Obj)->bHasActiveLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_bHasActiveLocation = { "bHasActiveLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAITargetLocationKnowledge), &Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_bHasActiveLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasActiveLocation_MetaData), NewProp_bHasActiveLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_ActiveLocation = { "ActiveLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAITargetLocationKnowledge, ActiveLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLocation_MetaData), NewProp_ActiveLocation_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_bHasLastSeenLocation_SetBit(void* Obj)
{
	((FFuzzyAITargetLocationKnowledge*)Obj)->bHasLastSeenLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_bHasLastSeenLocation = { "bHasLastSeenLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAITargetLocationKnowledge), &Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_bHasLastSeenLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasLastSeenLocation_MetaData), NewProp_bHasLastSeenLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_LastSeenLocation = { "LastSeenLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAITargetLocationKnowledge, LastSeenLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeenLocation_MetaData), NewProp_LastSeenLocation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_LastSeenTime = { "LastSeenTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAITargetLocationKnowledge, LastSeenTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeenTime_MetaData), NewProp_LastSeenTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_LastSeenAge = { "LastSeenAge", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAITargetLocationKnowledge, LastSeenAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeenAge_MetaData), NewProp_LastSeenAge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_bHasActiveLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_ActiveLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_bHasLastSeenLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_LastSeenLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_LastSeenTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewProp_LastSeenAge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAITargetLocationKnowledge Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAITargetLocationKnowledge",
	Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::PropPointers),
	sizeof(FFuzzyAITargetLocationKnowledge),
	alignof(FFuzzyAITargetLocationKnowledge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAITargetLocationKnowledge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAITargetLocationKnowledge.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAITargetLocationKnowledge.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAITargetLocationKnowledge *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFuzzyAIObservationUpdatePolicy_StaticEnum, TEXT("EFuzzyAIObservationUpdatePolicy"), &Z_Registration_Info_UEnum_EFuzzyAIObservationUpdatePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3443719267U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIObservationEntry::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIObservationEntry_Statics::NewStructOps, TEXT("FuzzyAIObservationEntry"),&Z_Registration_Info_UScriptStruct_FFuzzyAIObservationEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIObservationEntry), 3358307648U) },
		{ FFuzzyAIObservationRecord::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics::NewStructOps, TEXT("FuzzyAIObservationRecord"),&Z_Registration_Info_UScriptStruct_FFuzzyAIObservationRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIObservationRecord), 3864767520U) },
		{ FFuzzyAIRememberedObservation::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics::NewStructOps, TEXT("FuzzyAIRememberedObservation"),&Z_Registration_Info_UScriptStruct_FFuzzyAIRememberedObservation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIRememberedObservation), 1723553164U) },
		{ FFuzzyAIObservedEvent::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics::NewStructOps, TEXT("FuzzyAIObservedEvent"),&Z_Registration_Info_UScriptStruct_FFuzzyAIObservedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIObservedEvent), 207617125U) },
		{ FFuzzyAITargetLocationKnowledge::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics::NewStructOps, TEXT("FuzzyAITargetLocationKnowledge"),&Z_Registration_Info_UScriptStruct_FFuzzyAITargetLocationKnowledge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAITargetLocationKnowledge), 4179603342U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h__Script_FuzzyAIRuntime_1112574108{
	TEXT("/Script/FuzzyAIRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h__Script_FuzzyAIRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h__Script_FuzzyAIRuntime_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

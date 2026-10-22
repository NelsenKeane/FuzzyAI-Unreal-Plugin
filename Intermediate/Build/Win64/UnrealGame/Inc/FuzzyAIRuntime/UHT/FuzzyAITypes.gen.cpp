// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/FuzzyAITypes.h"
#include "Observation/ObservationRuntimeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAITypes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIDecisionContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationRecord();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservedEvent();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIStageResult();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFuzzyAIStageStatus *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFuzzyAIStageStatus;
static UEnum* EFuzzyAIStageStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIStageStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFuzzyAIStageStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("EFuzzyAIStageStatus"));
	}
	return Z_Registration_Info_UEnum_EFuzzyAIStageStatus.OuterSingleton;
}
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIStageStatus>()
{
	return EFuzzyAIStageStatus_StaticEnum();
}
struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EFuzzyAIStageStatus::Failed" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
		{ "NotConfigured.Name", "EFuzzyAIStageStatus::NotConfigured" },
		{ "NotImplemented.Name", "EFuzzyAIStageStatus::NotImplemented" },
		{ "NotReady.Name", "EFuzzyAIStageStatus::NotReady" },
		{ "NotRun.Name", "EFuzzyAIStageStatus::NotRun" },
		{ "Succeeded.Name", "EFuzzyAIStageStatus::Succeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFuzzyAIStageStatus::NotRun", (int64)EFuzzyAIStageStatus::NotRun },
		{ "EFuzzyAIStageStatus::NotReady", (int64)EFuzzyAIStageStatus::NotReady },
		{ "EFuzzyAIStageStatus::NotConfigured", (int64)EFuzzyAIStageStatus::NotConfigured },
		{ "EFuzzyAIStageStatus::NotImplemented", (int64)EFuzzyAIStageStatus::NotImplemented },
		{ "EFuzzyAIStageStatus::Succeeded", (int64)EFuzzyAIStageStatus::Succeeded },
		{ "EFuzzyAIStageStatus::Failed", (int64)EFuzzyAIStageStatus::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	"EFuzzyAIStageStatus",
	"EFuzzyAIStageStatus",
	Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus()
{
	if (!Z_Registration_Info_UEnum_EFuzzyAIStageStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFuzzyAIStageStatus.InnerSingleton, Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFuzzyAIStageStatus.InnerSingleton;
}
// ********** End Enum EFuzzyAIStageStatus *********************************************************

// ********** Begin ScriptStruct FFuzzyAIStageResult ***********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIStageResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIStageResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An empty result is not a successful evaluation or a score of zero. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An empty result is not a successful evaluation or a score of zero." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIStageResult constinit property declarations ***************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIStageResult constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIStageResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIStageResult;
class UScriptStruct* FFuzzyAIStageResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIStageResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIStageResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIStageResult, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIStageResult"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIStageResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIStageResult Property Definitions **************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIStageResult, Status), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIStageStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 3065775503
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIStageResult, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIStageResult Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIStageResult",
	Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::PropPointers),
	sizeof(FFuzzyAIStageResult),
	alignof(FFuzzyAIStageResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIStageResult()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIStageResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIStageResult.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIStageResult.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIStageResult *************************************************

// ********** Begin ScriptStruct FFuzzyAIDecisionContext *******************************************
struct Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIDecisionContext); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIDecisionContext); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local evidence captured by the coordinator. Later layers must not read hidden target state. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local evidence captured by the coordinator. Later layers must not read hidden target state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTargetVisible_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturedAt_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observations_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memories_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAITypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIDecisionContext constinit property declarations ***********
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Observer;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static void NewProp_bTargetVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetVisible;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CapturedAt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Observations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Observations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Memories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIDecisionContext constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIDecisionContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIDecisionContext;
class UScriptStruct* FFuzzyAIDecisionContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIDecisionContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIDecisionContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIDecisionContext, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIDecisionContext"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIDecisionContext.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIDecisionContext Property Definitions **********************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDecisionContext, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observer_MetaData), NewProp_Observer_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDecisionContext, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_bTargetVisible_SetBit(void* Obj)
{
	((FFuzzyAIDecisionContext*)Obj)->bTargetVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_bTargetVisible = { "bTargetVisible", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIDecisionContext), &Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_bTargetVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTargetVisible_MetaData), NewProp_bTargetVisible_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_CapturedAt = { "CapturedAt", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDecisionContext, CapturedAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturedAt_MetaData), NewProp_CapturedAt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Observations_Inner = { "Observations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Observations = { "Observations", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDecisionContext, Observations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observations_MetaData), NewProp_Observations_MetaData) }; // 3864767520
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Memories_Inner = { "Memories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation, METADATA_PARAMS(0, nullptr) }; // 1723553164
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Memories = { "Memories", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDecisionContext, Memories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memories_MetaData), NewProp_Memories_MetaData) }; // 1723553164
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIObservedEvent, METADATA_PARAMS(0, nullptr) }; // 207617125
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIDecisionContext, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) }; // 207617125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Observer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_bTargetVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_CapturedAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Observations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Observations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Memories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Memories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Events_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewProp_Events,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIDecisionContext Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIDecisionContext",
	Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::PropPointers),
	sizeof(FFuzzyAIDecisionContext),
	alignof(FFuzzyAIDecisionContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIDecisionContext()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIDecisionContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIDecisionContext.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIDecisionContext.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIDecisionContext *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFuzzyAIStageStatus_StaticEnum, TEXT("EFuzzyAIStageStatus"), &Z_Registration_Info_UEnum_EFuzzyAIStageStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3065775503U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIStageResult::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics::NewStructOps, TEXT("FuzzyAIStageResult"),&Z_Registration_Info_UScriptStruct_FFuzzyAIStageResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIStageResult), 3164831944U) },
		{ FFuzzyAIDecisionContext::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics::NewStructOps, TEXT("FuzzyAIDecisionContext"),&Z_Registration_Info_UScriptStruct_FFuzzyAIDecisionContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIDecisionContext), 3105545654U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h__Script_FuzzyAIRuntime_1252199824{
	TEXT("/Script/FuzzyAIRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h__Script_FuzzyAIRuntime_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

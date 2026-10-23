// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/FuzzyAIComponent.h"
#include "Observation/ObservationRuntimeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIComponent();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIComponent_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIObservationMemory_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservation_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationManager_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationStore_NoRegister();
FUZZYAIRUNTIME_API UFunction* Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature();
FUZZYAIRUNTIME_API UFunction* Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature();
FUZZYAIRUNTIME_API UFunction* Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationRecord();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservedEvent();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FFuzzyAIObservationChanged ********************************************
struct Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics
{
	struct _Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms
	{
		FName Key;
		FFuzzyAIObservationRecord Previous;
		FFuzzyAIObservationRecord Current;
		bool bHadPrevious;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Previous_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FFuzzyAIObservationChanged constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Previous;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
	static void NewProp_bHadPrevious_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadPrevious;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FFuzzyAIObservationChanged constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FFuzzyAIObservationChanged Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_Previous = { "Previous", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms, Previous), Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Previous_MetaData), NewProp_Previous_MetaData) }; // 3864767520
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms, Current), Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) }; // 3864767520
void Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_bHadPrevious_SetBit(void* Obj)
{
	((_Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms*)Obj)->bHadPrevious = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_bHadPrevious = { "bHadPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms), &Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_bHadPrevious_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_Previous,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::NewProp_bHadPrevious,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FFuzzyAIObservationChanged Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIRuntime, nullptr, "FuzzyAIObservationChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::_Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::_Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFuzzyAIObservationChanged_DelegateWrapper(const FMulticastScriptDelegate& FuzzyAIObservationChanged, FName Key, FFuzzyAIObservationRecord const& Previous, FFuzzyAIObservationRecord const& Current, bool bHadPrevious)
{
	struct _Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms
	{
		FName Key;
		FFuzzyAIObservationRecord Previous;
		FFuzzyAIObservationRecord Current;
		bool bHadPrevious;
	};
	_Script_FuzzyAIRuntime_eventFuzzyAIObservationChanged_Parms Parms;
	Parms.Key=Key;
	Parms.Previous=Previous;
	Parms.Current=Current;
	Parms.bHadPrevious=bHadPrevious ? true : false;
	FuzzyAIObservationChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFuzzyAIObservationChanged **********************************************

// ********** Begin Delegate FFuzzyAIObservationsChanged *******************************************
struct Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics
{
	struct _Script_FuzzyAIRuntime_eventFuzzyAIObservationsChanged_Parms
	{
		TArray<FName> ChangedKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangedKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FFuzzyAIObservationsChanged constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChangedKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChangedKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FFuzzyAIObservationsChanged constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FFuzzyAIObservationsChanged Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::NewProp_ChangedKeys_Inner = { "ChangedKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::NewProp_ChangedKeys = { "ChangedKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FuzzyAIRuntime_eventFuzzyAIObservationsChanged_Parms, ChangedKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangedKeys_MetaData), NewProp_ChangedKeys_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::NewProp_ChangedKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::NewProp_ChangedKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FFuzzyAIObservationsChanged Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIRuntime, nullptr, "FuzzyAIObservationsChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::_Script_FuzzyAIRuntime_eventFuzzyAIObservationsChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::_Script_FuzzyAIRuntime_eventFuzzyAIObservationsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFuzzyAIObservationsChanged_DelegateWrapper(const FMulticastScriptDelegate& FuzzyAIObservationsChanged, TArray<FName> const& ChangedKeys)
{
	struct _Script_FuzzyAIRuntime_eventFuzzyAIObservationsChanged_Parms
	{
		TArray<FName> ChangedKeys;
	};
	_Script_FuzzyAIRuntime_eventFuzzyAIObservationsChanged_Parms Parms;
	Parms.ChangedKeys=ChangedKeys;
	FuzzyAIObservationsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFuzzyAIObservationsChanged *********************************************

// ********** Begin Delegate FFuzzyAIObservedEventRecorded *****************************************
struct Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics
{
	struct _Script_FuzzyAIRuntime_eventFuzzyAIObservedEventRecorded_Parms
	{
		FFuzzyAIObservedEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FFuzzyAIObservedEventRecorded constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FFuzzyAIObservedEventRecorded constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FFuzzyAIObservedEventRecorded Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FuzzyAIRuntime_eventFuzzyAIObservedEventRecorded_Parms, Event), Z_Construct_UScriptStruct_FFuzzyAIObservedEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 207617125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FFuzzyAIObservedEventRecorded Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_FuzzyAIRuntime, nullptr, "FuzzyAIObservedEventRecorded__DelegateSignature", 	Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::_Script_FuzzyAIRuntime_eventFuzzyAIObservedEventRecorded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::_Script_FuzzyAIRuntime_eventFuzzyAIObservedEventRecorded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFuzzyAIObservedEventRecorded_DelegateWrapper(const FMulticastScriptDelegate& FuzzyAIObservedEventRecorded, FFuzzyAIObservedEvent const& Event)
{
	struct _Script_FuzzyAIRuntime_eventFuzzyAIObservedEventRecorded_Parms
	{
		FFuzzyAIObservedEvent Event;
	};
	_Script_FuzzyAIRuntime_eventFuzzyAIObservedEventRecorded_Parms Parms;
	Parms.Event=Event;
	FuzzyAIObservedEventRecorded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FFuzzyAIObservedEventRecorded *******************************************

// ********** Begin Class UFuzzyAIComponent Function ClearMemory ***********************************
struct Z_Construct_UFunction_UFuzzyAIComponent_ClearMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearMemory constinit property declarations ***************************
// ********** End Function ClearMemory constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_ClearMemory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "ClearMemory", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_ClearMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_ClearMemory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_ClearMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_ClearMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execClearMemory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMemory();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function ClearMemory *************************************

// ********** Begin Class UFuzzyAIComponent Function GetConfigurationErrors ************************
struct Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics
{
	struct FuzzyAIComponent_eventGetConfigurationErrors_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetConfigurationErrors constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetConfigurationErrors constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetConfigurationErrors Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventGetConfigurationErrors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::PropPointers) < 2048);
// ********** End Function GetConfigurationErrors Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "GetConfigurationErrors", 	Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::FuzzyAIComponent_eventGetConfigurationErrors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::FuzzyAIComponent_eventGetConfigurationErrors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execGetConfigurationErrors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetConfigurationErrors();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function GetConfigurationErrors **************************

// ********** Begin Class UFuzzyAIComponent Function GetMemorySnapshot *****************************
struct Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics
{
	struct FuzzyAIComponent_eventGetMemorySnapshot_Parms
	{
		TArray<FFuzzyAIRememberedObservation> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMemorySnapshot constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMemorySnapshot constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMemorySnapshot Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation, METADATA_PARAMS(0, nullptr) }; // 1723553164
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventGetMemorySnapshot_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1723553164
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::PropPointers) < 2048);
// ********** End Function GetMemorySnapshot Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "GetMemorySnapshot", 	Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::FuzzyAIComponent_eventGetMemorySnapshot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::FuzzyAIComponent_eventGetMemorySnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execGetMemorySnapshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFuzzyAIRememberedObservation>*)Z_Param__Result=P_THIS->GetMemorySnapshot();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function GetMemorySnapshot *******************************

// ********** Begin Class UFuzzyAIComponent Function GetObservationSnapshot ************************
struct Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics
{
	struct FuzzyAIComponent_eventGetObservationSnapshot_Parms
	{
		TArray<FFuzzyAIObservationRecord> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObservationSnapshot constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObservationSnapshot constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObservationSnapshot Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventGetObservationSnapshot_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::PropPointers) < 2048);
// ********** End Function GetObservationSnapshot Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "GetObservationSnapshot", 	Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::FuzzyAIComponent_eventGetObservationSnapshot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::FuzzyAIComponent_eventGetObservationSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execGetObservationSnapshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFuzzyAIObservationRecord>*)Z_Param__Result=P_THIS->GetObservationSnapshot();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function GetObservationSnapshot **************************

// ********** Begin Class UFuzzyAIComponent Function GetObservationStore ***************************
struct Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics
{
	struct FuzzyAIComponent_eventGetObservationStore_Parms
	{
		UFuzzyObservationStore* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Typed read access for consumers; setters accept writes only during Sample. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Typed read access for consumers; setters accept writes only during Sample." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetObservationStore constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObservationStore constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObservationStore Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventGetObservationStore_Parms, ReturnValue), Z_Construct_UClass_UFuzzyObservationStore_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::PropPointers) < 2048);
// ********** End Function GetObservationStore Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "GetObservationStore", 	Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::FuzzyAIComponent_eventGetObservationStore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::FuzzyAIComponent_eventGetObservationStore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execGetObservationStore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFuzzyObservationStore**)Z_Param__Result=P_THIS->GetObservationStore();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function GetObservationStore *****************************

// ********** Begin Class UFuzzyAIComponent Function GetObservedEvents *****************************
struct Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics
{
	struct FuzzyAIComponent_eventGetObservedEvents_Parms
	{
		TArray<FFuzzyAIObservedEvent> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObservedEvents constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObservedEvents constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObservedEvents Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIObservedEvent, METADATA_PARAMS(0, nullptr) }; // 207617125
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventGetObservedEvents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 207617125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::PropPointers) < 2048);
// ********** End Function GetObservedEvents Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "GetObservedEvents", 	Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::FuzzyAIComponent_eventGetObservedEvents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::FuzzyAIComponent_eventGetObservedEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execGetObservedEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFuzzyAIObservedEvent>*)Z_Param__Result=P_THIS->GetObservedEvents();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function GetObservedEvents *******************************

// ********** Begin Class UFuzzyAIComponent Function GetRuntimeObservationInstances ****************
struct Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics
{
	struct FuzzyAIComponent_eventGetRuntimeObservationInstances_Parms
	{
		TArray<UFuzzyObservation*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRuntimeObservationInstances constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRuntimeObservationInstances constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRuntimeObservationInstances Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyObservation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventGetRuntimeObservationInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::PropPointers) < 2048);
// ********** End Function GetRuntimeObservationInstances Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "GetRuntimeObservationInstances", 	Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::FuzzyAIComponent_eventGetRuntimeObservationInstances_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::FuzzyAIComponent_eventGetRuntimeObservationInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execGetRuntimeObservationInstances)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UFuzzyObservation*>*)Z_Param__Result=P_THIS->GetRuntimeObservationInstances();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function GetRuntimeObservationInstances ******************

// ********** Begin Class UFuzzyAIComponent Function GetTarget *************************************
struct Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics
{
	struct FuzzyAIComponent_eventGetTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTarget constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTarget constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTarget Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::PropPointers) < 2048);
// ********** End Function GetTarget Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "GetTarget", 	Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::FuzzyAIComponent_eventGetTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::FuzzyAIComponent_eventGetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_GetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_GetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execGetTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTarget();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function GetTarget ***************************************

// ********** Begin Class UFuzzyAIComponent Function GetTargetLocationKnowledge ********************
struct Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics
{
	struct FuzzyAIComponent_eventGetTargetLocationKnowledge_Parms
	{
		FName LocationKey;
		FFuzzyAITargetLocationKnowledge ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "CPP_Default_LocationKey", "Target.VisibleLocation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetLocationKnowledge constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_LocationKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetLocationKnowledge constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetLocationKnowledge Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::NewProp_LocationKey = { "LocationKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventGetTargetLocationKnowledge_Parms, LocationKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventGetTargetLocationKnowledge_Parms, ReturnValue), Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge, METADATA_PARAMS(0, nullptr) }; // 4179603342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::NewProp_LocationKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::PropPointers) < 2048);
// ********** End Function GetTargetLocationKnowledge Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "GetTargetLocationKnowledge", 	Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::FuzzyAIComponent_eventGetTargetLocationKnowledge_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::FuzzyAIComponent_eventGetTargetLocationKnowledge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execGetTargetLocationKnowledge)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LocationKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFuzzyAITargetLocationKnowledge*)Z_Param__Result=P_THIS->GetTargetLocationKnowledge(Z_Param_LocationKey);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function GetTargetLocationKnowledge **********************

// ********** Begin Class UFuzzyAIComponent Function HandleTargetDestroyed *************************
struct Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics
{
	struct FuzzyAIComponent_eventHandleTargetDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleTargetDestroyed constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleTargetDestroyed constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleTargetDestroyed Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventHandleTargetDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::PropPointers) < 2048);
// ********** End Function HandleTargetDestroyed Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "HandleTargetDestroyed", 	Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::FuzzyAIComponent_eventHandleTargetDestroyed_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::FuzzyAIComponent_eventHandleTargetDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execHandleTargetDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function HandleTargetDestroyed ***************************

// ********** Begin Class UFuzzyAIComponent Function IsObserving ***********************************
struct Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics
{
	struct FuzzyAIComponent_eventIsObserving_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsObserving constinit property declarations ***************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsObserving constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsObserving Property Definitions **************************************
void Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventIsObserving_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventIsObserving_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::PropPointers) < 2048);
// ********** End Function IsObserving Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "IsObserving", 	Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::FuzzyAIComponent_eventIsObserving_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::FuzzyAIComponent_eventIsObserving_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_IsObserving()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_IsObserving_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execIsObserving)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsObserving();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function IsObserving *************************************

// ********** Begin Class UFuzzyAIComponent Function NotifyObservationSourceChanged ****************
struct Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics
{
	struct FuzzyAIComponent_eventNotifyObservationSourceChanged_Parms
	{
		FName Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Wire a source's change delegate to this function. Only SourceEvent entries are accepted. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wire a source's change delegate to this function. Only SourceEvent entries are accepted." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyObservationSourceChanged constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyObservationSourceChanged constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyObservationSourceChanged Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventNotifyObservationSourceChanged_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventNotifyObservationSourceChanged_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventNotifyObservationSourceChanged_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::PropPointers) < 2048);
// ********** End Function NotifyObservationSourceChanged Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "NotifyObservationSourceChanged", 	Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::FuzzyAIComponent_eventNotifyObservationSourceChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::FuzzyAIComponent_eventNotifyObservationSourceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execNotifyObservationSourceChanged)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->NotifyObservationSourceChanged(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function NotifyObservationSourceChanged ******************

// ********** Begin Class UFuzzyAIComponent Function RecordObservedEvent ***************************
struct Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics
{
	struct FuzzyAIComponent_eventRecordObservedEvent_Parms
	{
		FFuzzyAIObservedEvent Event;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RecordObservedEvent constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RecordObservedEvent constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RecordObservedEvent Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventRecordObservedEvent_Parms, Event), Z_Construct_UScriptStruct_FFuzzyAIObservedEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 207617125
void Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventRecordObservedEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventRecordObservedEvent_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::PropPointers) < 2048);
// ********** End Function RecordObservedEvent Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "RecordObservedEvent", 	Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::FuzzyAIComponent_eventRecordObservedEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::FuzzyAIComponent_eventRecordObservedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execRecordObservedEvent)
{
	P_GET_STRUCT_REF(FFuzzyAIObservedEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RecordObservedEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function RecordObservedEvent *****************************

// ********** Begin Class UFuzzyAIComponent Function RefreshAllObservations ************************
struct Z_Construct_UFunction_UFuzzyAIComponent_RefreshAllObservations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshAllObservations constinit property declarations ****************
// ********** End Function RefreshAllObservations constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_RefreshAllObservations_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "RefreshAllObservations", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RefreshAllObservations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_RefreshAllObservations_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_RefreshAllObservations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_RefreshAllObservations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execRefreshAllObservations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshAllObservations();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function RefreshAllObservations **************************

// ********** Begin Class UFuzzyAIComponent Function RequestObservationInstanceRefresh *************
struct Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics
{
	struct FuzzyAIComponent_eventRequestObservationInstanceRefresh_Parms
	{
		UFuzzyObservation* Observation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestObservationInstanceRefresh constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestObservationInstanceRefresh constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestObservationInstanceRefresh Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::NewProp_Observation = { "Observation", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventRequestObservationInstanceRefresh_Parms, Observation), Z_Construct_UClass_UFuzzyObservation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observation_MetaData), NewProp_Observation_MetaData) };
void Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventRequestObservationInstanceRefresh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventRequestObservationInstanceRefresh_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::NewProp_Observation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::PropPointers) < 2048);
// ********** End Function RequestObservationInstanceRefresh Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "RequestObservationInstanceRefresh", 	Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::FuzzyAIComponent_eventRequestObservationInstanceRefresh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::FuzzyAIComponent_eventRequestObservationInstanceRefresh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execRequestObservationInstanceRefresh)
{
	P_GET_OBJECT(UFuzzyObservation,Z_Param_Observation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestObservationInstanceRefresh(Z_Param_Observation);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function RequestObservationInstanceRefresh ***************

// ********** Begin Class UFuzzyAIComponent Function RequestObservationRefresh *********************
struct Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics
{
	struct FuzzyAIComponent_eventRequestObservationRefresh_Parms
	{
		FName Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RequestObservationRefresh constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestObservationRefresh constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestObservationRefresh Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventRequestObservationRefresh_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventRequestObservationRefresh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventRequestObservationRefresh_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::PropPointers) < 2048);
// ********** End Function RequestObservationRefresh Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "RequestObservationRefresh", 	Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::FuzzyAIComponent_eventRequestObservationRefresh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::FuzzyAIComponent_eventRequestObservationRefresh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execRequestObservationRefresh)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestObservationRefresh(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function RequestObservationRefresh ***********************

// ********** Begin Class UFuzzyAIComponent Function SetObservationSubjects ************************
struct Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics
{
	struct FuzzyAIComponent_eventSetObservationSubjects_Parms
	{
		TArray<AActor*> Subjects;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetObservationSubjects constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetObservationSubjects constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetObservationSubjects Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventSetObservationSubjects_Parms, Subjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subjects_MetaData), NewProp_Subjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::NewProp_Subjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::NewProp_Subjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::PropPointers) < 2048);
// ********** End Function SetObservationSubjects Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "SetObservationSubjects", 	Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::FuzzyAIComponent_eventSetObservationSubjects_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::FuzzyAIComponent_eventSetObservationSubjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execSetObservationSubjects)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Subjects);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObservationSubjects(Z_Param_Out_Subjects);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function SetObservationSubjects **************************

// ********** Begin Class UFuzzyAIComponent Function SetTarget *************************************
struct Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics
{
	struct FuzzyAIComponent_eventSetTarget_Parms
	{
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Changing target resets visibility until perception explicitly confirms the new target. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changing target resets visibility until perception explicitly confirms the new target." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetTarget constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTarget constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTarget Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventSetTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::PropPointers) < 2048);
// ********** End Function SetTarget Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "SetTarget", 	Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::FuzzyAIComponent_eventSetTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::FuzzyAIComponent_eventSetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_SetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_SetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execSetTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTarget(Z_Param_NewTarget);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function SetTarget ***************************************

// ********** Begin Class UFuzzyAIComponent Function SetTargetVisibility ***************************
struct Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics
{
	struct FuzzyAIComponent_eventSetTargetVisibility_Parms
	{
		bool bVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTargetVisibility constinit property declarations *******************
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTargetVisibility constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTargetVisibility Property Definitions ******************************
void Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventSetTargetVisibility_Parms*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventSetTargetVisibility_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::PropPointers) < 2048);
// ********** End Function SetTargetVisibility Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "SetTargetVisibility", 	Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::FuzzyAIComponent_eventSetTargetVisibility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::FuzzyAIComponent_eventSetTargetVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execSetTargetVisibility)
{
	P_GET_UBOOL(Z_Param_bVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetVisibility(Z_Param_bVisible);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function SetTargetVisibility *****************************

// ********** Begin Class UFuzzyAIComponent Function StartAI ***************************************
struct Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics
{
	struct FuzzyAIComponent_eventStartAI_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartAI constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function StartAI constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function StartAI Property Definitions ******************************************
void Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventStartAI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventStartAI_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::PropPointers) < 2048);
// ********** End Function StartAI Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "StartAI", 	Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::FuzzyAIComponent_eventStartAI_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::FuzzyAIComponent_eventStartAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_StartAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_StartAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execStartAI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartAI();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function StartAI *****************************************

// ********** Begin Class UFuzzyAIComponent Function StopAI ****************************************
struct Z_Construct_UFunction_UFuzzyAIComponent_StopAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stops collection; cached readings remain available with their original timestamps. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops collection; cached readings remain available with their original timestamps." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function StopAI constinit property declarations ********************************
// ********** End Function StopAI constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_StopAI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "StopAI", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_StopAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_StopAI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_StopAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_StopAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execStopAI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAI();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function StopAI ******************************************

// ********** Begin Class UFuzzyAIComponent Function TryGetObservation *****************************
struct Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics
{
	struct FuzzyAIComponent_eventTryGetObservation_Parms
	{
		FName Key;
		FFuzzyAIObservationRecord OutRecord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return value means key exists, not that its Result is valid or fresh. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return value means key exists, not that its Result is valid or fresh." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetObservation constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRecord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetObservation constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetObservation Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventTryGetObservation_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::NewProp_OutRecord = { "OutRecord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventTryGetObservation_Parms, OutRecord), Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
void Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventTryGetObservation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventTryGetObservation_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::NewProp_OutRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::PropPointers) < 2048);
// ********** End Function TryGetObservation Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "TryGetObservation", 	Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::FuzzyAIComponent_eventTryGetObservation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::FuzzyAIComponent_eventTryGetObservation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execTryGetObservation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FFuzzyAIObservationRecord,Z_Param_Out_OutRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetObservation(Z_Param_Key,Z_Param_Out_OutRecord);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function TryGetObservation *******************************

// ********** Begin Class UFuzzyAIComponent Function TryGetRememberedObservation *******************
struct Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics
{
	struct FuzzyAIComponent_eventTryGetRememberedObservation_Parms
	{
		FName Key;
		AActor* ForTarget;
		FFuzzyAIRememberedObservation OutRecord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetRememberedObservation constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRecord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetRememberedObservation constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetRememberedObservation Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventTryGetRememberedObservation_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_ForTarget = { "ForTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventTryGetRememberedObservation_Parms, ForTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_OutRecord = { "OutRecord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventTryGetRememberedObservation_Parms, OutRecord), Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation, METADATA_PARAMS(0, nullptr) }; // 1723553164
void Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventTryGetRememberedObservation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventTryGetRememberedObservation_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_ForTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_OutRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::PropPointers) < 2048);
// ********** End Function TryGetRememberedObservation Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "TryGetRememberedObservation", 	Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::FuzzyAIComponent_eventTryGetRememberedObservation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::FuzzyAIComponent_eventTryGetRememberedObservation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execTryGetRememberedObservation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_OBJECT(AActor,Z_Param_ForTarget);
	P_GET_STRUCT_REF(FFuzzyAIRememberedObservation,Z_Param_Out_OutRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetRememberedObservation(Z_Param_Key,Z_Param_ForTarget,Z_Param_Out_OutRecord);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function TryGetRememberedObservation *********************

// ********** Begin Class UFuzzyAIComponent Function UpdateTargetSighting **************************
struct Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics
{
	struct FuzzyAIComponent_eventUpdateTargetSighting_Parms
	{
		AActor* SensedTarget;
		bool bVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Feed sight updates only, not hearing/damage stimuli. A successful sighting also samples position. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Feed sight updates only, not hearing/damage stimuli. A successful sighting also samples position." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateTargetSighting constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SensedTarget;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateTargetSighting constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateTargetSighting Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::NewProp_SensedTarget = { "SensedTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIComponent_eventUpdateTargetSighting_Parms, SensedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FuzzyAIComponent_eventUpdateTargetSighting_Parms*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIComponent_eventUpdateTargetSighting_Parms), &Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::NewProp_SensedTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::PropPointers) < 2048);
// ********** End Function UpdateTargetSighting Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIComponent, nullptr, "UpdateTargetSighting", 	Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::FuzzyAIComponent_eventUpdateTargetSighting_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::FuzzyAIComponent_eventUpdateTargetSighting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIComponent::execUpdateTargetSighting)
{
	P_GET_OBJECT(AActor,Z_Param_SensedTarget);
	P_GET_UBOOL(Z_Param_bVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTargetSighting(Z_Param_SensedTarget,Z_Param_bVisible);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIComponent Function UpdateTargetSighting ****************************

// ********** Begin Class UFuzzyAIComponent ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIComponent;
UClass* UFuzzyAIComponent::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIComponent;
	if (!Z_Registration_Info_UClass_UFuzzyAIComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIComponent"),
			Z_Registration_Info_UClass_UFuzzyAIComponent.InnerSingleton,
			StaticRegisterNativesUFuzzyAIComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFuzzyAIComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIComponent_NoRegister()
{
	return UFuzzyAIComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "FuzzyAI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Single actor-facing entry point. Internal layers are per-enemy UObjects, not actor components. */" },
#endif
		{ "IncludePath", "Core/FuzzyAIComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single actor-facing entry point. Internal layers are per-enemy UObjects, not actor components." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservationInstances_Inner_MetaData[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inline Blueprint/native sensor templates. Each running enemy receives its own copies. */" },
#endif
		{ "DisplayName", "Observations" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inline Blueprint/native sensor templates. Each running enemy receives its own copies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservationInstances_MetaData[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Inline Blueprint/native sensor templates. Each running enemy receives its own copies. */" },
#endif
		{ "DisplayName", "Observations" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inline Blueprint/native sensor templates. Each running enemy receives its own copies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bServerOnly_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRememberedObservations_MetaData[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxObservedEvents_MetaData[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedEventMaxAge_MetaData[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObservationChanged_MetaData[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObservationsChanged_MetaData[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMemoryChanged_MetaData[] = {
		{ "Category", "Fuzzy AI|Memory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Value/availability changes and expiry/eviction; timestamp-only refreshes stay quiet. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value/availability changes and expiry/eviction; timestamp-only refreshes stay quiet." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObservedEventRecorded_MetaData[] = {
		{ "Category", "Fuzzy AI|Memory" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryRuntime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservationStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservationManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSubjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationErrors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIComponent constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObservationInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObservationInstances;
	static void NewProp_bAutoStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
	static void NewProp_bServerOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerOnly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRememberedObservations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObservedEvents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObservedEventMaxAge;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObservationChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObservationsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemoryChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObservedEventRecorded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryRuntime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObservationStore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObservationManager;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AdditionalSubjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSubjects;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigurationErrors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConfigurationErrors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIComponent constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearMemory"), .Pointer = &UFuzzyAIComponent::execClearMemory },
		{ .NameUTF8 = UTF8TEXT("GetConfigurationErrors"), .Pointer = &UFuzzyAIComponent::execGetConfigurationErrors },
		{ .NameUTF8 = UTF8TEXT("GetMemorySnapshot"), .Pointer = &UFuzzyAIComponent::execGetMemorySnapshot },
		{ .NameUTF8 = UTF8TEXT("GetObservationSnapshot"), .Pointer = &UFuzzyAIComponent::execGetObservationSnapshot },
		{ .NameUTF8 = UTF8TEXT("GetObservationStore"), .Pointer = &UFuzzyAIComponent::execGetObservationStore },
		{ .NameUTF8 = UTF8TEXT("GetObservedEvents"), .Pointer = &UFuzzyAIComponent::execGetObservedEvents },
		{ .NameUTF8 = UTF8TEXT("GetRuntimeObservationInstances"), .Pointer = &UFuzzyAIComponent::execGetRuntimeObservationInstances },
		{ .NameUTF8 = UTF8TEXT("GetTarget"), .Pointer = &UFuzzyAIComponent::execGetTarget },
		{ .NameUTF8 = UTF8TEXT("GetTargetLocationKnowledge"), .Pointer = &UFuzzyAIComponent::execGetTargetLocationKnowledge },
		{ .NameUTF8 = UTF8TEXT("HandleTargetDestroyed"), .Pointer = &UFuzzyAIComponent::execHandleTargetDestroyed },
		{ .NameUTF8 = UTF8TEXT("IsObserving"), .Pointer = &UFuzzyAIComponent::execIsObserving },
		{ .NameUTF8 = UTF8TEXT("NotifyObservationSourceChanged"), .Pointer = &UFuzzyAIComponent::execNotifyObservationSourceChanged },
		{ .NameUTF8 = UTF8TEXT("RecordObservedEvent"), .Pointer = &UFuzzyAIComponent::execRecordObservedEvent },
		{ .NameUTF8 = UTF8TEXT("RefreshAllObservations"), .Pointer = &UFuzzyAIComponent::execRefreshAllObservations },
		{ .NameUTF8 = UTF8TEXT("RequestObservationInstanceRefresh"), .Pointer = &UFuzzyAIComponent::execRequestObservationInstanceRefresh },
		{ .NameUTF8 = UTF8TEXT("RequestObservationRefresh"), .Pointer = &UFuzzyAIComponent::execRequestObservationRefresh },
		{ .NameUTF8 = UTF8TEXT("SetObservationSubjects"), .Pointer = &UFuzzyAIComponent::execSetObservationSubjects },
		{ .NameUTF8 = UTF8TEXT("SetTarget"), .Pointer = &UFuzzyAIComponent::execSetTarget },
		{ .NameUTF8 = UTF8TEXT("SetTargetVisibility"), .Pointer = &UFuzzyAIComponent::execSetTargetVisibility },
		{ .NameUTF8 = UTF8TEXT("StartAI"), .Pointer = &UFuzzyAIComponent::execStartAI },
		{ .NameUTF8 = UTF8TEXT("StopAI"), .Pointer = &UFuzzyAIComponent::execStopAI },
		{ .NameUTF8 = UTF8TEXT("TryGetObservation"), .Pointer = &UFuzzyAIComponent::execTryGetObservation },
		{ .NameUTF8 = UTF8TEXT("TryGetRememberedObservation"), .Pointer = &UFuzzyAIComponent::execTryGetRememberedObservation },
		{ .NameUTF8 = UTF8TEXT("UpdateTargetSighting"), .Pointer = &UFuzzyAIComponent::execUpdateTargetSighting },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyAIComponent_ClearMemory, "ClearMemory" }, // 3993446201
		{ &Z_Construct_UFunction_UFuzzyAIComponent_GetConfigurationErrors, "GetConfigurationErrors" }, // 1366186258
		{ &Z_Construct_UFunction_UFuzzyAIComponent_GetMemorySnapshot, "GetMemorySnapshot" }, // 410980815
		{ &Z_Construct_UFunction_UFuzzyAIComponent_GetObservationSnapshot, "GetObservationSnapshot" }, // 1216881278
		{ &Z_Construct_UFunction_UFuzzyAIComponent_GetObservationStore, "GetObservationStore" }, // 1159467787
		{ &Z_Construct_UFunction_UFuzzyAIComponent_GetObservedEvents, "GetObservedEvents" }, // 450232993
		{ &Z_Construct_UFunction_UFuzzyAIComponent_GetRuntimeObservationInstances, "GetRuntimeObservationInstances" }, // 4100854442
		{ &Z_Construct_UFunction_UFuzzyAIComponent_GetTarget, "GetTarget" }, // 2470553763
		{ &Z_Construct_UFunction_UFuzzyAIComponent_GetTargetLocationKnowledge, "GetTargetLocationKnowledge" }, // 999340337
		{ &Z_Construct_UFunction_UFuzzyAIComponent_HandleTargetDestroyed, "HandleTargetDestroyed" }, // 1996899477
		{ &Z_Construct_UFunction_UFuzzyAIComponent_IsObserving, "IsObserving" }, // 2056783708
		{ &Z_Construct_UFunction_UFuzzyAIComponent_NotifyObservationSourceChanged, "NotifyObservationSourceChanged" }, // 3066655426
		{ &Z_Construct_UFunction_UFuzzyAIComponent_RecordObservedEvent, "RecordObservedEvent" }, // 1288513631
		{ &Z_Construct_UFunction_UFuzzyAIComponent_RefreshAllObservations, "RefreshAllObservations" }, // 2343435002
		{ &Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationInstanceRefresh, "RequestObservationInstanceRefresh" }, // 1555590978
		{ &Z_Construct_UFunction_UFuzzyAIComponent_RequestObservationRefresh, "RequestObservationRefresh" }, // 3923512612
		{ &Z_Construct_UFunction_UFuzzyAIComponent_SetObservationSubjects, "SetObservationSubjects" }, // 3103421800
		{ &Z_Construct_UFunction_UFuzzyAIComponent_SetTarget, "SetTarget" }, // 2877274731
		{ &Z_Construct_UFunction_UFuzzyAIComponent_SetTargetVisibility, "SetTargetVisibility" }, // 2458437768
		{ &Z_Construct_UFunction_UFuzzyAIComponent_StartAI, "StartAI" }, // 3897654723
		{ &Z_Construct_UFunction_UFuzzyAIComponent_StopAI, "StopAI" }, // 1568395134
		{ &Z_Construct_UFunction_UFuzzyAIComponent_TryGetObservation, "TryGetObservation" }, // 3702209359
		{ &Z_Construct_UFunction_UFuzzyAIComponent_TryGetRememberedObservation, "TryGetRememberedObservation" }, // 1981675299
		{ &Z_Construct_UFunction_UFuzzyAIComponent_UpdateTargetSighting, "UpdateTargetSighting" }, // 3565194490
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIComponent_Statics

// ********** Begin Class UFuzzyAIComponent Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservationInstances_Inner = { "ObservationInstances", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyObservation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservationInstances_Inner_MetaData), NewProp_ObservationInstances_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservationInstances = { "ObservationInstances", nullptr, (EPropertyFlags)0x011400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, ObservationInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservationInstances_MetaData), NewProp_ObservationInstances_MetaData) };
void Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_bAutoStart_SetBit(void* Obj)
{
	((UFuzzyAIComponent*)Obj)->bAutoStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyAIComponent), &Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStart_MetaData), NewProp_bAutoStart_MetaData) };
void Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_bServerOnly_SetBit(void* Obj)
{
	((UFuzzyAIComponent*)Obj)->bServerOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_bServerOnly = { "bServerOnly", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyAIComponent), &Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_bServerOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bServerOnly_MetaData), NewProp_bServerOnly_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_MaxRememberedObservations = { "MaxRememberedObservations", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, MaxRememberedObservations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRememberedObservations_MetaData), NewProp_MaxRememberedObservations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_MaxObservedEvents = { "MaxObservedEvents", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, MaxObservedEvents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxObservedEvents_MetaData), NewProp_MaxObservedEvents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservedEventMaxAge = { "ObservedEventMaxAge", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, ObservedEventMaxAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedEventMaxAge_MetaData), NewProp_ObservedEventMaxAge_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_OnObservationChanged = { "OnObservationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, OnObservationChanged), Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObservationChanged_MetaData), NewProp_OnObservationChanged_MetaData) }; // 30309063
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_OnObservationsChanged = { "OnObservationsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, OnObservationsChanged), Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObservationsChanged_MetaData), NewProp_OnObservationsChanged_MetaData) }; // 3934781423
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_OnMemoryChanged = { "OnMemoryChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, OnMemoryChanged), Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservationsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMemoryChanged_MetaData), NewProp_OnMemoryChanged_MetaData) }; // 3934781423
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_OnObservedEventRecorded = { "OnObservedEventRecorded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, OnObservedEventRecorded), Z_Construct_UDelegateFunction_FuzzyAIRuntime_FuzzyAIObservedEventRecorded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObservedEventRecorded_MetaData), NewProp_OnObservedEventRecorded_MetaData) }; // 2505106128
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_MemoryRuntime = { "MemoryRuntime", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, MemoryRuntime), Z_Construct_UClass_UFuzzyAIObservationMemory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryRuntime_MetaData), NewProp_MemoryRuntime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservationStore = { "ObservationStore", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, ObservationStore), Z_Construct_UClass_UFuzzyObservationStore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservationStore_MetaData), NewProp_ObservationStore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservationManager = { "ObservationManager", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, ObservationManager), Z_Construct_UClass_UFuzzyObservationManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservationManager_MetaData), NewProp_ObservationManager_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_AdditionalSubjects_Inner = { "AdditionalSubjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_AdditionalSubjects = { "AdditionalSubjects", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, AdditionalSubjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSubjects_MetaData), NewProp_AdditionalSubjects_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ConfigurationErrors_Inner = { "ConfigurationErrors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ConfigurationErrors = { "ConfigurationErrors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIComponent, ConfigurationErrors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigurationErrors_MetaData), NewProp_ConfigurationErrors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservationInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservationInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_bAutoStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_bServerOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_MaxRememberedObservations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_MaxObservedEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservedEventMaxAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_OnObservationChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_OnObservationsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_OnMemoryChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_OnObservedEventRecorded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_MemoryRuntime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservationStore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ObservationManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_AdditionalSubjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_AdditionalSubjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ConfigurationErrors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIComponent_Statics::NewProp_ConfigurationErrors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIComponent_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIComponent Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UFuzzyAIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIComponent_Statics::ClassParams = {
	&UFuzzyAIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFuzzyAIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIComponent_Statics::Class_MetaDataParams)
};
void UFuzzyAIComponent::StaticRegisterNativesUFuzzyAIComponent()
{
	UClass* Class = UFuzzyAIComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyAIComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyAIComponent()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIComponent.OuterSingleton, Z_Construct_UClass_UFuzzyAIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIComponent);
UFuzzyAIComponent::~UFuzzyAIComponent() {}
// ********** End Class UFuzzyAIComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIComponent, UFuzzyAIComponent::StaticClass, TEXT("UFuzzyAIComponent"), &Z_Registration_Info_UClass_UFuzzyAIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIComponent), 3935496732U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h__Script_FuzzyAIRuntime_2116071742{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

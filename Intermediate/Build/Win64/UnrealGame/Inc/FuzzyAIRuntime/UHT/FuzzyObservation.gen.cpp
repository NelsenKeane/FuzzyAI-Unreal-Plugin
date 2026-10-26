// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/FuzzyObservation.h"
#include "GameplayTagContainer.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "Observation/ObservationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyObservation() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIComponent_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservation();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservation_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationStore_NoRegister();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationSubject();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationOutput();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservedEvent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyObservation Function GetObservationContext *************************
struct Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics
{
	struct FuzzyObservation_eventGetObservationContext_Parms
	{
		FFuzzyAIObservationContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObservationContext constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObservationContext constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObservationContext Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventGetObservationContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FFuzzyAIObservationContext, METADATA_PARAMS(0, nullptr) }; // 3517025884
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::PropPointers) < 2048);
// ********** End Function GetObservationContext Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservation, nullptr, "GetObservationContext", 	Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::FuzzyObservation_eventGetObservationContext_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::FuzzyObservation_eventGetObservationContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservation_GetObservationContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservation_GetObservationContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservation::execGetObservationContext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFuzzyAIObservationContext*)Z_Param__Result=P_THIS->GetObservationContext();
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservation Function GetObservationContext ***************************

// ********** Begin Class UFuzzyObservation Function GetObservationStore ***************************
struct Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics
{
	struct FuzzyObservation_eventGetObservationStore_Parms
	{
		UFuzzyObservationStore* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObservationStore constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObservationStore constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObservationStore Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventGetObservationStore_Parms, ReturnValue), Z_Construct_UClass_UFuzzyObservationStore_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::PropPointers) < 2048);
// ********** End Function GetObservationStore Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservation, nullptr, "GetObservationStore", 	Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::FuzzyObservation_eventGetObservationStore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::FuzzyObservation_eventGetObservationStore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservation_GetObservationStore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservation_GetObservationStore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservation::execGetObservationStore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFuzzyObservationStore**)Z_Param__Result=P_THIS->GetObservationStore();
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservation Function GetObservationStore *****************************

// ********** Begin Class UFuzzyObservation Function GetOutputKey **********************************
struct Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics
{
	struct FuzzyObservation_eventGetOutputKey_Parms
	{
		int32 OutputIndex;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Categories", "Observation" },
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reads a configured output key; invalid index returns an empty tag. Native sensors use output zero. */" },
#endif
		{ "CPP_Default_OutputIndex", "0" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reads a configured output key; invalid index returns an empty tag. Native sensors use output zero." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetOutputKey constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOutputKey constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOutputKey Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventGetOutputKey_Parms, OutputIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventGetOutputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::NewProp_OutputIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::PropPointers) < 2048);
// ********** End Function GetOutputKey Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservation, nullptr, "GetOutputKey", 	Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::FuzzyObservation_eventGetOutputKey_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::FuzzyObservation_eventGetOutputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservation_GetOutputKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservation_GetOutputKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservation::execGetOutputKey)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OutputIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetOutputKey(Z_Param_OutputIndex);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservation Function GetOutputKey ************************************

// ********** Begin Class UFuzzyObservation Function OnContextChanged ******************************
struct FuzzyObservation_eventOnContextChanged_Parms
{
	FFuzzyAIObservationContext Previous;
	FFuzzyAIObservationContext Current;
};
static FName NAME_UFuzzyObservation_OnContextChanged = FName(TEXT("OnContextChanged"));
void UFuzzyObservation::OnContextChanged(FFuzzyAIObservationContext const& Previous, FFuzzyAIObservationContext const& Current)
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyObservation_OnContextChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyObservation_eventOnContextChanged_Parms Parms;
		Parms.Previous=Previous;
		Parms.Current=Current;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnContextChanged_Implementation(Previous, Current);
	}
}
struct Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rebind target-specific sources using the previous/current contexts when necessary. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rebind target-specific sources using the previous/current contexts when necessary." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Previous_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnContextChanged constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Previous;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnContextChanged constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnContextChanged Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::NewProp_Previous = { "Previous", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventOnContextChanged_Parms, Previous), Z_Construct_UScriptStruct_FFuzzyAIObservationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Previous_MetaData), NewProp_Previous_MetaData) }; // 3517025884
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventOnContextChanged_Parms, Current), Z_Construct_UScriptStruct_FFuzzyAIObservationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) }; // 3517025884
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::NewProp_Previous,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::NewProp_Current,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::PropPointers) < 2048);
// ********** End Function OnContextChanged Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservation, nullptr, "OnContextChanged", 	Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::PropPointers), 
sizeof(FuzzyObservation_eventOnContextChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyObservation_eventOnContextChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservation_OnContextChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservation_OnContextChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservation::execOnContextChanged)
{
	P_GET_STRUCT_REF(FFuzzyAIObservationContext,Z_Param_Out_Previous);
	P_GET_STRUCT_REF(FFuzzyAIObservationContext,Z_Param_Out_Current);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnContextChanged_Implementation(Z_Param_Out_Previous,Z_Param_Out_Current);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservation Function OnContextChanged ********************************

// ********** Begin Class UFuzzyObservation Function OnInitialize **********************************
static FName NAME_UFuzzyObservation_OnInitialize = FName(TEXT("OnInitialize"));
void UFuzzyObservation::OnInitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyObservation_OnInitialize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnInitialize_Implementation();
	}
}
struct Z_Construct_UFunction_UFuzzyObservation_OnInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bind game-specific delegates here. No store writes are accepted until Sample. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bind game-specific delegates here. No store writes are accepted until Sample." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnInitialize constinit property declarations **************************
// ********** End Function OnInitialize constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservation_OnInitialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservation, nullptr, "OnInitialize", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_OnInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservation_OnInitialize_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFuzzyObservation_OnInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservation_OnInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservation::execOnInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInitialize_Implementation();
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservation Function OnInitialize ************************************

// ********** Begin Class UFuzzyObservation Function OnShutdown ************************************
static FName NAME_UFuzzyObservation_OnShutdown = FName(TEXT("OnShutdown"));
void UFuzzyObservation::OnShutdown()
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyObservation_OnShutdown);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnShutdown_Implementation();
	}
}
struct Z_Construct_UFunction_UFuzzyObservation_OnShutdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unbind every delegate/task created by this instance. Called on StopAI and EndPlay. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unbind every delegate/task created by this instance. Called on StopAI and EndPlay." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnShutdown constinit property declarations ****************************
// ********** End Function OnShutdown constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservation_OnShutdown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservation, nullptr, "OnShutdown", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_OnShutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservation_OnShutdown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFuzzyObservation_OnShutdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservation_OnShutdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservation::execOnShutdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnShutdown_Implementation();
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservation Function OnShutdown **************************************

// ********** Begin Class UFuzzyObservation Function RecordObservedEvent ***************************
struct Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics
{
	struct FuzzyObservation_eventRecordObservedEvent_Parms
	{
		FFuzzyAIObservedEvent Event;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventRecordObservedEvent_Parms, Event), Z_Construct_UScriptStruct_FFuzzyAIObservedEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 207617125
void Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservation_eventRecordObservedEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservation_eventRecordObservedEvent_Parms), &Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::PropPointers) < 2048);
// ********** End Function RecordObservedEvent Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservation, nullptr, "RecordObservedEvent", 	Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::FuzzyObservation_eventRecordObservedEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::FuzzyObservation_eventRecordObservedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservation::execRecordObservedEvent)
{
	P_GET_STRUCT_REF(FFuzzyAIObservedEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RecordObservedEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservation Function RecordObservedEvent *****************************

// ********** Begin Class UFuzzyObservation Function RequestRefresh ********************************
struct Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics
{
	struct FuzzyObservation_eventRequestRefresh_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use from a source delegate; the component schedules a safe Sample transaction. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use from a source delegate; the component schedules a safe Sample transaction." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequestRefresh constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestRefresh constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestRefresh Property Definitions ***********************************
void Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservation_eventRequestRefresh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservation_eventRequestRefresh_Parms), &Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::PropPointers) < 2048);
// ********** End Function RequestRefresh Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservation, nullptr, "RequestRefresh", 	Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::FuzzyObservation_eventRequestRefresh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::FuzzyObservation_eventRequestRefresh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservation_RequestRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservation_RequestRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservation::execRequestRefresh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestRefresh();
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservation Function RequestRefresh **********************************

// ********** Begin Class UFuzzyObservation Function Sample ****************************************
struct FuzzyObservation_eventSample_Parms
{
	AActor* Observer;
	AActor* Target;
	UFuzzyObservationStore* Store;
};
static FName NAME_UFuzzyObservation_Sample = FName(TEXT("Sample"));
void UFuzzyObservation::Sample(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store)
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyObservation_Sample);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyObservation_eventSample_Parms Parms;
		Parms.Observer=Observer;
		Parms.Target=Target;
		Parms.Store=Store;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Sample_Implementation(Observer, Target, Store);
	}
}
struct Z_Construct_UFunction_UFuzzyObservation_Sample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Sample constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Store;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Sample constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Sample Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventSample_Parms, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventSample_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::NewProp_Store = { "Store", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservation_eventSample_Parms, Store), Z_Construct_UClass_UFuzzyObservationStore_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::NewProp_Observer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::NewProp_Store,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::PropPointers) < 2048);
// ********** End Function Sample Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservation, nullptr, "Sample", 	Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::PropPointers), 
sizeof(FuzzyObservation_eventSample_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyObservation_eventSample_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservation_Sample()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservation_Sample_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservation::execSample)
{
	P_GET_OBJECT(AActor,Z_Param_Observer);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_OBJECT(UFuzzyObservationStore,Z_Param_Store);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Sample_Implementation(Z_Param_Observer,Z_Param_Target,Z_Param_Store);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservation Function Sample ******************************************

// ********** Begin Class UFuzzyObservation ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyObservation;
UClass* UFuzzyObservation::GetPrivateStaticClass()
{
	using TClass = UFuzzyObservation;
	if (!Z_Registration_Info_UClass_UFuzzyObservation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyObservation"),
			Z_Registration_Info_UClass_UFuzzyObservation.InnerSingleton,
			StaticRegisterNativesUFuzzyObservation,
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
	return Z_Registration_Info_UClass_UFuzzyObservation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyObservation_NoRegister()
{
	return UFuzzyObservation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyObservation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component-owned sensor. Blueprint children implement Sample and may publish several keyed values. */" },
#endif
		{ "IncludePath", "Observation/FuzzyObservation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component-owned sensor. Blueprint children implement Sample and may publish several keyed values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "Category", "Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All keys this sensor may publish. Each output owns its type, tolerance and memory policy. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
		{ "TitleProperty", "Key" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All keys this sensor may publish. Each output owns its type, tolerance and memory policy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatePolicy_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[] = {
		{ "Category", "Observation" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "UpdatePolicy == EFuzzyAIObservationUpdatePolicy::Interval" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresVisibleTarget_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesTargetContext_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeStore_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObserverActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyObservation constinit property declarations ************************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Subject_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Subject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdatePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdatePolicy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
	static void NewProp_bRequiresVisibleTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresVisibleTarget;
	static void NewProp_bUsesTargetContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesTargetContext;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Coordinator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeStore;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ObserverActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Subjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Subjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyObservation constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetObservationContext"), .Pointer = &UFuzzyObservation::execGetObservationContext },
		{ .NameUTF8 = UTF8TEXT("GetObservationStore"), .Pointer = &UFuzzyObservation::execGetObservationStore },
		{ .NameUTF8 = UTF8TEXT("GetOutputKey"), .Pointer = &UFuzzyObservation::execGetOutputKey },
		{ .NameUTF8 = UTF8TEXT("OnContextChanged"), .Pointer = &UFuzzyObservation::execOnContextChanged },
		{ .NameUTF8 = UTF8TEXT("OnInitialize"), .Pointer = &UFuzzyObservation::execOnInitialize },
		{ .NameUTF8 = UTF8TEXT("OnShutdown"), .Pointer = &UFuzzyObservation::execOnShutdown },
		{ .NameUTF8 = UTF8TEXT("RecordObservedEvent"), .Pointer = &UFuzzyObservation::execRecordObservedEvent },
		{ .NameUTF8 = UTF8TEXT("RequestRefresh"), .Pointer = &UFuzzyObservation::execRequestRefresh },
		{ .NameUTF8 = UTF8TEXT("Sample"), .Pointer = &UFuzzyObservation::execSample },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyObservation_GetObservationContext, "GetObservationContext" }, // 3311174911
		{ &Z_Construct_UFunction_UFuzzyObservation_GetObservationStore, "GetObservationStore" }, // 405800864
		{ &Z_Construct_UFunction_UFuzzyObservation_GetOutputKey, "GetOutputKey" }, // 3079829351
		{ &Z_Construct_UFunction_UFuzzyObservation_OnContextChanged, "OnContextChanged" }, // 4197631087
		{ &Z_Construct_UFunction_UFuzzyObservation_OnInitialize, "OnInitialize" }, // 1814838267
		{ &Z_Construct_UFunction_UFuzzyObservation_OnShutdown, "OnShutdown" }, // 3436099765
		{ &Z_Construct_UFunction_UFuzzyObservation_RecordObservedEvent, "RecordObservedEvent" }, // 1057679100
		{ &Z_Construct_UFunction_UFuzzyObservation_RequestRefresh, "RequestRefresh" }, // 2063141712
		{ &Z_Construct_UFunction_UFuzzyObservation_Sample, "Sample" }, // 3994913610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyObservation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyObservation_Statics

// ********** Begin Class UFuzzyObservation Property Definitions ***********************************
void Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UFuzzyObservation*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyObservation), &Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIObservationOutput, METADATA_PARAMS(0, nullptr) }; // 2597823240
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservation, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) }; // 2597823240
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Subject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservation, Subject), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationSubject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subject_MetaData), NewProp_Subject_MetaData) }; // 2698905573
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_UpdatePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_UpdatePolicy = { "UpdatePolicy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservation, UpdatePolicy), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationUpdatePolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatePolicy_MetaData), NewProp_UpdatePolicy_MetaData) }; // 3443719267
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservation, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interval_MetaData), NewProp_Interval_MetaData) };
void Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bRequiresVisibleTarget_SetBit(void* Obj)
{
	((UFuzzyObservation*)Obj)->bRequiresVisibleTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bRequiresVisibleTarget = { "bRequiresVisibleTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyObservation), &Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bRequiresVisibleTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresVisibleTarget_MetaData), NewProp_bRequiresVisibleTarget_MetaData) };
void Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bUsesTargetContext_SetBit(void* Obj)
{
	((UFuzzyObservation*)Obj)->bUsesTargetContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bUsesTargetContext = { "bUsesTargetContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyObservation), &Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bUsesTargetContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesTargetContext_MetaData), NewProp_bUsesTargetContext_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Coordinator = { "Coordinator", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservation, Coordinator), Z_Construct_UClass_UFuzzyAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinator_MetaData), NewProp_Coordinator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_RuntimeStore = { "RuntimeStore", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservation, RuntimeStore), Z_Construct_UClass_UFuzzyObservationStore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeStore_MetaData), NewProp_RuntimeStore_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_ObserverActor = { "ObserverActor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservation, ObserverActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObserverActor_MetaData), NewProp_ObserverActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservation, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservation, Subjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subjects_MetaData), NewProp_Subjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyObservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Subject_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Subject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_UpdatePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_UpdatePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Interval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bRequiresVisibleTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_bUsesTargetContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Coordinator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_RuntimeStore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_ObserverActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Subjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservation_Statics::NewProp_Subjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservation_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyObservation Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UFuzzyObservation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyObservation_Statics::ClassParams = {
	&UFuzzyObservation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFuzzyObservation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservation_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyObservation_Statics::Class_MetaDataParams)
};
void UFuzzyObservation::StaticRegisterNativesUFuzzyObservation()
{
	UClass* Class = UFuzzyObservation::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyObservation_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyObservation()
{
	if (!Z_Registration_Info_UClass_UFuzzyObservation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyObservation.OuterSingleton, Z_Construct_UClass_UFuzzyObservation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyObservation.OuterSingleton;
}
UFuzzyObservation::UFuzzyObservation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyObservation);
UFuzzyObservation::~UFuzzyObservation() {}
// ********** End Class UFuzzyObservation **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyObservation, UFuzzyObservation::StaticClass, TEXT("UFuzzyObservation"), &Z_Registration_Info_UClass_UFuzzyObservation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyObservation), 3336695170U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h__Script_FuzzyAIRuntime_2502663444{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

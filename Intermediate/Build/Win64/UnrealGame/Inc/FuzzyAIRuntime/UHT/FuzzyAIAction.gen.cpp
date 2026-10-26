// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/FuzzyAIAction.h"
#include "GameplayTagContainer.h"
#include "Utility/FuzzyAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIAction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIAction();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIAction_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIComponent_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIConsideration_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIWaitAction();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIWaitAction_NoRegister();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRequirement();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIAction Function CanContinue **************************************
struct FuzzyAIAction_eventCanContinue_Parms
{
	FFuzzyAIContext Context;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FuzzyAIAction_eventCanContinue_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UFuzzyAIAction_CanContinue = FName(TEXT("CanContinue"));
bool UFuzzyAIAction::CanContinue(FFuzzyAIContext const& Context) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIAction_CanContinue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIAction_eventCanContinue_Parms Parms;
		Parms.Context=Context;
		const_cast<UFuzzyAIAction*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFuzzyAIAction*>(this)->CanContinue_Implementation(Context);
	}
}
struct Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanContinue constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanContinue constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanContinue Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIAction_eventCanContinue_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1944402176
void Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIAction_eventCanContinue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIAction_eventCanContinue_Parms), &Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::PropPointers) < 2048);
// ********** End Function CanContinue Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIAction, nullptr, "CanContinue", 	Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::PropPointers), 
sizeof(FuzzyAIAction_eventCanContinue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIAction_eventCanContinue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIAction_CanContinue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIAction_CanContinue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIAction::execCanContinue)
{
	P_GET_STRUCT_REF(FFuzzyAIContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanContinue_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIAction Function CanContinue ****************************************

// ********** Begin Class UFuzzyAIAction Function CanExecute ***************************************
struct FuzzyAIAction_eventCanExecute_Parms
{
	FFuzzyAIContext Context;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FuzzyAIAction_eventCanExecute_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UFuzzyAIAction_CanExecute = FName(TEXT("CanExecute"));
bool UFuzzyAIAction::CanExecute(FFuzzyAIContext const& Context) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIAction_CanExecute);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIAction_eventCanExecute_Parms Parms;
		Parms.Context=Context;
		const_cast<UFuzzyAIAction*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFuzzyAIAction*>(this)->CanExecute_Implementation(Context);
	}
}
struct Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanExecute constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanExecute constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanExecute Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIAction_eventCanExecute_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1944402176
void Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIAction_eventCanExecute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIAction_eventCanExecute_Parms), &Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::PropPointers) < 2048);
// ********** End Function CanExecute Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIAction, nullptr, "CanExecute", 	Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::PropPointers), 
sizeof(FuzzyAIAction_eventCanExecute_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIAction_eventCanExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIAction_CanExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIAction_CanExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIAction::execCanExecute)
{
	P_GET_STRUCT_REF(FFuzzyAIContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanExecute_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIAction Function CanExecute *****************************************

// ********** Begin Class UFuzzyAIAction Function End **********************************************
struct FuzzyAIAction_eventEnd_Parms
{
	EFuzzyAIActionResult Result;
};
static FName NAME_UFuzzyAIAction_End = FName(TEXT("End"));
void UFuzzyAIAction::End(EFuzzyAIActionResult Result)
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIAction_End);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIAction_eventEnd_Parms Parms;
		Parms.Result=Result;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		End_Implementation(Result);
	}
}
struct Z_Construct_UFunction_UFuzzyAIAction_End_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function End constinit property declarations ***********************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function End constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function End Property Definitions **********************************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFuzzyAIAction_End_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFuzzyAIAction_End_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIAction_eventEnd_Parms, Result), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIActionResult, METADATA_PARAMS(0, nullptr) }; // 75066862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIAction_End_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_End_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_End_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_End_Statics::PropPointers) < 2048);
// ********** End Function End Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIAction_End_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIAction, nullptr, "End", 	Z_Construct_UFunction_UFuzzyAIAction_End_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_End_Statics::PropPointers), 
sizeof(FuzzyAIAction_eventEnd_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_End_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIAction_End_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIAction_eventEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIAction_End()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIAction_End_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIAction::execEnd)
{
	P_GET_ENUM(EFuzzyAIActionResult,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->End_Implementation(EFuzzyAIActionResult(Z_Param_Result));
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIAction Function End ************************************************

// ********** Begin Class UFuzzyAIAction Function EvaluateScore ************************************
struct FuzzyAIAction_eventEvaluateScore_Parms
{
	FFuzzyAIContext Context;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	FuzzyAIAction_eventEvaluateScore_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UFuzzyAIAction_EvaluateScore = FName(TEXT("EvaluateScore"));
float UFuzzyAIAction::EvaluateScore(FFuzzyAIContext const& Context) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIAction_EvaluateScore);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIAction_eventEvaluateScore_Parms Parms;
		Parms.Context=Context;
		const_cast<UFuzzyAIAction*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFuzzyAIAction*>(this)->EvaluateScore_Implementation(Context);
	}
}
struct Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EvaluateScore constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EvaluateScore constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EvaluateScore Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIAction_eventEvaluateScore_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1944402176
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIAction_eventEvaluateScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::PropPointers) < 2048);
// ********** End Function EvaluateScore Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIAction, nullptr, "EvaluateScore", 	Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::PropPointers), 
sizeof(FuzzyAIAction_eventEvaluateScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIAction_eventEvaluateScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIAction::execEvaluateScore)
{
	P_GET_STRUCT_REF(FFuzzyAIContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->EvaluateScore_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIAction Function EvaluateScore **************************************

// ********** Begin Class UFuzzyAIAction Function FinishAction *************************************
struct Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics
{
	struct FuzzyAIAction_eventFinishAction_Parms
	{
		bool bSucceeded;
		FString Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Action" },
		{ "CPP_Default_bSucceeded", "true" },
		{ "CPP_Default_Reason", "" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FinishAction constinit property declarations **************************
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FinishAction constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FinishAction Property Definitions *************************************
void Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((FuzzyAIAction_eventFinishAction_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIAction_eventFinishAction_Parms), &Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIAction_eventFinishAction_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::NewProp_bSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::PropPointers) < 2048);
// ********** End Function FinishAction Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIAction, nullptr, "FinishAction", 	Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::FuzzyAIAction_eventFinishAction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::FuzzyAIAction_eventFinishAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIAction_FinishAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIAction_FinishAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIAction::execFinishAction)
{
	P_GET_UBOOL(Z_Param_bSucceeded);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishAction(Z_Param_bSucceeded,Z_Param_Reason);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIAction Function FinishAction ***************************************

// ********** Begin Class UFuzzyAIAction Function GetActionContext *********************************
struct Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics
{
	struct FuzzyAIAction_eventGetActionContext_Parms
	{
		FFuzzyAIContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetActionContext constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActionContext constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActionContext Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIAction_eventGetActionContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FFuzzyAIContext, METADATA_PARAMS(0, nullptr) }; // 1944402176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::PropPointers) < 2048);
// ********** End Function GetActionContext Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIAction, nullptr, "GetActionContext", 	Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::FuzzyAIAction_eventGetActionContext_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::FuzzyAIAction_eventGetActionContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIAction_GetActionContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIAction_GetActionContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIAction::execGetActionContext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFuzzyAIContext*)Z_Param__Result=P_THIS->GetActionContext();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIAction Function GetActionContext ***********************************

// ********** Begin Class UFuzzyAIAction Function IsActionActive ***********************************
struct Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics
{
	struct FuzzyAIAction_eventIsActionActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsActionActive constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsActionActive constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsActionActive Property Definitions ***********************************
void Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIAction_eventIsActionActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIAction_eventIsActionActive_Parms), &Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::PropPointers) < 2048);
// ********** End Function IsActionActive Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIAction, nullptr, "IsActionActive", 	Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::FuzzyAIAction_eventIsActionActive_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::FuzzyAIAction_eventIsActionActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIAction_IsActionActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIAction_IsActionActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIAction::execIsActionActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActionActive();
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIAction Function IsActionActive *************************************

// ********** Begin Class UFuzzyAIAction Function Start ********************************************
struct FuzzyAIAction_eventStart_Parms
{
	FFuzzyAIContext Context;
};
static FName NAME_UFuzzyAIAction_Start = FName(TEXT("Start"));
void UFuzzyAIAction::Start(FFuzzyAIContext const& Context)
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIAction_Start);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIAction_eventStart_Parms Parms;
		Parms.Context=Context;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Start_Implementation(Context);
	}
}
struct Z_Construct_UFunction_UFuzzyAIAction_Start_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Start constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Start constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Start Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIAction_eventStart_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1944402176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::PropPointers) < 2048);
// ********** End Function Start Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIAction, nullptr, "Start", 	Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::PropPointers), 
sizeof(FuzzyAIAction_eventStart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIAction_eventStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIAction_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIAction_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIAction::execStart)
{
	P_GET_STRUCT_REF(FFuzzyAIContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Start_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIAction Function Start **********************************************

// ********** Begin Class UFuzzyAIAction Function Update *******************************************
struct FuzzyAIAction_eventUpdate_Parms
{
	float DeltaSeconds;
};
static FName NAME_UFuzzyAIAction_Update = FName(TEXT("Update"));
void UFuzzyAIAction::Update(float DeltaSeconds)
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIAction_Update);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIAction_eventUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Update_Implementation(DeltaSeconds);
	}
}
struct Z_Construct_UFunction_UFuzzyAIAction_Update_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Update constinit property declarations ********************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Update constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Update Property Definitions *******************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIAction_eventUpdate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::PropPointers) < 2048);
// ********** End Function Update Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIAction, nullptr, "Update", 	Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::PropPointers), 
sizeof(FuzzyAIAction_eventUpdate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIAction_eventUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIAction_Update()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIAction_Update_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIAction::execUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Update_Implementation(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIAction Function Update *********************************************

// ********** Begin Class UFuzzyAIAction ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIAction;
UClass* UFuzzyAIAction::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIAction;
	if (!Z_Registration_Info_UClass_UFuzzyAIAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIAction"),
			Z_Registration_Info_UClass_UFuzzyAIAction.InnerSingleton,
			StaticRegisterNativesUFuzzyAIAction,
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
	return Z_Registration_Info_UClass_UFuzzyAIAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIAction_NoRegister()
{
	return UFuzzyAIAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utility/FuzzyAIAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionId_MetaData[] = {
		{ "Categories", "AI.Action" },
		{ "Category", "Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exact identity within one enemy's action list; independent of GAS state/event tags. */" },
#endif
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exact identity within one enemy's action list; independent of GAS state/event tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresTarget_MetaData[] = {
		{ "Category", "Eligibility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[] = {
		{ "Category", "Eligibility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredOwnerTags_MetaData[] = {
		{ "Category", "Eligibility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedOwnerTags_MetaData[] = {
		{ "Category", "Eligibility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Considerations_Inner_MetaData[] = {
		{ "Category", "Scoring" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Considerations_MetaData[] = {
		{ "Category", "Scoring" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Combine_MetaData[] = {
		{ "Category", "Scoring" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseScore_MetaData[] = {
		{ "Category", "Scoring" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterruptible_MetaData[] = {
		{ "Category", "Execution" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCancelOnTargetChange_MetaData[] = {
		{ "Category", "Execution" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbortWhenRequirementsFail_MetaData[] = {
		{ "Category", "Execution" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumRunTime_MetaData[] = {
		{ "Category", "Execution" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[] = {
		{ "Category", "Execution" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[] = {
		{ "Category", "Execution" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureCooldown_MetaData[] = {
		{ "Category", "Execution" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIAction constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionId;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bRequiresTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Requirements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Requirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredOwnerTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedOwnerTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Considerations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Considerations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Combine_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Combine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseScore;
	static void NewProp_bInterruptible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterruptible;
	static void NewProp_bCancelOnTargetChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelOnTargetChange;
	static void NewProp_bAbortWhenRequirementsFail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbortWhenRequirementsFail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumRunTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FailureCooldown;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_StartTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIAction constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanContinue"), .Pointer = &UFuzzyAIAction::execCanContinue },
		{ .NameUTF8 = UTF8TEXT("CanExecute"), .Pointer = &UFuzzyAIAction::execCanExecute },
		{ .NameUTF8 = UTF8TEXT("End"), .Pointer = &UFuzzyAIAction::execEnd },
		{ .NameUTF8 = UTF8TEXT("EvaluateScore"), .Pointer = &UFuzzyAIAction::execEvaluateScore },
		{ .NameUTF8 = UTF8TEXT("FinishAction"), .Pointer = &UFuzzyAIAction::execFinishAction },
		{ .NameUTF8 = UTF8TEXT("GetActionContext"), .Pointer = &UFuzzyAIAction::execGetActionContext },
		{ .NameUTF8 = UTF8TEXT("IsActionActive"), .Pointer = &UFuzzyAIAction::execIsActionActive },
		{ .NameUTF8 = UTF8TEXT("Start"), .Pointer = &UFuzzyAIAction::execStart },
		{ .NameUTF8 = UTF8TEXT("Update"), .Pointer = &UFuzzyAIAction::execUpdate },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyAIAction_CanContinue, "CanContinue" }, // 1555657956
		{ &Z_Construct_UFunction_UFuzzyAIAction_CanExecute, "CanExecute" }, // 2368711013
		{ &Z_Construct_UFunction_UFuzzyAIAction_End, "End" }, // 1721083260
		{ &Z_Construct_UFunction_UFuzzyAIAction_EvaluateScore, "EvaluateScore" }, // 2007411565
		{ &Z_Construct_UFunction_UFuzzyAIAction_FinishAction, "FinishAction" }, // 3404145577
		{ &Z_Construct_UFunction_UFuzzyAIAction_GetActionContext, "GetActionContext" }, // 510465663
		{ &Z_Construct_UFunction_UFuzzyAIAction_IsActionActive, "IsActionActive" }, // 2321768095
		{ &Z_Construct_UFunction_UFuzzyAIAction_Start, "Start" }, // 219223584
		{ &Z_Construct_UFunction_UFuzzyAIAction_Update, "Update" }, // 1421189502
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIAction_Statics

// ********** Begin Class UFuzzyAIAction Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_ActionId = { "ActionId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, ActionId), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionId_MetaData), NewProp_ActionId_MetaData) }; // 517357616
void Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UFuzzyAIAction*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyAIAction), &Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bRequiresTarget_SetBit(void* Obj)
{
	((UFuzzyAIAction*)Obj)->bRequiresTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bRequiresTarget = { "bRequiresTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyAIAction), &Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bRequiresTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresTarget_MetaData), NewProp_bRequiresTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Requirements_Inner = { "Requirements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIRequirement, METADATA_PARAMS(0, nullptr) }; // 2404406043
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, Requirements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requirements_MetaData), NewProp_Requirements_MetaData) }; // 2404406043
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_RequiredOwnerTags = { "RequiredOwnerTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, RequiredOwnerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredOwnerTags_MetaData), NewProp_RequiredOwnerTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_BlockedOwnerTags = { "BlockedOwnerTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, BlockedOwnerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedOwnerTags_MetaData), NewProp_BlockedOwnerTags_MetaData) }; // 3438578166
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Considerations_Inner = { "Considerations", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyAIConsideration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Considerations_Inner_MetaData), NewProp_Considerations_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Considerations = { "Considerations", nullptr, (EPropertyFlags)0x011400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, Considerations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Considerations_MetaData), NewProp_Considerations_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Combine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Combine = { "Combine", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, Combine), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Combine_MetaData), NewProp_Combine_MetaData) }; // 3083912316
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_BaseScore = { "BaseScore", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, BaseScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseScore_MetaData), NewProp_BaseScore_MetaData) };
void Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bInterruptible_SetBit(void* Obj)
{
	((UFuzzyAIAction*)Obj)->bInterruptible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bInterruptible = { "bInterruptible", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyAIAction), &Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bInterruptible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterruptible_MetaData), NewProp_bInterruptible_MetaData) };
void Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bCancelOnTargetChange_SetBit(void* Obj)
{
	((UFuzzyAIAction*)Obj)->bCancelOnTargetChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bCancelOnTargetChange = { "bCancelOnTargetChange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyAIAction), &Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bCancelOnTargetChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCancelOnTargetChange_MetaData), NewProp_bCancelOnTargetChange_MetaData) };
void Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bAbortWhenRequirementsFail_SetBit(void* Obj)
{
	((UFuzzyAIAction*)Obj)->bAbortWhenRequirementsFail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bAbortWhenRequirementsFail = { "bAbortWhenRequirementsFail", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFuzzyAIAction), &Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bAbortWhenRequirementsFail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbortWhenRequirementsFail_MetaData), NewProp_bAbortWhenRequirementsFail_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_MinimumRunTime = { "MinimumRunTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, MinimumRunTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumRunTime_MetaData), NewProp_MinimumRunTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeout_MetaData), NewProp_Timeout_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, Cooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cooldown_MetaData), NewProp_Cooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_FailureCooldown = { "FailureCooldown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, FailureCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureCooldown_MetaData), NewProp_FailureCooldown_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, Component), Z_Construct_UClass_UFuzzyAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_StartTarget = { "StartTarget", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIAction, StartTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTarget_MetaData), NewProp_StartTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_ActionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bRequiresTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Requirements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Requirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_RequiredOwnerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_BlockedOwnerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Considerations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Considerations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Combine_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Combine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_BaseScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bInterruptible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bCancelOnTargetChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_bAbortWhenRequirementsFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_MinimumRunTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Cooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_FailureCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIAction_Statics::NewProp_StartTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIAction_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIAction Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UFuzzyAIAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIAction_Statics::ClassParams = {
	&UFuzzyAIAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFuzzyAIAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIAction_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIAction_Statics::Class_MetaDataParams)
};
void UFuzzyAIAction::StaticRegisterNativesUFuzzyAIAction()
{
	UClass* Class = UFuzzyAIAction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyAIAction_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyAIAction()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIAction.OuterSingleton, Z_Construct_UClass_UFuzzyAIAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIAction.OuterSingleton;
}
UFuzzyAIAction::UFuzzyAIAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIAction);
UFuzzyAIAction::~UFuzzyAIAction() {}
// ********** End Class UFuzzyAIAction *************************************************************

// ********** Begin Class UFuzzyAIWaitAction *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIWaitAction;
UClass* UFuzzyAIWaitAction::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIWaitAction;
	if (!Z_Registration_Info_UClass_UFuzzyAIWaitAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIWaitAction"),
			Z_Registration_Info_UClass_UFuzzyAIWaitAction.InnerSingleton,
			StaticRegisterNativesUFuzzyAIWaitAction,
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
	return Z_Registration_Info_UClass_UFuzzyAIWaitAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIWaitAction_NoRegister()
{
	return UFuzzyAIWaitAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIWaitAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Wait Action" },
		{ "IncludePath", "Utility/FuzzyAIAction.h" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Wait" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIWaitAction constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIWaitAction constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIWaitAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIWaitAction_Statics

// ********** Begin Class UFuzzyAIWaitAction Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFuzzyAIWaitAction_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIWaitAction, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIWaitAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIWaitAction_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIWaitAction_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIWaitAction Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UFuzzyAIWaitAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyAIAction,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIWaitAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIWaitAction_Statics::ClassParams = {
	&UFuzzyAIWaitAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIWaitAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIWaitAction_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIWaitAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIWaitAction_Statics::Class_MetaDataParams)
};
void UFuzzyAIWaitAction::StaticRegisterNativesUFuzzyAIWaitAction()
{
}
UClass* Z_Construct_UClass_UFuzzyAIWaitAction()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIWaitAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIWaitAction.OuterSingleton, Z_Construct_UClass_UFuzzyAIWaitAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIWaitAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIWaitAction);
UFuzzyAIWaitAction::~UFuzzyAIWaitAction() {}
// ********** End Class UFuzzyAIWaitAction *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIAction, UFuzzyAIAction::StaticClass, TEXT("UFuzzyAIAction"), &Z_Registration_Info_UClass_UFuzzyAIAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIAction), 1191365652U) },
		{ Z_Construct_UClass_UFuzzyAIWaitAction, UFuzzyAIWaitAction::StaticClass, TEXT("UFuzzyAIWaitAction"), &Z_Registration_Info_UClass_UFuzzyAIWaitAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIWaitAction), 273036204U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h__Script_FuzzyAIRuntime_826447982{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

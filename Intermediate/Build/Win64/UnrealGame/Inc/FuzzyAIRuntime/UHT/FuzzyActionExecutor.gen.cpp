// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Execution/FuzzyActionExecutor.h"
#include "Core/FuzzyAITypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyActionExecutor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyActionExecutor();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyActionExecutor_NoRegister();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIDecisionContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIStageResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyActionExecutor Function CancelAction *******************************
static FName NAME_UFuzzyActionExecutor_CancelAction = FName(TEXT("CancelAction"));
void UFuzzyActionExecutor::CancelAction()
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyActionExecutor_CancelAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		CancelAction_Implementation();
	}
}
struct Z_Construct_UFunction_UFuzzyActionExecutor_CancelAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Execution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Future adapters must synchronously release subscriptions/tasks on cancel or owner teardown. */" },
#endif
		{ "ModuleRelativePath", "Public/Execution/FuzzyActionExecutor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Future adapters must synchronously release subscriptions/tasks on cancel or owner teardown." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CancelAction constinit property declarations **************************
// ********** End Function CancelAction constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyActionExecutor_CancelAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyActionExecutor, nullptr, "CancelAction", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyActionExecutor_CancelAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyActionExecutor_CancelAction_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFuzzyActionExecutor_CancelAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyActionExecutor_CancelAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyActionExecutor::execCancelAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAction_Implementation();
	P_NATIVE_END;
}
// ********** End Class UFuzzyActionExecutor Function CancelAction *********************************

// ********** Begin Class UFuzzyActionExecutor Function ExecuteAction ******************************
struct FuzzyActionExecutor_eventExecuteAction_Parms
{
	FFuzzyAIDecisionContext Context;
	FGameplayTag ActionTag;
	FFuzzyAIStageResult ReturnValue;
};
static FName NAME_UFuzzyActionExecutor_ExecuteAction = FName(TEXT("ExecuteAction"));
FFuzzyAIStageResult UFuzzyActionExecutor::ExecuteAction(FFuzzyAIDecisionContext const& Context, FGameplayTag ActionTag)
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyActionExecutor_ExecuteAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyActionExecutor_eventExecuteAction_Parms Parms;
		Parms.Context=Context;
		Parms.ActionTag=ActionTag;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return ExecuteAction_Implementation(Context, ActionTag);
	}
}
struct Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Execution" },
		{ "ModuleRelativePath", "Public/Execution/FuzzyActionExecutor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExecuteAction constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExecuteAction constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExecuteAction Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyActionExecutor_eventExecuteAction_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIDecisionContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 3105545654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::NewProp_ActionTag = { "ActionTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyActionExecutor_eventExecuteAction_Parms, ActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyActionExecutor_eventExecuteAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FFuzzyAIStageResult, METADATA_PARAMS(0, nullptr) }; // 3164831944
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::NewProp_ActionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::PropPointers) < 2048);
// ********** End Function ExecuteAction Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyActionExecutor, nullptr, "ExecuteAction", 	Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::PropPointers), 
sizeof(FuzzyActionExecutor_eventExecuteAction_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyActionExecutor_eventExecuteAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyActionExecutor::execExecuteAction)
{
	P_GET_STRUCT_REF(FFuzzyAIDecisionContext,Z_Param_Out_Context);
	P_GET_STRUCT(FGameplayTag,Z_Param_ActionTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFuzzyAIStageResult*)Z_Param__Result=P_THIS->ExecuteAction_Implementation(Z_Param_Out_Context,Z_Param_ActionTag);
	P_NATIVE_END;
}
// ********** End Class UFuzzyActionExecutor Function ExecuteAction ********************************

// ********** Begin Class UFuzzyActionExecutor *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyActionExecutor;
UClass* UFuzzyActionExecutor::GetPrivateStaticClass()
{
	using TClass = UFuzzyActionExecutor;
	if (!Z_Registration_Info_UClass_UFuzzyActionExecutor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyActionExecutor"),
			Z_Registration_Info_UClass_UFuzzyActionExecutor.InnerSingleton,
			StaticRegisterNativesUFuzzyActionExecutor,
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
	return Z_Registration_Info_UClass_UFuzzyActionExecutor.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyActionExecutor_NoRegister()
{
	return UFuzzyActionExecutor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyActionExecutor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Future game adapter. Runtime instances belong to one enemy; never place live tasks on shared assets. */" },
#endif
		{ "IncludePath", "Execution/FuzzyActionExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Execution/FuzzyActionExecutor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Future game adapter. Runtime instances belong to one enemy; never place live tasks on shared assets." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyActionExecutor constinit property declarations *********************
// ********** End Class UFuzzyActionExecutor constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelAction"), .Pointer = &UFuzzyActionExecutor::execCancelAction },
		{ .NameUTF8 = UTF8TEXT("ExecuteAction"), .Pointer = &UFuzzyActionExecutor::execExecuteAction },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyActionExecutor_CancelAction, "CancelAction" }, // 2333689440
		{ &Z_Construct_UFunction_UFuzzyActionExecutor_ExecuteAction, "ExecuteAction" }, // 1535326074
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyActionExecutor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyActionExecutor_Statics
UObject* (*const Z_Construct_UClass_UFuzzyActionExecutor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyActionExecutor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyActionExecutor_Statics::ClassParams = {
	&UFuzzyActionExecutor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyActionExecutor_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyActionExecutor_Statics::Class_MetaDataParams)
};
void UFuzzyActionExecutor::StaticRegisterNativesUFuzzyActionExecutor()
{
	UClass* Class = UFuzzyActionExecutor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyActionExecutor_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyActionExecutor()
{
	if (!Z_Registration_Info_UClass_UFuzzyActionExecutor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyActionExecutor.OuterSingleton, Z_Construct_UClass_UFuzzyActionExecutor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyActionExecutor.OuterSingleton;
}
UFuzzyActionExecutor::UFuzzyActionExecutor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyActionExecutor);
UFuzzyActionExecutor::~UFuzzyActionExecutor() {}
// ********** End Class UFuzzyActionExecutor *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyActionExecutor, UFuzzyActionExecutor::StaticClass, TEXT("UFuzzyActionExecutor"), &Z_Registration_Info_UClass_UFuzzyActionExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyActionExecutor), 241581209U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h__Script_FuzzyAIRuntime_4140571238{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

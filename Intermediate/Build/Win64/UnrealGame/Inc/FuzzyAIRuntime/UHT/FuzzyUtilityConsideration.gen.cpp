// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/FuzzyUtilityConsideration.h"
#include "Core/FuzzyAITypes.h"
#include "Utility/FuzzyUtilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyUtilityConsideration() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyUtilityConsideration();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyUtilityConsideration_NoRegister();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIStageResult();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIUtilityContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIUtilityValue();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyUtilityConsideration Function Evaluate *****************************
struct FuzzyUtilityConsideration_eventEvaluate_Parms
{
	FFuzzyAIUtilityContext Context;
	FFuzzyAIUtilityValue OutValue;
	FFuzzyAIStageResult ReturnValue;
};
static FName NAME_UFuzzyUtilityConsideration_Evaluate = FName(TEXT("Evaluate"));
FFuzzyAIStageResult UFuzzyUtilityConsideration::Evaluate(FFuzzyAIUtilityContext const& Context, FFuzzyAIUtilityValue& OutValue) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyUtilityConsideration_Evaluate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyUtilityConsideration_eventEvaluate_Parms Parms;
		Parms.Context=Context;
		Parms.OutValue=OutValue;
		const_cast<UFuzzyUtilityConsideration*>(this)->ProcessEvent(Func,&Parms);
		OutValue=Parms.OutValue;
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFuzzyUtilityConsideration*>(this)->Evaluate_Implementation(Context, OutValue);
	}
}
struct Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityConsideration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Evaluate constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Evaluate constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Evaluate Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyUtilityConsideration_eventEvaluate_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIUtilityContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 986985052
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyUtilityConsideration_eventEvaluate_Parms, OutValue), Z_Construct_UScriptStruct_FFuzzyAIUtilityValue, METADATA_PARAMS(0, nullptr) }; // 3511070729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyUtilityConsideration_eventEvaluate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFuzzyAIStageResult, METADATA_PARAMS(0, nullptr) }; // 3164831944
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::PropPointers) < 2048);
// ********** End Function Evaluate Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyUtilityConsideration, nullptr, "Evaluate", 	Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::PropPointers), 
sizeof(FuzzyUtilityConsideration_eventEvaluate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyUtilityConsideration_eventEvaluate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyUtilityConsideration::execEvaluate)
{
	P_GET_STRUCT_REF(FFuzzyAIUtilityContext,Z_Param_Out_Context);
	P_GET_STRUCT_REF(FFuzzyAIUtilityValue,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFuzzyAIStageResult*)Z_Param__Result=P_THIS->Evaluate_Implementation(Z_Param_Out_Context,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UFuzzyUtilityConsideration Function Evaluate *******************************

// ********** Begin Class UFuzzyUtilityConsideration ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyUtilityConsideration;
UClass* UFuzzyUtilityConsideration::GetPrivateStaticClass()
{
	using TClass = UFuzzyUtilityConsideration;
	if (!Z_Registration_Info_UClass_UFuzzyUtilityConsideration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyUtilityConsideration"),
			Z_Registration_Info_UClass_UFuzzyUtilityConsideration.InnerSingleton,
			StaticRegisterNativesUFuzzyUtilityConsideration,
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
	return Z_Registration_Info_UClass_UFuzzyUtilityConsideration.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyUtilityConsideration_NoRegister()
{
	return UFuzzyUtilityConsideration::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyUtilityConsideration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shared, stateless scoring definition. Do not store enemy state on an action asset. */" },
#endif
		{ "IncludePath", "Utility/FuzzyUtilityConsideration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityConsideration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared, stateless scoring definition. Do not store enemy state on an action asset." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyUtilityConsideration constinit property declarations ***************
// ********** End Class UFuzzyUtilityConsideration constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Evaluate"), .Pointer = &UFuzzyUtilityConsideration::execEvaluate },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyUtilityConsideration_Evaluate, "Evaluate" }, // 2388502783
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyUtilityConsideration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyUtilityConsideration_Statics
UObject* (*const Z_Construct_UClass_UFuzzyUtilityConsideration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyUtilityConsideration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyUtilityConsideration_Statics::ClassParams = {
	&UFuzzyUtilityConsideration::StaticClass,
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
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyUtilityConsideration_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyUtilityConsideration_Statics::Class_MetaDataParams)
};
void UFuzzyUtilityConsideration::StaticRegisterNativesUFuzzyUtilityConsideration()
{
	UClass* Class = UFuzzyUtilityConsideration::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyUtilityConsideration_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyUtilityConsideration()
{
	if (!Z_Registration_Info_UClass_UFuzzyUtilityConsideration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyUtilityConsideration.OuterSingleton, Z_Construct_UClass_UFuzzyUtilityConsideration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyUtilityConsideration.OuterSingleton;
}
UFuzzyUtilityConsideration::UFuzzyUtilityConsideration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyUtilityConsideration);
UFuzzyUtilityConsideration::~UFuzzyUtilityConsideration() {}
// ********** End Class UFuzzyUtilityConsideration *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityConsideration_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyUtilityConsideration, UFuzzyUtilityConsideration::StaticClass, TEXT("UFuzzyUtilityConsideration"), &Z_Registration_Info_UClass_UFuzzyUtilityConsideration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyUtilityConsideration), 716955271U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityConsideration_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityConsideration_h__Script_FuzzyAIRuntime_1897510161{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityConsideration_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityConsideration_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

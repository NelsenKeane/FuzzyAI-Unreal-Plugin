// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/FuzzyAIConsideration.h"
#include "Utility/FuzzyAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIConsideration() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIConsideration();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIConsideration_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInputConsideration();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInputConsideration_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIUncertainConsideration();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIUncertainConsideration_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationStore_NoRegister();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIFactor();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIResponse();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIWeightedSample();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIConsideration Function Evaluate **********************************
struct FuzzyAIConsideration_eventEvaluate_Parms
{
	const UFuzzyObservationStore* Store;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	FuzzyAIConsideration_eventEvaluate_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UFuzzyAIConsideration_Evaluate = FName(TEXT("Evaluate"));
float UFuzzyAIConsideration::Evaluate(const UFuzzyObservationStore* Store) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIConsideration_Evaluate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIConsideration_eventEvaluate_Parms Parms;
		Parms.Store=Store;
		const_cast<UFuzzyAIConsideration*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFuzzyAIConsideration*>(this)->Evaluate_Implementation(Store);
	}
}
struct Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Store_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Evaluate constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Store;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Evaluate constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Evaluate Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::NewProp_Store = { "Store", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIConsideration_eventEvaluate_Parms, Store), Z_Construct_UClass_UFuzzyObservationStore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Store_MetaData), NewProp_Store_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIConsideration_eventEvaluate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::NewProp_Store,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::PropPointers) < 2048);
// ********** End Function Evaluate Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIConsideration, nullptr, "Evaluate", 	Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::PropPointers), 
sizeof(FuzzyAIConsideration_eventEvaluate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIConsideration_eventEvaluate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIConsideration::execEvaluate)
{
	P_GET_OBJECT(UFuzzyObservationStore,Z_Param_Store);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->Evaluate_Implementation(Z_Param_Store);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIConsideration Function Evaluate ************************************

// ********** Begin Class UFuzzyAIConsideration Function EvaluateContext ***************************
struct FuzzyAIConsideration_eventEvaluateContext_Parms
{
	FFuzzyAIContext Context;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	FuzzyAIConsideration_eventEvaluateContext_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UFuzzyAIConsideration_EvaluateContext = FName(TEXT("EvaluateContext"));
float UFuzzyAIConsideration::EvaluateContext(FFuzzyAIContext const& Context) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIConsideration_EvaluateContext);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIConsideration_eventEvaluateContext_Parms Parms;
		Parms.Context=Context;
		const_cast<UFuzzyAIConsideration*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFuzzyAIConsideration*>(this)->EvaluateContext_Implementation(Context);
	}
}
struct Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EvaluateContext constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EvaluateContext constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EvaluateContext Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIConsideration_eventEvaluateContext_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1944402176
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIConsideration_eventEvaluateContext_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::PropPointers) < 2048);
// ********** End Function EvaluateContext Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIConsideration, nullptr, "EvaluateContext", 	Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::PropPointers), 
sizeof(FuzzyAIConsideration_eventEvaluateContext_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIConsideration_eventEvaluateContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIConsideration::execEvaluateContext)
{
	P_GET_STRUCT_REF(FFuzzyAIContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->EvaluateContext_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIConsideration Function EvaluateContext *****************************

// ********** Begin Class UFuzzyAIConsideration ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIConsideration;
UClass* UFuzzyAIConsideration::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIConsideration;
	if (!Z_Registration_Info_UClass_UFuzzyAIConsideration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIConsideration"),
			Z_Registration_Info_UClass_UFuzzyAIConsideration.InnerSingleton,
			StaticRegisterNativesUFuzzyAIConsideration,
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
	return Z_Registration_Info_UClass_UFuzzyAIConsideration.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIConsideration_NoRegister()
{
	return UFuzzyAIConsideration::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIConsideration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utility/FuzzyAIConsideration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIConsideration constinit property declarations ********************
// ********** End Class UFuzzyAIConsideration constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Evaluate"), .Pointer = &UFuzzyAIConsideration::execEvaluate },
		{ .NameUTF8 = UTF8TEXT("EvaluateContext"), .Pointer = &UFuzzyAIConsideration::execEvaluateContext },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyAIConsideration_Evaluate, "Evaluate" }, // 3901213894
		{ &Z_Construct_UFunction_UFuzzyAIConsideration_EvaluateContext, "EvaluateContext" }, // 3376780167
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIConsideration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIConsideration_Statics
UObject* (*const Z_Construct_UClass_UFuzzyAIConsideration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIConsideration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIConsideration_Statics::ClassParams = {
	&UFuzzyAIConsideration::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIConsideration_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIConsideration_Statics::Class_MetaDataParams)
};
void UFuzzyAIConsideration::StaticRegisterNativesUFuzzyAIConsideration()
{
	UClass* Class = UFuzzyAIConsideration::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyAIConsideration_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyAIConsideration()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIConsideration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIConsideration.OuterSingleton, Z_Construct_UClass_UFuzzyAIConsideration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIConsideration.OuterSingleton;
}
UFuzzyAIConsideration::UFuzzyAIConsideration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIConsideration);
UFuzzyAIConsideration::~UFuzzyAIConsideration() {}
// ********** End Class UFuzzyAIConsideration ******************************************************

// ********** Begin Class UFuzzyAIInputConsideration ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIInputConsideration;
UClass* UFuzzyAIInputConsideration::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIInputConsideration;
	if (!Z_Registration_Info_UClass_UFuzzyAIInputConsideration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIInputConsideration"),
			Z_Registration_Info_UClass_UFuzzyAIInputConsideration.InnerSingleton,
			StaticRegisterNativesUFuzzyAIInputConsideration,
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
	return Z_Registration_Info_UClass_UFuzzyAIInputConsideration.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIInputConsideration_NoRegister()
{
	return UFuzzyAIInputConsideration::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIInputConsideration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Observation / Interpretation Curve" },
		{ "IncludePath", "Utility/FuzzyAIConsideration.h" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factor_MetaData[] = {
		{ "Category", "Scoring" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIInputConsideration constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Factor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIInputConsideration constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIInputConsideration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIInputConsideration_Statics

// ********** Begin Class UFuzzyAIInputConsideration Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIInputConsideration, Factor), Z_Construct_UScriptStruct_FFuzzyAIFactor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factor_MetaData), NewProp_Factor_MetaData) }; // 2838162537
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::NewProp_Factor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIInputConsideration Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyAIConsideration,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::ClassParams = {
	&UFuzzyAIInputConsideration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::Class_MetaDataParams)
};
void UFuzzyAIInputConsideration::StaticRegisterNativesUFuzzyAIInputConsideration()
{
}
UClass* Z_Construct_UClass_UFuzzyAIInputConsideration()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIInputConsideration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIInputConsideration.OuterSingleton, Z_Construct_UClass_UFuzzyAIInputConsideration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIInputConsideration.OuterSingleton;
}
UFuzzyAIInputConsideration::UFuzzyAIInputConsideration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIInputConsideration);
UFuzzyAIInputConsideration::~UFuzzyAIInputConsideration() {}
// ********** End Class UFuzzyAIInputConsideration *************************************************

// ********** Begin ScriptStruct FFuzzyAIWeightedSample ********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIWeightedSample); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIWeightedSample); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Sample" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Sample" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIWeightedSample constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIWeightedSample constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIWeightedSample>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIWeightedSample;
class UScriptStruct* FFuzzyAIWeightedSample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIWeightedSample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIWeightedSample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIWeightedSample, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIWeightedSample"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIWeightedSample.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIWeightedSample Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIWeightedSample, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIWeightedSample, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIWeightedSample Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIWeightedSample",
	Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::PropPointers),
	sizeof(FFuzzyAIWeightedSample),
	alignof(FFuzzyAIWeightedSample),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIWeightedSample()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIWeightedSample.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIWeightedSample.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIWeightedSample.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIWeightedSample **********************************************

// ********** Begin Class UFuzzyAIUncertainConsideration Function GetSamples ***********************
struct FuzzyAIUncertainConsideration_eventGetSamples_Parms
{
	FFuzzyAIContext Context;
	TArray<FFuzzyAIWeightedSample> ReturnValue;
};
static FName NAME_UFuzzyAIUncertainConsideration_GetSamples = FName(TEXT("GetSamples"));
TArray<FFuzzyAIWeightedSample> UFuzzyAIUncertainConsideration::GetSamples(FFuzzyAIContext const& Context) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIUncertainConsideration_GetSamples);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIUncertainConsideration_eventGetSamples_Parms Parms;
		Parms.Context=Context;
		const_cast<UFuzzyAIUncertainConsideration*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFuzzyAIUncertainConsideration*>(this)->GetSamples_Implementation(Context);
	}
}
struct Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Utility" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSamples constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSamples constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSamples Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIUncertainConsideration_eventGetSamples_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1944402176
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIWeightedSample, METADATA_PARAMS(0, nullptr) }; // 2261357803
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIUncertainConsideration_eventGetSamples_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2261357803
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::PropPointers) < 2048);
// ********** End Function GetSamples Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIUncertainConsideration, nullptr, "GetSamples", 	Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::PropPointers), 
sizeof(FuzzyAIUncertainConsideration_eventGetSamples_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIUncertainConsideration_eventGetSamples_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIUncertainConsideration::execGetSamples)
{
	P_GET_STRUCT_REF(FFuzzyAIContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFuzzyAIWeightedSample>*)Z_Param__Result=P_THIS->GetSamples_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIUncertainConsideration Function GetSamples *************************

// ********** Begin Class UFuzzyAIUncertainConsideration *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIUncertainConsideration;
UClass* UFuzzyAIUncertainConsideration::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIUncertainConsideration;
	if (!Z_Registration_Info_UClass_UFuzzyAIUncertainConsideration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIUncertainConsideration"),
			Z_Registration_Info_UClass_UFuzzyAIUncertainConsideration.InnerSingleton,
			StaticRegisterNativesUFuzzyAIUncertainConsideration,
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
	return Z_Registration_Info_UClass_UFuzzyAIUncertainConsideration.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIUncertainConsideration_NoRegister()
{
	return UFuzzyAIUncertainConsideration::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implements discrete Eq.7. Override GetSamples to supply a changing belief distribution. */" },
#endif
		{ "DisplayName", "Uncertain Input Utility" },
		{ "IncludePath", "Utility/FuzzyAIConsideration.h" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements discrete Eq.7. Override GetSamples to supply a changing belief distribution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UtilityResponse_MetaData[] = {
		{ "Category", "Scoring" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[] = {
		{ "Category", "Uncertainty" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIConsideration.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIUncertainConsideration constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_UtilityResponse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIUncertainConsideration constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSamples"), .Pointer = &UFuzzyAIUncertainConsideration::execGetSamples },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyAIUncertainConsideration_GetSamples, "GetSamples" }, // 1913898801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIUncertainConsideration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics

// ********** Begin Class UFuzzyAIUncertainConsideration Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::NewProp_UtilityResponse = { "UtilityResponse", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIUncertainConsideration, UtilityResponse), Z_Construct_UScriptStruct_FFuzzyAIResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UtilityResponse_MetaData), NewProp_UtilityResponse_MetaData) }; // 3877660388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIWeightedSample, METADATA_PARAMS(0, nullptr) }; // 2261357803
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIUncertainConsideration, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Samples_MetaData), NewProp_Samples_MetaData) }; // 2261357803
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::NewProp_UtilityResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::NewProp_Samples_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::NewProp_Samples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIUncertainConsideration Property Definitions ************************
UObject* (*const Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyAIConsideration,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::ClassParams = {
	&UFuzzyAIUncertainConsideration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::Class_MetaDataParams)
};
void UFuzzyAIUncertainConsideration::StaticRegisterNativesUFuzzyAIUncertainConsideration()
{
	UClass* Class = UFuzzyAIUncertainConsideration::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyAIUncertainConsideration()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIUncertainConsideration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIUncertainConsideration.OuterSingleton, Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIUncertainConsideration.OuterSingleton;
}
UFuzzyAIUncertainConsideration::UFuzzyAIUncertainConsideration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIUncertainConsideration);
UFuzzyAIUncertainConsideration::~UFuzzyAIUncertainConsideration() {}
// ********** End Class UFuzzyAIUncertainConsideration *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIWeightedSample::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics::NewStructOps, TEXT("FuzzyAIWeightedSample"),&Z_Registration_Info_UScriptStruct_FFuzzyAIWeightedSample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIWeightedSample), 2261357803U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIConsideration, UFuzzyAIConsideration::StaticClass, TEXT("UFuzzyAIConsideration"), &Z_Registration_Info_UClass_UFuzzyAIConsideration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIConsideration), 581797676U) },
		{ Z_Construct_UClass_UFuzzyAIInputConsideration, UFuzzyAIInputConsideration::StaticClass, TEXT("UFuzzyAIInputConsideration"), &Z_Registration_Info_UClass_UFuzzyAIInputConsideration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIInputConsideration), 1440290309U) },
		{ Z_Construct_UClass_UFuzzyAIUncertainConsideration, UFuzzyAIUncertainConsideration::StaticClass, TEXT("UFuzzyAIUncertainConsideration"), &Z_Registration_Info_UClass_UFuzzyAIUncertainConsideration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIUncertainConsideration), 2003804604U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h__Script_FuzzyAIRuntime_1501358885{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

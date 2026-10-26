// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/FuzzyAIInterpretation.h"
#include "Utility/FuzzyAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIInterpretation() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInputInterpretation();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInputInterpretation_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInterpretation();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInterpretation_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIRuleInterpretation();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIRuleInterpretation_NoRegister();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIFactor();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRule();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIInterpretation Function Evaluate *********************************
struct FuzzyAIInterpretation_eventEvaluate_Parms
{
	FFuzzyAIContext Context;
	float Value;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	FuzzyAIInterpretation_eventEvaluate_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UFuzzyAIInterpretation_Evaluate = FName(TEXT("Evaluate"));
bool UFuzzyAIInterpretation::Evaluate(FFuzzyAIContext const& Context, float& Value) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIInterpretation_Evaluate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIInterpretation_eventEvaluate_Parms Parms;
		Parms.Context=Context;
		Parms.Value=Value;
		const_cast<UFuzzyAIInterpretation*>(this)->ProcessEvent(Func,&Parms);
		Value=Parms.Value;
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFuzzyAIInterpretation*>(this)->Evaluate_Implementation(Context, Value);
	}
}
struct Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Interpretation" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Evaluate constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Evaluate constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Evaluate Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIInterpretation_eventEvaluate_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 1944402176
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIInterpretation_eventEvaluate_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyAIInterpretation_eventEvaluate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyAIInterpretation_eventEvaluate_Parms), &Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::PropPointers) < 2048);
// ********** End Function Evaluate Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIInterpretation, nullptr, "Evaluate", 	Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::PropPointers), 
sizeof(FuzzyAIInterpretation_eventEvaluate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIInterpretation_eventEvaluate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIInterpretation::execEvaluate)
{
	P_GET_STRUCT_REF(FFuzzyAIContext,Z_Param_Out_Context);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Evaluate_Implementation(Z_Param_Out_Context,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIInterpretation Function Evaluate ***********************************

// ********** Begin Class UFuzzyAIInterpretation ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIInterpretation;
UClass* UFuzzyAIInterpretation::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIInterpretation;
	if (!Z_Registration_Info_UClass_UFuzzyAIInterpretation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIInterpretation"),
			Z_Registration_Info_UClass_UFuzzyAIInterpretation.InnerSingleton,
			StaticRegisterNativesUFuzzyAIInterpretation,
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
	return Z_Registration_Info_UClass_UFuzzyAIInterpretation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIInterpretation_NoRegister()
{
	return UFuzzyAIInterpretation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIInterpretation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utility/FuzzyAIInterpretation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpretationId_MetaData[] = {
		{ "Category", "Interpretation" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIInterpretation constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InterpretationId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIInterpretation constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Evaluate"), .Pointer = &UFuzzyAIInterpretation::execEvaluate },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyAIInterpretation_Evaluate, "Evaluate" }, // 633214988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIInterpretation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIInterpretation_Statics

// ********** Begin Class UFuzzyAIInterpretation Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyAIInterpretation_Statics::NewProp_InterpretationId = { "InterpretationId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIInterpretation, InterpretationId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpretationId_MetaData), NewProp_InterpretationId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIInterpretation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIInterpretation_Statics::NewProp_InterpretationId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInterpretation_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIInterpretation Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UFuzzyAIInterpretation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInterpretation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIInterpretation_Statics::ClassParams = {
	&UFuzzyAIInterpretation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFuzzyAIInterpretation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInterpretation_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInterpretation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIInterpretation_Statics::Class_MetaDataParams)
};
void UFuzzyAIInterpretation::StaticRegisterNativesUFuzzyAIInterpretation()
{
	UClass* Class = UFuzzyAIInterpretation::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyAIInterpretation_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyAIInterpretation()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIInterpretation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIInterpretation.OuterSingleton, Z_Construct_UClass_UFuzzyAIInterpretation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIInterpretation.OuterSingleton;
}
UFuzzyAIInterpretation::UFuzzyAIInterpretation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIInterpretation);
UFuzzyAIInterpretation::~UFuzzyAIInterpretation() {}
// ********** End Class UFuzzyAIInterpretation *****************************************************

// ********** Begin ScriptStruct FFuzzyAIRule ******************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIRule_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIRule); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIRule); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Combine_MetaData[] = {
		{ "Category", "Rule" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Consequent_MetaData[] = {
		{ "Category", "Rule" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Rule" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIRule constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Conditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Combine_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Combine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Consequent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIRule constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIRule_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIRule;
class UScriptStruct* FFuzzyAIRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIRule, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIRule"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIRule.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIRule Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIFactor, METADATA_PARAMS(0, nullptr) }; // 2838162537
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIRule, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_MetaData), NewProp_Conditions_MetaData) }; // 2838162537
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Combine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Combine = { "Combine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIRule, Combine), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAICombine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Combine_MetaData), NewProp_Combine_MetaData) }; // 3083912316
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Consequent = { "Consequent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIRule, Consequent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Consequent_MetaData), NewProp_Consequent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIRule, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Conditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Conditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Combine_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Combine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Consequent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIRule Property Definitions ***********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIRule",
	Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::PropPointers),
	sizeof(FFuzzyAIRule),
	alignof(FFuzzyAIRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRule()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIRule.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIRule.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIRule ********************************************************

// ********** Begin Class UFuzzyAIRuleInterpretation ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIRuleInterpretation;
UClass* UFuzzyAIRuleInterpretation::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIRuleInterpretation;
	if (!Z_Registration_Info_UClass_UFuzzyAIRuleInterpretation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIRuleInterpretation"),
			Z_Registration_Info_UClass_UFuzzyAIRuleInterpretation.InnerSingleton,
			StaticRegisterNativesUFuzzyAIRuleInterpretation,
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
	return Z_Registration_Info_UClass_UFuzzyAIRuleInterpretation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIRuleInterpretation_NoRegister()
{
	return UFuzzyAIRuleInterpretation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Fuzzy Rule Interpretation" },
		{ "IncludePath", "Utility/FuzzyAIInterpretation.h" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIRuleInterpretation constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIRuleInterpretation constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIRuleInterpretation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics

// ********** Begin Class UFuzzyAIRuleInterpretation Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIRule, METADATA_PARAMS(0, nullptr) }; // 1376423066
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIRuleInterpretation, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) }; // 1376423066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::NewProp_Rules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::NewProp_Rules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIRuleInterpretation Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyAIInterpretation,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::ClassParams = {
	&UFuzzyAIRuleInterpretation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::Class_MetaDataParams)
};
void UFuzzyAIRuleInterpretation::StaticRegisterNativesUFuzzyAIRuleInterpretation()
{
}
UClass* Z_Construct_UClass_UFuzzyAIRuleInterpretation()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIRuleInterpretation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIRuleInterpretation.OuterSingleton, Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIRuleInterpretation.OuterSingleton;
}
UFuzzyAIRuleInterpretation::UFuzzyAIRuleInterpretation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIRuleInterpretation);
UFuzzyAIRuleInterpretation::~UFuzzyAIRuleInterpretation() {}
// ********** End Class UFuzzyAIRuleInterpretation *************************************************

// ********** Begin Class UFuzzyAIInputInterpretation **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIInputInterpretation;
UClass* UFuzzyAIInputInterpretation::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIInputInterpretation;
	if (!Z_Registration_Info_UClass_UFuzzyAIInputInterpretation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIInputInterpretation"),
			Z_Registration_Info_UClass_UFuzzyAIInputInterpretation.InnerSingleton,
			StaticRegisterNativesUFuzzyAIInputInterpretation,
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
	return Z_Registration_Info_UClass_UFuzzyAIInputInterpretation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIInputInterpretation_NoRegister()
{
	return UFuzzyAIInputInterpretation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Input Curve Interpretation" },
		{ "IncludePath", "Utility/FuzzyAIInterpretation.h" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factor_MetaData[] = {
		{ "Category", "Interpretation" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIInterpretation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIInputInterpretation constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Factor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIInputInterpretation constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIInputInterpretation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics

// ********** Begin Class UFuzzyAIInputInterpretation Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIInputInterpretation, Factor), Z_Construct_UScriptStruct_FFuzzyAIFactor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factor_MetaData), NewProp_Factor_MetaData) }; // 2838162537
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::NewProp_Factor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIInputInterpretation Property Definitions ***************************
UObject* (*const Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyAIInterpretation,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::ClassParams = {
	&UFuzzyAIInputInterpretation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::Class_MetaDataParams)
};
void UFuzzyAIInputInterpretation::StaticRegisterNativesUFuzzyAIInputInterpretation()
{
}
UClass* Z_Construct_UClass_UFuzzyAIInputInterpretation()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIInputInterpretation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIInputInterpretation.OuterSingleton, Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIInputInterpretation.OuterSingleton;
}
UFuzzyAIInputInterpretation::UFuzzyAIInputInterpretation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIInputInterpretation);
UFuzzyAIInputInterpretation::~UFuzzyAIInputInterpretation() {}
// ********** End Class UFuzzyAIInputInterpretation ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIRule::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIRule_Statics::NewStructOps, TEXT("FuzzyAIRule"),&Z_Registration_Info_UScriptStruct_FFuzzyAIRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIRule), 1376423066U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIInterpretation, UFuzzyAIInterpretation::StaticClass, TEXT("UFuzzyAIInterpretation"), &Z_Registration_Info_UClass_UFuzzyAIInterpretation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIInterpretation), 3372062506U) },
		{ Z_Construct_UClass_UFuzzyAIRuleInterpretation, UFuzzyAIRuleInterpretation::StaticClass, TEXT("UFuzzyAIRuleInterpretation"), &Z_Registration_Info_UClass_UFuzzyAIRuleInterpretation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIRuleInterpretation), 1721711354U) },
		{ Z_Construct_UClass_UFuzzyAIInputInterpretation, UFuzzyAIInputInterpretation::StaticClass, TEXT("UFuzzyAIInputInterpretation"), &Z_Registration_Info_UClass_UFuzzyAIInputInterpretation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIInputInterpretation), 1276837069U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h__Script_FuzzyAIRuntime_2080482672{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

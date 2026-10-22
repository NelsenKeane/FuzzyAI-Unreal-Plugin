// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/ObservationAsset.h"
#include "Observation/ObservationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeObservationAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIObservationAsset();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIObservationAsset_NoRegister();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationSubject();
FUZZYAIRUNTIME_API UEnum* Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationValueType();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationContext();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationResult();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIObservationAsset Function GetSubjectActor ************************
struct Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics
{
	struct FuzzyAIObservationAsset_eventGetSubjectActor_Parms
	{
		FFuzzyAIObservationContext Context;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom observations use Context.Subjects, positions or other project-specific sources. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom observations use Context.Subjects, positions or other project-specific sources." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSubjectActor constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSubjectActor constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSubjectActor Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIObservationAsset_eventGetSubjectActor_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIObservationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 3517025884
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIObservationAsset_eventGetSubjectActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::PropPointers) < 2048);
// ********** End Function GetSubjectActor Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIObservationAsset, nullptr, "GetSubjectActor", 	Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::FuzzyAIObservationAsset_eventGetSubjectActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::FuzzyAIObservationAsset_eventGetSubjectActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIObservationAsset::execGetSubjectActor)
{
	P_GET_STRUCT_REF(FFuzzyAIObservationContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetSubjectActor(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIObservationAsset Function GetSubjectActor **************************

// ********** Begin Class UFuzzyAIObservationAsset Function Observe ********************************
struct Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics
{
	struct FuzzyAIObservationAsset_eventObserve_Parms
	{
		FFuzzyAIObservationContext Context;
		FFuzzyAIObservationResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Entry point for callers; checks the Blueprint result against the configured type. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry point for callers; checks the Blueprint result against the configured type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Observe constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Observe constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Observe Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIObservationAsset_eventObserve_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIObservationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 3517025884
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIObservationAsset_eventObserve_Parms, ReturnValue), Z_Construct_UScriptStruct_FFuzzyAIObservationResult, METADATA_PARAMS(0, nullptr) }; // 1088075548
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::PropPointers) < 2048);
// ********** End Function Observe Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIObservationAsset, nullptr, "Observe", 	Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::FuzzyAIObservationAsset_eventObserve_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::FuzzyAIObservationAsset_eventObserve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIObservationAsset::execObserve)
{
	P_GET_STRUCT_REF(FFuzzyAIObservationContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFuzzyAIObservationResult*)Z_Param__Result=P_THIS->Observe(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIObservationAsset Function Observe **********************************

// ********** Begin Class UFuzzyAIObservationAsset Function ReadObservation ************************
struct FuzzyAIObservationAsset_eventReadObservation_Parms
{
	FFuzzyAIObservationContext Context;
	FFuzzyAIObservationResult ReturnValue;
};
static FName NAME_UFuzzyAIObservationAsset_ReadObservation = FName(TEXT("ReadObservation"));
FFuzzyAIObservationResult UFuzzyAIObservationAsset::ReadObservation(FFuzzyAIObservationContext const& Context) const
{
	UFunction* Func = FindFunctionChecked(NAME_UFuzzyAIObservationAsset_ReadObservation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FuzzyAIObservationAsset_eventReadObservation_Parms Parms;
		Parms.Context=Context;
		const_cast<UFuzzyAIObservationAsset*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UFuzzyAIObservationAsset*>(this)->ReadObservation_Implementation(Context);
	}
}
struct Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override in Blueprint. Return a typed result; do not store actor state on this asset. */" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override in Blueprint. Return a typed result; do not store actor state on this asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadObservation constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadObservation constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadObservation Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIObservationAsset_eventReadObservation_Parms, Context), Z_Construct_UScriptStruct_FFuzzyAIObservationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 3517025884
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyAIObservationAsset_eventReadObservation_Parms, ReturnValue), Z_Construct_UScriptStruct_FFuzzyAIObservationResult, METADATA_PARAMS(0, nullptr) }; // 1088075548
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::PropPointers) < 2048);
// ********** End Function ReadObservation Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyAIObservationAsset, nullptr, "ReadObservation", 	Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::PropPointers), 
sizeof(FuzzyAIObservationAsset_eventReadObservation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FuzzyAIObservationAsset_eventReadObservation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyAIObservationAsset::execReadObservation)
{
	P_GET_STRUCT_REF(FFuzzyAIObservationContext,Z_Param_Out_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFuzzyAIObservationResult*)Z_Param__Result=P_THIS->ReadObservation_Implementation(Z_Param_Out_Context);
	P_NATIVE_END;
}
// ********** End Class UFuzzyAIObservationAsset Function ReadObservation **************************

// ********** Begin Class UFuzzyAIObservationAsset *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIObservationAsset;
UClass* UFuzzyAIObservationAsset::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIObservationAsset;
	if (!Z_Registration_Info_UClass_UFuzzyAIObservationAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIObservationAsset"),
			Z_Registration_Info_UClass_UFuzzyAIObservationAsset.InnerSingleton,
			StaticRegisterNativesUFuzzyAIObservationAsset,
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
	return Z_Registration_Info_UClass_UFuzzyAIObservationAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIObservationAsset_NoRegister()
{
	return UFuzzyAIObservationAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIObservationAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shared, stateless reading definition. Per-observer history belongs in runtime objects. */" },
#endif
		{ "IncludePath", "Observation/ObservationAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Observation/ObservationAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared, stateless reading definition. Per-observer history belongs in runtime objects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservationKey_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationAsset.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedValueType_MetaData[] = {
		{ "Category", "Observation" },
		{ "ModuleRelativePath", "Public/Observation/ObservationAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIObservationAsset constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObservationKey;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Subject_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Subject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExpectedValueType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExpectedValueType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIObservationAsset constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSubjectActor"), .Pointer = &UFuzzyAIObservationAsset::execGetSubjectActor },
		{ .NameUTF8 = UTF8TEXT("Observe"), .Pointer = &UFuzzyAIObservationAsset::execObserve },
		{ .NameUTF8 = UTF8TEXT("ReadObservation"), .Pointer = &UFuzzyAIObservationAsset::execReadObservation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyAIObservationAsset_GetSubjectActor, "GetSubjectActor" }, // 4127914008
		{ &Z_Construct_UFunction_UFuzzyAIObservationAsset_Observe, "Observe" }, // 2543963516
		{ &Z_Construct_UFunction_UFuzzyAIObservationAsset_ReadObservation, "ReadObservation" }, // 2127394841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIObservationAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIObservationAsset_Statics

// ********** Begin Class UFuzzyAIObservationAsset Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_ObservationKey = { "ObservationKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationAsset, ObservationKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservationKey_MetaData), NewProp_ObservationKey_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationAsset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_Subject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationAsset, Subject), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationSubject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subject_MetaData), NewProp_Subject_MetaData) }; // 2698905573
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_ExpectedValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_ExpectedValueType = { "ExpectedValueType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationAsset, ExpectedValueType), Z_Construct_UEnum_FuzzyAIRuntime_EFuzzyAIObservationValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedValueType_MetaData), NewProp_ExpectedValueType_MetaData) }; // 1928944902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_ObservationKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_Subject_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_Subject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_ExpectedValueType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::NewProp_ExpectedValueType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIObservationAsset Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::ClassParams = {
	&UFuzzyAIObservationAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::Class_MetaDataParams)
};
void UFuzzyAIObservationAsset::StaticRegisterNativesUFuzzyAIObservationAsset()
{
	UClass* Class = UFuzzyAIObservationAsset::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyAIObservationAsset()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIObservationAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIObservationAsset.OuterSingleton, Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIObservationAsset.OuterSingleton;
}
UFuzzyAIObservationAsset::UFuzzyAIObservationAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIObservationAsset);
UFuzzyAIObservationAsset::~UFuzzyAIObservationAsset() {}
// ********** End Class UFuzzyAIObservationAsset ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationAsset_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIObservationAsset, UFuzzyAIObservationAsset::StaticClass, TEXT("UFuzzyAIObservationAsset"), &Z_Registration_Info_UClass_UFuzzyAIObservationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIObservationAsset), 1098141948U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationAsset_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationAsset_h__Script_FuzzyAIRuntime_3355016394{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationAsset_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationAsset_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

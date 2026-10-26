// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/FuzzyAIDecisionRuntime.h"
#include "Utility/FuzzyAIDebugTypes.h"
#include "Utility/FuzzyAITypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIDecisionRuntime() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIAction_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIComponent_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIDecisionRuntime();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIDecisionRuntime_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInterpretation_NoRegister();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIActionScore();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIDecisionDebugSnapshot();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIDecisionRuntime **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIDecisionRuntime;
UClass* UFuzzyAIDecisionRuntime::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIDecisionRuntime;
	if (!Z_Registration_Info_UClass_UFuzzyAIDecisionRuntime.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIDecisionRuntime"),
			Z_Registration_Info_UClass_UFuzzyAIDecisionRuntime.InnerSingleton,
			StaticRegisterNativesUFuzzyAIDecisionRuntime,
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
	return Z_Registration_Info_UClass_UFuzzyAIDecisionRuntime.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIDecisionRuntime_NoRegister()
{
	return UFuzzyAIDecisionRuntime::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/FuzzyAIDecisionRuntime.h" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpretations_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scores_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionRuntime.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIDecisionRuntime constinit property declarations ******************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interpretations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Interpretations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Active;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scores_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scores;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Debug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIDecisionRuntime constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIDecisionRuntime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics

// ********** Begin Class UFuzzyAIDecisionRuntime Property Definitions *****************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIDecisionRuntime, Component), Z_Construct_UClass_UFuzzyAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyAIAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIDecisionRuntime, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Interpretations_Inner = { "Interpretations", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyAIInterpretation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Interpretations = { "Interpretations", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIDecisionRuntime, Interpretations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpretations_MetaData), NewProp_Interpretations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIDecisionRuntime, Active), Z_Construct_UClass_UFuzzyAIAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Active_MetaData), NewProp_Active_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Scores_Inner = { "Scores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIActionScore, METADATA_PARAMS(0, nullptr) }; // 1868986776
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Scores = { "Scores", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIDecisionRuntime, Scores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scores_MetaData), NewProp_Scores_MetaData) }; // 1868986776
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue, METADATA_PARAMS(0, nullptr) }; // 4256652181
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIDecisionRuntime, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 4256652181
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIDecisionRuntime, Debug), Z_Construct_UScriptStruct_FFuzzyAIDecisionDebugSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_MetaData), NewProp_Debug_MetaData) }; // 3098445941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Interpretations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Interpretations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Active,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Scores_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Scores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::NewProp_Debug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIDecisionRuntime Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::ClassParams = {
	&UFuzzyAIDecisionRuntime::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::Class_MetaDataParams)
};
void UFuzzyAIDecisionRuntime::StaticRegisterNativesUFuzzyAIDecisionRuntime()
{
}
UClass* Z_Construct_UClass_UFuzzyAIDecisionRuntime()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIDecisionRuntime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIDecisionRuntime.OuterSingleton, Z_Construct_UClass_UFuzzyAIDecisionRuntime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIDecisionRuntime.OuterSingleton;
}
UFuzzyAIDecisionRuntime::UFuzzyAIDecisionRuntime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIDecisionRuntime);
UFuzzyAIDecisionRuntime::~UFuzzyAIDecisionRuntime() {}
// ********** End Class UFuzzyAIDecisionRuntime ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionRuntime_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIDecisionRuntime, UFuzzyAIDecisionRuntime::StaticClass, TEXT("UFuzzyAIDecisionRuntime"), &Z_Registration_Info_UClass_UFuzzyAIDecisionRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIDecisionRuntime), 99968840U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionRuntime_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionRuntime_h__Script_FuzzyAIRuntime_3906928723{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionRuntime_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionRuntime_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/FuzzyAIPipeline.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIPipeline() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIPipeline();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIPipeline_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyInterpreter_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyProfileProcessor_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyUtilitySelector_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIPipeline *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIPipeline;
UClass* UFuzzyAIPipeline::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIPipeline;
	if (!Z_Registration_Info_UClass_UFuzzyAIPipeline.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIPipeline"),
			Z_Registration_Info_UClass_UFuzzyAIPipeline.InnerSingleton,
			StaticRegisterNativesUFuzzyAIPipeline,
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
	return Z_Registration_Info_UClass_UFuzzyAIPipeline.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIPipeline_NoRegister()
{
	return UFuzzyAIPipeline::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-enemy manual preview. Scheduling and automatic execution are deliberately not implemented. */" },
#endif
		{ "IncludePath", "Core/FuzzyAIPipeline.h" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIPipeline.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-enemy manual preview. Scheduling and automatic execution are deliberately not implemented." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileProcessor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpreter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UtilitySelector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/FuzzyAIPipeline.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIPipeline constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfileProcessor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interpreter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UtilitySelector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIPipeline constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIPipeline_Statics

// ********** Begin Class UFuzzyAIPipeline Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIPipeline_Statics::NewProp_ProfileProcessor = { "ProfileProcessor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIPipeline, ProfileProcessor), Z_Construct_UClass_UFuzzyProfileProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileProcessor_MetaData), NewProp_ProfileProcessor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIPipeline_Statics::NewProp_Interpreter = { "Interpreter", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIPipeline, Interpreter), Z_Construct_UClass_UFuzzyInterpreter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpreter_MetaData), NewProp_Interpreter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIPipeline_Statics::NewProp_UtilitySelector = { "UtilitySelector", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIPipeline, UtilitySelector), Z_Construct_UClass_UFuzzyUtilitySelector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UtilitySelector_MetaData), NewProp_UtilitySelector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIPipeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIPipeline_Statics::NewProp_ProfileProcessor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIPipeline_Statics::NewProp_Interpreter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIPipeline_Statics::NewProp_UtilitySelector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIPipeline_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIPipeline Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UFuzzyAIPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIPipeline_Statics::ClassParams = {
	&UFuzzyAIPipeline::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIPipeline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIPipeline_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIPipeline_Statics::Class_MetaDataParams)
};
void UFuzzyAIPipeline::StaticRegisterNativesUFuzzyAIPipeline()
{
}
UClass* Z_Construct_UClass_UFuzzyAIPipeline()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIPipeline.OuterSingleton, Z_Construct_UClass_UFuzzyAIPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIPipeline.OuterSingleton;
}
UFuzzyAIPipeline::UFuzzyAIPipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIPipeline);
UFuzzyAIPipeline::~UFuzzyAIPipeline() {}
// ********** End Class UFuzzyAIPipeline ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIPipeline, UFuzzyAIPipeline::StaticClass, TEXT("UFuzzyAIPipeline"), &Z_Registration_Info_UClass_UFuzzyAIPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIPipeline), 2518082798U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h__Script_FuzzyAIRuntime_2782964724{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

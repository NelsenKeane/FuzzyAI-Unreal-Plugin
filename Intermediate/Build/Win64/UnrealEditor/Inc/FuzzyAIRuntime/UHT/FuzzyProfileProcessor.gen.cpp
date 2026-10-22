// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Profiling/FuzzyProfileProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyProfileProcessor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyProfileProcessor();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyProfileProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyProfileProcessor ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyProfileProcessor;
UClass* UFuzzyProfileProcessor::GetPrivateStaticClass()
{
	using TClass = UFuzzyProfileProcessor;
	if (!Z_Registration_Info_UClass_UFuzzyProfileProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyProfileProcessor"),
			Z_Registration_Info_UClass_UFuzzyProfileProcessor.InnerSingleton,
			StaticRegisterNativesUFuzzyProfileProcessor,
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
	return Z_Registration_Info_UClass_UFuzzyProfileProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyProfileProcessor_NoRegister()
{
	return UFuzzyProfileProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyProfileProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-enemy extension point for opportunity counts, smoothing and confidence. */" },
#endif
		{ "IncludePath", "Profiling/FuzzyProfileProcessor.h" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-enemy extension point for opportunity counts, smoothing and confidence." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyProfileProcessor constinit property declarations *******************
// ********** End Class UFuzzyProfileProcessor constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyProfileProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyProfileProcessor_Statics
UObject* (*const Z_Construct_UClass_UFuzzyProfileProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyProfileProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyProfileProcessor_Statics::ClassParams = {
	&UFuzzyProfileProcessor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyProfileProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyProfileProcessor_Statics::Class_MetaDataParams)
};
void UFuzzyProfileProcessor::StaticRegisterNativesUFuzzyProfileProcessor()
{
}
UClass* Z_Construct_UClass_UFuzzyProfileProcessor()
{
	if (!Z_Registration_Info_UClass_UFuzzyProfileProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyProfileProcessor.OuterSingleton, Z_Construct_UClass_UFuzzyProfileProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyProfileProcessor.OuterSingleton;
}
UFuzzyProfileProcessor::UFuzzyProfileProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyProfileProcessor);
UFuzzyProfileProcessor::~UFuzzyProfileProcessor() {}
// ********** End Class UFuzzyProfileProcessor *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyProfileProcessor, UFuzzyProfileProcessor::StaticClass, TEXT("UFuzzyProfileProcessor"), &Z_Registration_Info_UClass_UFuzzyProfileProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyProfileProcessor), 1436729077U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h__Script_FuzzyAIRuntime_682037719{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

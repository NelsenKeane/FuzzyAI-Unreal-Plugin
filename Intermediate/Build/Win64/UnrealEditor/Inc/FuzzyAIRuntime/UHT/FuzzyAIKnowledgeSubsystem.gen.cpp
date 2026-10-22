// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Knowledge/FuzzyAIKnowledgeSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIKnowledgeSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIKnowledgeSubsystem ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIKnowledgeSubsystem;
UClass* UFuzzyAIKnowledgeSubsystem::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIKnowledgeSubsystem;
	if (!Z_Registration_Info_UClass_UFuzzyAIKnowledgeSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIKnowledgeSubsystem"),
			Z_Registration_Info_UClass_UFuzzyAIKnowledgeSubsystem.InnerSingleton,
			StaticRegisterNativesUFuzzyAIKnowledgeSubsystem,
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
	return Z_Registration_Info_UClass_UFuzzyAIKnowledgeSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_NoRegister()
{
	return UFuzzyAIKnowledgeSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Abstract sharing boundary; no instance is created for this class and no enemy evidence is published automatically. */" },
#endif
		{ "IncludePath", "Knowledge/FuzzyAIKnowledgeSubsystem.h" },
		{ "ModuleRelativePath", "Public/Knowledge/FuzzyAIKnowledgeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract sharing boundary; no instance is created for this class and no enemy evidence is published automatically." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIKnowledgeSubsystem constinit property declarations ***************
// ********** End Class UFuzzyAIKnowledgeSubsystem constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIKnowledgeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_Statics
UObject* (*const Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_Statics::ClassParams = {
	&UFuzzyAIKnowledgeSubsystem::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_Statics::Class_MetaDataParams)
};
void UFuzzyAIKnowledgeSubsystem::StaticRegisterNativesUFuzzyAIKnowledgeSubsystem()
{
}
UClass* Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIKnowledgeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIKnowledgeSubsystem.OuterSingleton, Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIKnowledgeSubsystem.OuterSingleton;
}
UFuzzyAIKnowledgeSubsystem::UFuzzyAIKnowledgeSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIKnowledgeSubsystem);
UFuzzyAIKnowledgeSubsystem::~UFuzzyAIKnowledgeSubsystem() {}
// ********** End Class UFuzzyAIKnowledgeSubsystem *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Knowledge_FuzzyAIKnowledgeSubsystem_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIKnowledgeSubsystem, UFuzzyAIKnowledgeSubsystem::StaticClass, TEXT("UFuzzyAIKnowledgeSubsystem"), &Z_Registration_Info_UClass_UFuzzyAIKnowledgeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIKnowledgeSubsystem), 1260717294U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Knowledge_FuzzyAIKnowledgeSubsystem_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Knowledge_FuzzyAIKnowledgeSubsystem_h__Script_FuzzyAIRuntime_1837838029{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Knowledge_FuzzyAIKnowledgeSubsystem_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Knowledge_FuzzyAIKnowledgeSubsystem_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/StandardObservations.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStandardObservations() {}

// ********** Begin Cross Module References ********************************************************
FUZZYAIOBSERVATION_API UClass* Z_Construct_UClass_UFuzzyAIDistanceObservation();
FUZZYAIOBSERVATION_API UClass* Z_Construct_UClass_UFuzzyAIDistanceObservation_NoRegister();
FUZZYAIOBSERVATION_API UClass* Z_Construct_UClass_UFuzzyAIObservationAsset();
FUZZYAIOBSERVATION_API UClass* Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation();
FUZZYAIOBSERVATION_API UClass* Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIObservation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIDistanceObservation **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIDistanceObservation;
UClass* UFuzzyAIDistanceObservation::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIDistanceObservation;
	if (!Z_Registration_Info_UClass_UFuzzyAIDistanceObservation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIDistanceObservation"),
			Z_Registration_Info_UClass_UFuzzyAIDistanceObservation.InnerSingleton,
			StaticRegisterNativesUFuzzyAIDistanceObservation,
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
	return Z_Registration_Info_UClass_UFuzzyAIDistanceObservation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIDistanceObservation_NoRegister()
{
	return UFuzzyAIDistanceObservation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIDistanceObservation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Native samples usable as Data Asset classes without authoring a Blueprint graph. */" },
#endif
		{ "IncludePath", "Observation/StandardObservations.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Observation/StandardObservations.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Native samples usable as Data Asset classes without authoring a Blueprint graph." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIDistanceObservation constinit property declarations **************
// ********** End Class UFuzzyAIDistanceObservation constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIDistanceObservation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIDistanceObservation_Statics
UObject* (*const Z_Construct_UClass_UFuzzyAIDistanceObservation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyAIObservationAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIObservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDistanceObservation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIDistanceObservation_Statics::ClassParams = {
	&UFuzzyAIDistanceObservation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDistanceObservation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIDistanceObservation_Statics::Class_MetaDataParams)
};
void UFuzzyAIDistanceObservation::StaticRegisterNativesUFuzzyAIDistanceObservation()
{
}
UClass* Z_Construct_UClass_UFuzzyAIDistanceObservation()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIDistanceObservation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIDistanceObservation.OuterSingleton, Z_Construct_UClass_UFuzzyAIDistanceObservation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIDistanceObservation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIDistanceObservation);
UFuzzyAIDistanceObservation::~UFuzzyAIDistanceObservation() {}
// ********** End Class UFuzzyAIDistanceObservation ************************************************

// ********** Begin Class UFuzzyAIVisibleTargetLocationObservation *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIVisibleTargetLocationObservation;
UClass* UFuzzyAIVisibleTargetLocationObservation::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIVisibleTargetLocationObservation;
	if (!Z_Registration_Info_UClass_UFuzzyAIVisibleTargetLocationObservation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIVisibleTargetLocationObservation"),
			Z_Registration_Info_UClass_UFuzzyAIVisibleTargetLocationObservation.InnerSingleton,
			StaticRegisterNativesUFuzzyAIVisibleTargetLocationObservation,
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
	return Z_Registration_Info_UClass_UFuzzyAIVisibleTargetLocationObservation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_NoRegister()
{
	return UFuzzyAIVisibleTargetLocationObservation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Observation/StandardObservations.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Observation/StandardObservations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIVisibleTargetLocationObservation constinit property declarations *
// ********** End Class UFuzzyAIVisibleTargetLocationObservation constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIVisibleTargetLocationObservation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_Statics
UObject* (*const Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyAIObservationAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIObservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_Statics::ClassParams = {
	&UFuzzyAIVisibleTargetLocationObservation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_Statics::Class_MetaDataParams)
};
void UFuzzyAIVisibleTargetLocationObservation::StaticRegisterNativesUFuzzyAIVisibleTargetLocationObservation()
{
}
UClass* Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIVisibleTargetLocationObservation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIVisibleTargetLocationObservation.OuterSingleton, Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIVisibleTargetLocationObservation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIVisibleTargetLocationObservation);
UFuzzyAIVisibleTargetLocationObservation::~UFuzzyAIVisibleTargetLocationObservation() {}
// ********** End Class UFuzzyAIVisibleTargetLocationObservation ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_StandardObservations_h__Script_FuzzyAIObservation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIDistanceObservation, UFuzzyAIDistanceObservation::StaticClass, TEXT("UFuzzyAIDistanceObservation"), &Z_Registration_Info_UClass_UFuzzyAIDistanceObservation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIDistanceObservation), 2002504156U) },
		{ Z_Construct_UClass_UFuzzyAIVisibleTargetLocationObservation, UFuzzyAIVisibleTargetLocationObservation::StaticClass, TEXT("UFuzzyAIVisibleTargetLocationObservation"), &Z_Registration_Info_UClass_UFuzzyAIVisibleTargetLocationObservation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIVisibleTargetLocationObservation), 787201290U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_StandardObservations_h__Script_FuzzyAIObservation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_StandardObservations_h__Script_FuzzyAIObservation_2195947555{
	TEXT("/Script/FuzzyAIObservation"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_StandardObservations_h__Script_FuzzyAIObservation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_StandardObservations_h__Script_FuzzyAIObservation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

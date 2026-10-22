#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Observation/ObservationTypes.h"
#include "ObservationAsset.generated.h"

/** Shared, stateless reading definition. Per-observer history belongs in runtime objects. */
UCLASS(BlueprintType, Blueprintable)
class FUZZYAIRUNTIME_API UFuzzyAIObservationAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    FName ObservationKey;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation", meta = (MultiLine = true))
    FText Description;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    EFuzzyAIObservationSubject Subject = EFuzzyAIObservationSubject::Self;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Observation")
    EFuzzyAIObservationValueType ExpectedValueType = EFuzzyAIObservationValueType::Float;

    /** Entry point for callers; checks the Blueprint result against the configured type. */
    UFUNCTION(BlueprintCallable, Category = "Fuzzy AI|Observation")
    FFuzzyAIObservationResult Observe(const FFuzzyAIObservationContext& Context) const;

    /** Override in Blueprint. Return a typed result; do not store actor state on this asset. */
    UFUNCTION(BlueprintNativeEvent, Category = "Fuzzy AI|Observation")
    FFuzzyAIObservationResult ReadObservation(const FFuzzyAIObservationContext& Context) const;
    virtual FFuzzyAIObservationResult ReadObservation_Implementation(const FFuzzyAIObservationContext& Context) const;

    /** Custom observations use Context.Subjects, positions or other project-specific sources. */
    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation")
    AActor* GetSubjectActor(const FFuzzyAIObservationContext& Context) const;
};

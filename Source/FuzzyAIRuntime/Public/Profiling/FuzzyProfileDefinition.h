#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FuzzyProfileDefinition.generated.h"

/** Shared configuration only. Opportunity definitions and estimators belong in the processor. */
UCLASS(BlueprintType)
class FUZZYAIRUNTIME_API UFuzzyProfileDefinition : public UDataAsset
{
    GENERATED_BODY()

public:
    UFuzzyProfileDefinition();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Profile")
    TArray<FName> BehaviorMetricKeys;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Profile")
    TArray<FName> PerformanceMetricKeys;

    /** Provisional authoring settings; no rolling window or smoothing is implemented yet. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Profile", meta = (ClampMin = "0.01"))
    float EvidenceWindowSeconds = 30.f;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Profile", meta = (ClampMin = "1"))
    int32 MinimumSamples = 5;
};

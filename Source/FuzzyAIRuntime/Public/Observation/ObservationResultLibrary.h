#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Observation/ObservationTypes.h"
#include "ObservationResultLibrary.generated.h"

UCLASS()
class FUZZYAIRUNTIME_API UFuzzyAIObservationResultLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Make Float Observation Result"))
    static FFuzzyAIObservationResult MakeFloatResult(float Value);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Make Integer Observation Result"))
    static FFuzzyAIObservationResult MakeIntegerResult(int32 Value);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Make Boolean Observation Result"))
    static FFuzzyAIObservationResult MakeBooleanResult(bool Value);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Make Vector Observation Result"))
    static FFuzzyAIObservationResult MakeVectorResult(FVector Value);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Make Object Observation Result"))
    static FFuzzyAIObservationResult MakeObjectResult(UObject* Value);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Make GameplayTag Observation Result"))
    static FFuzzyAIObservationResult MakeGameplayTagResult(FGameplayTag Value);

    UFUNCTION(BlueprintPure, Category = "Fuzzy AI|Observation", meta = (DisplayName = "Make Invalid Observation Result"))
    static FFuzzyAIObservationResult MakeInvalidResult(const FString& Reason);
};

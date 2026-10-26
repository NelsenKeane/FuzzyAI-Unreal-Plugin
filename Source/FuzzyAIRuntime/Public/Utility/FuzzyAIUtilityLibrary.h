// Blueprint helpers share the same validity-aware input and curve evaluation as native actions.
// Custom scoring graphs can reuse the runtime contract without casts to game-specific actors.
#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Utility/FuzzyAITypes.h"
#include "FuzzyAIUtilityLibrary.generated.h"

UCLASS()
class FUZZYAIRUNTIME_API UFuzzyAIUtilityLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure, Category="Fuzzy AI|Utility") static bool ReadInput(const FFuzzyAIContext& Context, const FFuzzyAIInput& Input, float& Value);
    UFUNCTION(BlueprintPure, Category="Fuzzy AI|Utility") static float EvaluateResponse(const FFuzzyAIResponse& Response, float Value);
    /** Adds an optional intermediate value while a real evaluation is being captured. */
    UFUNCTION(BlueprintCallable, Category="Fuzzy AI|Debug") static void RecordDebugValue(const FFuzzyAIContext& Context, FName Label, float Value);
};

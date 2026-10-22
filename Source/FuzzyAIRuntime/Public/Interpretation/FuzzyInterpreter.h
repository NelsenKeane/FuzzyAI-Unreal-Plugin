#pragma once

#include "CoreMinimal.h"
#include "Core/FuzzyAITypes.h"
#include "Profiling/FuzzyProfileTypes.h"
#include "Interpretation/FuzzyInterpretationTypes.h"
#include "FuzzyInterpreter.generated.h"

class UFuzzyModelAsset;

/** Per-enemy adapter boundary. No fuzzylite dependency or native engine handle exists yet. */
UCLASS()
class FUZZYAIRUNTIME_API UFuzzyInterpreter : public UObject
{
    GENERATED_BODY()

public:
    FFuzzyAIStageResult Interpret(const FFuzzyAIDecisionContext& Context,
        const FFuzzyAIProfileSnapshot& Profile, const UFuzzyModelAsset* Model,
        FFuzzyAIInterpretationSnapshot& OutInterpretation);
};

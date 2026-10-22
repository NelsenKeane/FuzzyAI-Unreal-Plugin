#pragma once

#include "CoreMinimal.h"
#include "Debug/FuzzyAIDebugSnapshot.h"
#include "FuzzyAIPipeline.generated.h"

class UFuzzyAIConfig;
class UFuzzyProfileProcessor;
class UFuzzyInterpreter;
class UFuzzyUtilitySelector;

/** Per-enemy manual preview. Scheduling and automatic execution are deliberately not implemented. */
UCLASS()
class FUZZYAIRUNTIME_API UFuzzyAIPipeline : public UObject
{
    GENERATED_BODY()

public:
    FFuzzyAIDebugSnapshot Preview(const FFuzzyAIDecisionContext& Context, const UFuzzyAIConfig* Config);

private:
    void InitializeLayers();

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyProfileProcessor> ProfileProcessor;

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyInterpreter> Interpreter;

    UPROPERTY(Transient)
    TObjectPtr<UFuzzyUtilitySelector> UtilitySelector;
};

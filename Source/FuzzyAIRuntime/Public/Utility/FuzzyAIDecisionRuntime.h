// Coordinates per-enemy interpretation evaluation, score comparison and action lifecycle.
// All public snapshots are cached reads; selection never runs from debugger getters.
#pragma once
#include "CoreMinimal.h"
#include "Utility/FuzzyAITypes.h"
#include "FuzzyAIDecisionRuntime.generated.h"

class UFuzzyAIAction;
class UFuzzyAIInterpretation;

UCLASS()
class FUZZYAIRUNTIME_API UFuzzyAIDecisionRuntime : public UObject
{
    GENERATED_BODY()
public:
    bool Initialize(UFuzzyAIComponent* Owner, TArray<FString>& Errors);
    void Update();
    void Stop();
    bool ReadInterpretation(FName Id, float& Value) const;
    const TArray<FFuzzyAIActionScore>& GetScores() const { return Scores; }
    const TArray<FFuzzyAIInterpretationValue>& GetInterpretations() const { return Values; }
    UFuzzyAIAction* GetActive() const { return Active; }
    const TArray<TObjectPtr<UFuzzyAIAction>>& GetActions() const { return Actions; }
    const FFuzzyAIDecisionDebugSnapshot& GetDebugSnapshot() const { return Debug; }
    void RecordDebug(FFuzzyAIDebugEntry Entry);
    bool IsCapturing() const { return bCollectingDebug; }
private:
    UPROPERTY(Transient) TWeakObjectPtr<UFuzzyAIComponent> Component;
    UPROPERTY(Transient) TArray<TObjectPtr<UFuzzyAIAction>> Actions;
    UPROPERTY(Transient) TArray<TObjectPtr<UFuzzyAIInterpretation>> Interpretations;
    UPROPERTY(Transient) TObjectPtr<UFuzzyAIAction> Active;
    UPROPERTY(Transient) TArray<FFuzzyAIActionScore> Scores;
    UPROPERTY(Transient) TArray<FFuzzyAIInterpretationValue> Values;
    bool bRunning = false;
    bool bUpdating = false;
    double LastUpdate = 0.;
    UPROPERTY(Transient) FFuzzyAIDecisionDebugSnapshot Debug;
    bool bCollectingDebug = false;
    bool DebugEnabled() const;
    void CaptureExecution(double Time);
    void AddExecutionEvent(FGameplayTag ActionId, const FString& Event, const FString& Details, double Time);
    void EndActive(EFuzzyAIActionResult Result, double Time);
    FFuzzyAIContext MakeContext() const;
};

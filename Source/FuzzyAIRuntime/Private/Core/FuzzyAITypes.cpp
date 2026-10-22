#include "Core/FuzzyAITypes.h"

FFuzzyAIStageResult FFuzzyAIStageResult::Make(EFuzzyAIStageStatus Status, const FString& Message)
{
    FFuzzyAIStageResult Result;
    Result.Status = Status;
    Result.Message = Message;
    return Result;
}

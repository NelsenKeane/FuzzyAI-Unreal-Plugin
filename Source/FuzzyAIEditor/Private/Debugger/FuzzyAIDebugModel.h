// Builds read-only debugger snapshots from existing component getters and discovers enemies in explicit worlds.
// Stores display strings and weak component references so inspecting an enemy never keeps it alive.

#pragma once

#include "CoreMinimal.h"

class UFuzzyAIComponent;
class UWorld;
struct FFuzzyAIObservationResult;

#pragma region Display Data
struct FFuzzyAIDebugEnemy
{
    TWeakObjectPtr<UFuzzyAIComponent> Component;
    FString Name;
    FString World;
    FString Identity;
};

struct FFuzzyAIDebugRow
{
    FString Key;
    FString Type;
    FString Value;
    FString State;
    FString Subject;
    FString Age;
    FString Details;
    bool bUnavailable = false;
    FString Id;
    FString Input;
    FString Weight;
    FString Normalized;
    FString Tooltip;
    TArray<FVector2D> Curve;
    float MarkerX = 0.f;
    float MarkerY = 0.f;
    bool bHasMarker = false;
    float Score = 0.f;
    bool bHasScore = false;
};

struct FFuzzyAIDebugSnapshot
{
    bool bAvailable = false;
    FString Title;
    FString Summary;
    FString Diagnostics;
    FString Decisions;
    FString Selection;
    FString TraceStatus;
    TArray<TSharedPtr<FFuzzyAIDebugRow>> Estimates;
    TArray<TSharedPtr<FFuzzyAIDebugRow>> Fuzzy;
    TArray<TSharedPtr<FFuzzyAIDebugRow>> Actions;
    TArray<TSharedPtr<FFuzzyAIDebugRow>> Factors;
    TArray<TSharedPtr<FFuzzyAIDebugRow>> Execution;
    TArray<TSharedPtr<FFuzzyAIDebugRow>> History;
    TArray<TSharedPtr<FFuzzyAIDebugRow>> Store;
    TArray<TSharedPtr<FFuzzyAIDebugRow>> Memory;
    TArray<TSharedPtr<FFuzzyAIDebugRow>> Events;
};
#pragma endregion

#pragma region Discovery and Snapshot API
class FFuzzyAIDebugModel
{
public:
    static TArray<TSharedPtr<FFuzzyAIDebugEnemy>> FindEnemies(const TArray<UWorld*>& Worlds);
    static FFuzzyAIDebugSnapshot Read(const UFuzzyAIComponent* Component);
    static FString DescribeWorld(const UWorld* World);
    static FString FormatValue(const FFuzzyAIObservationResult& Result);
    static FString FormatAge(double Time, double Now);
};
#pragma endregion

#include "Modules/ModuleManager.h"
#include "UObject/CoreRedirects.h"
#include <initializer_list>

class FFuzzyAIRuntimeModule : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        // Keep serialized observation assets/imports valid after the script package move.
        TArray<FCoreRedirect> Redirects;
        Redirects.Emplace(ECoreRedirectFlags::Type_Package, TEXT("/Script/FuzzyAIObservation"), TEXT("/Script/FuzzyAIRuntime"));
        const auto AddTypes = [&Redirects](ECoreRedirectFlags Type, std::initializer_list<const TCHAR*> Names)
        {
            for (const TCHAR* Name : Names)
            {
                Redirects.Emplace(Type, FString::Printf(TEXT("/Script/FuzzyAIObservation.%s"), Name),
                    FString::Printf(TEXT("/Script/FuzzyAIRuntime.%s"), Name));
            }
        };
        AddTypes(ECoreRedirectFlags::Type_Class, {
            TEXT("FuzzyAIObservationAsset"), TEXT("FuzzyAIObservationRuntime"), TEXT("FuzzyAIObservationMemory"),
            TEXT("FuzzyAIObservationResultLibrary"), TEXT("FuzzyAIDistanceObservation"), TEXT("FuzzyAIVisibleTargetLocationObservation")
        });
        AddTypes(ECoreRedirectFlags::Type_Struct, {
            TEXT("FuzzyAIObservationContext"), TEXT("FuzzyAIObservationResult"), TEXT("FuzzyAIObservationEntry"),
            TEXT("FuzzyAIObservationRecord"), TEXT("FuzzyAIRememberedObservation"), TEXT("FuzzyAIObservedEvent"),
            TEXT("FuzzyAITargetLocationKnowledge")
        });
        AddTypes(ECoreRedirectFlags::Type_Enum, {
            TEXT("EFuzzyAIObservationValueType"), TEXT("EFuzzyAIObservationSubject"), TEXT("EFuzzyAIObservationUpdatePolicy")
        });
        FCoreRedirects::AddRedirectList(Redirects, TEXT("FuzzyAI.ModuleConsolidation"));
    }
};

IMPLEMENT_MODULE(FFuzzyAIRuntimeModule, FuzzyAIRuntime)

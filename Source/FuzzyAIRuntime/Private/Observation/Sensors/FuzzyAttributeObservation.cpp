// Samples configured GAS attributes without depending on a game's character or attribute-set classes.
// Missing attributes and invalid normalization denominators publish unavailable readings.
#include "Observation/Sensors/FuzzyAttributeObservation.h"
#include "Observation/FuzzyObservationStore.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"

void UFuzzyAttributeObservation::Sample_Implementation(AActor* Observer, AActor* Target, UFuzzyObservationStore* Store)
{
    AActor* Source = Subject == EFuzzyAIObservationSubject::Self ? Observer :
        Subject == EFuzzyAIObservationSubject::Target ? Target : nullptr;
    auto* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Source);
    TSet<int32> Written;
    for (const auto& Binding : Bindings)
    {
        if (!Outputs.IsValidIndex(Binding.OutputIndex)) continue;
        const FGameplayTag Key = GetOutputKey(Binding.OutputIndex);
        if (Written.Contains(Binding.OutputIndex)) { Store->Invalidate(Key, TEXT("Duplicate attribute binding.")); continue; }
        Written.Add(Binding.OutputIndex);
        bool bFound = false;
        float Value = ASC && Binding.Attribute.IsValid() ? ASC->GetGameplayAttributeValue(Binding.Attribute, bFound) : 0.f;
        if (!bFound || !FMath::IsFinite(Value)) { Store->Invalidate(Key, TEXT("GAS attribute unavailable.")); continue; }
        if (Binding.bNormalize)
        {
            bool bHasMaximum = false;
            const float Maximum = Binding.MaximumAttribute.IsValid() ? ASC->GetGameplayAttributeValue(Binding.MaximumAttribute, bHasMaximum) : 0.f;
            if (!bHasMaximum || !FMath::IsFinite(Maximum) || Maximum <= 0.f)
            { Store->Invalidate(Key, TEXT("Normalization maximum unavailable or nonpositive.")); continue; }
            Value = FMath::Clamp(Value / Maximum, 0.f, 1.f);
        }
        Store->SetFloat(Key, Value);
    }
}

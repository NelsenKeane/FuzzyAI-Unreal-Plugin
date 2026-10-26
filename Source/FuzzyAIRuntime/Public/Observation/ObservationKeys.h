// Declares the observation namespace and registered keys supplied by the plugin's native target sensors.
// Projects can add more Observation.* Gameplay Tags without modifying an enum or the store.

#pragma once

#include "NativeGameplayTags.h"

namespace NKFuzzyAI::ObservationKeys
{
    FUZZYAIRUNTIME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Root);
    FUZZYAIRUNTIME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TargetDistance);
    FUZZYAIRUNTIME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TargetHasLineOfSight);
    FUZZYAIRUNTIME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(TargetVisibleLocation);
}

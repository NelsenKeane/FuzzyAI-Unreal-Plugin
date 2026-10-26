// Registers the plugin's default observation keys in Unreal's Gameplay Tag dictionary.
// These tags identify stored values; registering a tag does not collect or grant knowledge of that value.

#include "Observation/ObservationKeys.h"

namespace NKFuzzyAI::ObservationKeys
{
    UE_DEFINE_GAMEPLAY_TAG(Root, "Observation");
    UE_DEFINE_GAMEPLAY_TAG(TargetDistance, "Observation.Target.Distance");
    UE_DEFINE_GAMEPLAY_TAG(TargetHasLineOfSight, "Observation.Target.HasLineOfSight");
    UE_DEFINE_GAMEPLAY_TAG(TargetVisibleLocation, "Observation.Target.VisibleLocation");
}

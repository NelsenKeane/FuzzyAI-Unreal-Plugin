// Declares the runtime module's Unreal build dependencies and precompiled-header policy.
// Only runtime dependencies are included so this module can compile for Game targets.

using UnrealBuildTool;

public class FuzzyAIRuntime : ModuleRules
{
    public FuzzyAIRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        #region Module Configuration
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new[] { "Core", "CoreUObject", "Engine", "GameplayTags", "AIModule", "NavigationSystem", "GameplayAbilities", "GameplayTasks" });
        #endregion
    }
}

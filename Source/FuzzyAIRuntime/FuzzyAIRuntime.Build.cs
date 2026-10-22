using UnrealBuildTool;

public class FuzzyAIRuntime : ModuleRules
{
    public FuzzyAIRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new[] { "Core", "CoreUObject", "Engine", "GameplayTags" });
    }
}

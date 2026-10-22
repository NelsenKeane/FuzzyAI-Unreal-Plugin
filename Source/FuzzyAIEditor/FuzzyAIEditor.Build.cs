using UnrealBuildTool;

public class FuzzyAIEditor : ModuleRules
{
    public FuzzyAIEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivateDependencyModuleNames.AddRange(new[]
        {
            "Core", "CoreUObject", "Engine", "GameplayTags", "FuzzyAIRuntime",
            "UnrealEd", "BlueprintGraph", "KismetCompiler"
        });
    }
}

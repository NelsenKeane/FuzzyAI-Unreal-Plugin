// Declares editor-only dependencies for the debug window and observation automation tests.
// Keeps Slate, editor menus and Blueprint compiler tooling outside the runtime module.

using UnrealBuildTool;

public class FuzzyAIEditor : ModuleRules
{
    public FuzzyAIEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        #region Module Configuration
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivateDependencyModuleNames.AddRange(new[]
        {
            "Core", "CoreUObject", "Engine", "GameplayTags", "FuzzyAIRuntime",
            "GameplayAbilities", "GameplayTasks", "AIModule", "NavigationSystem",
            "UnrealEd", "BlueprintGraph", "KismetCompiler", "Projects",
            "Slate", "SlateCore", "InputCore", "ToolMenus", "WorkspaceMenuStructure"
        });
        #endregion
    }
}

using UnrealBuildTool;

public class DBDAnimationBudgetAllocator : ModuleRules {
	public DBDAnimationBudgetAllocator(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"AnimationBudgetAllocator",
			"Core",
			"CoreUObject",
			"Engine",
		});
	}
}

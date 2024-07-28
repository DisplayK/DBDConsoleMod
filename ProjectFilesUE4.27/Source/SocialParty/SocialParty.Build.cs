using UnrealBuildTool;

public class SocialParty : ModuleRules {
	public SocialParty(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"AnimationBudgetAllocator",
			"AnimationUtilities",
			"Core",
			"CoreUObject",
			"Customization",
			"DBDAnimationBudgetAllocator",
			"Engine",
			"GameplayTags",
		});
	}
}

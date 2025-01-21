using UnrealBuildTool;

public class DBDUIViewsMobile : ModuleRules {
	public DBDUIViewsMobile(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"AkAudio",
			"Core",
			"CoreUObject",
			"DataTableUtilities",
			"Engine",
			"MovieScene",
			"Paper2D",
			"PhysicsCore",
			"SlateCore",
			"UMG",
		});
	}
}

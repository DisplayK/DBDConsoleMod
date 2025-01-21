using UnrealBuildTool;

public class AudioUtilities : ModuleRules {
	public AudioUtilities(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"AkAudio",
			"Core",
			"CoreUObject",
			"Engine",
			"MovieScene",
			"PhysicsCore",
			"SlateCore",
			"UMG",
		});
	}
}

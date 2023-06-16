using UnrealBuildTool;

public class Anniversary2021 : ModuleRules {
    public Anniversary2021(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Activation",
            "AkAudio",
            "AnimationUtilities",
            "AudioExtensions",
            "AudioMixer",
            "Competence",
            "Core",
            "CoreUObject",
            "CoreUtilities",
            "Customization",
            "DBDAudio",
            "DBDInput",
            "DBDSharedTypes",
            "DBDUIViewInterfaces",
            "DBDUIViewsMobile",
            "DataTableUtilities",
            "DeadByDaylight",
            "Engine",
            "Foliage",
            "GFXUtilities",
            "GameSessionDS",
            "GameflowNotifications",
            "GameplayTagUtilities",
            "GameplayTags",
            "GameplayTasks",
            "GameplayUtilities",
            "InputCore",
            "InputUtilities",
            "Interaction",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "NetworkUtilities",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "OnlineMessagesUtilities",
            "OnlinePresence",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "OnlineTransactions",
            "Paper2D",
            "Penalty",
            "PhysicsUtilities",
            "PlatformsProviders",
            "Projectile",
            "PropertyPath",
            "QueryService",
            "ReversibleActionSystem",
            "RewardUtilities",
            "ScaleformUI",
            "SharedAuthenticationUtilities",
            "Slate",
            "SlateCore",
            "SocialParty",
            "SpecialEventUtilities",
            "StatSystem",
            "SystemUtilities",
            "TimeUtilities",
            "Toasts",
            "UMG",
            "VFXUtilities",
        });
    }
}
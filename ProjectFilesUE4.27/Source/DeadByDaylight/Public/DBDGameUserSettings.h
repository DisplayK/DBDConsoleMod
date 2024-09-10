#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "Rendering/RenderingCommon.h"
#include "SharedAuthenticationTokenInformation.h"
#include "GameFramework/PlayerInput.h"
#include "AtlantaCustomizedHudSettings.h"
#include "BonusTierTooltipVisibility.h"
#include "OnSetAtlantaCustomizedHudsTimestamp.h"
#include "DBDGameUserSettings.generated.h"

class UDBDGameUserSettings;

UCLASS()
class DEADBYDAYLIGHT_API UDBDGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FInputActionKeyMapping> ActionMappings;

	UPROPERTY()
	TArray<FInputAxisKeyMapping> AxisMappings;

	UPROPERTY()
	FOnSetAtlantaCustomizedHudsTimestamp OnSetCustomizedHudsTimestamp;

private:
	UPROPERTY()
	FString DeviceLoginTokenID;

	UPROPERTY()
	int32 ScalabilityLevel;

	UPROPERTY()
	bool AutoScalabilitySet;

	UPROPERTY()
	bool AutoAdjust;

	UPROPERTY()
	int32 ScreenResolution;

	UPROPERTY()
	bool FullScreen;

	UPROPERTY()
	bool HUDConstrainedAspectRatio;

	UPROPERTY()
	int32 MenuScaleFactor;

	UPROPERTY()
	int32 HudScaleFactor;

	UPROPERTY()
	int32 SkillCheckScaleFactor;

	UPROPERTY()
	bool LargeText;

	UPROPERTY()
	bool HUDPlayerNamesVisibility;

	UPROPERTY()
	bool HUDKillerHookCountVisibility;

	UPROPERTY()
	bool HUDScoreEventsVisibility;

	UPROPERTY()
	bool LegacyPrestigePortraits;

	UPROPERTY()
	bool ChallengeProgression;

	UPROPERTY()
	bool ChallengeCompletion;

	UPROPERTY()
	uint32 FPSLimit;

	UPROPERTY()
	int32 MainVolume;

	UPROPERTY()
	bool MainVolumeOn;

	UPROPERTY()
	int32 MenuMusicVolume;

	UPROPERTY()
	bool MenuMusicVolumeOn;

	UPROPERTY()
	bool UseHeadphones;

	UPROPERTY()
	bool MuteOnFocusLost;

	UPROPERTY()
	bool HapticsVibrationPS5;

	UPROPERTY()
	int32 KillerCameraSensitivity;

	UPROPERTY()
	int32 SurvivorCameraSensitivity;

	UPROPERTY()
	int32 KillerMouseSensitivity;

	UPROPERTY()
	int32 SurvivorMouseSensitivity;

	UPROPERTY()
	int32 KillerControllerSensitivity;

	UPROPERTY()
	int32 SurvivorControllerSensitivity;

	UPROPERTY()
	bool AimAssist;

	UPROPERTY()
	int32 ControlType;

	UPROPERTY()
	bool InvertY;

	UPROPERTY()
	bool SurvivorInvertY;

	UPROPERTY()
	bool KillerToggleInteractions;

	UPROPERTY()
	bool SurvivorToggleInteractions;

	UPROPERTY()
	bool SprintToCancel;

	UPROPERTY()
	FString Language;

	UPROPERTY()
	bool LanguageIsDefinedByPlayer;

	UPROPERTY()
	int32 HighestWeightSeenNews;

	UPROPERTY()
	FSharedAuthenticationTokenInformation SharedLoginInformation;

	UPROPERTY()
	uint32 LastPanelContextId;

	UPROPERTY()
	bool ArchivesAutoPlayVoiceOver;

	UPROPERTY()
	bool HasAcceptedCrossplayPopup;

	UPROPERTY()
	bool HasAcceptedProgressionSystemInfoPopup;

	UPROPERTY()
	bool HasAcceptedHapticsVibrationPopup;

	UPROPERTY()
	bool HasAcceptedCrossProgressionPopup;

	UPROPERTY()
	FBonusTierTooltipVisibility BonusTierTooltipVisibility;

	UPROPERTY()
	bool UseAtlantaCustomizedHuds;

	UPROPERTY()
	bool UseAtlantaSurvivorQuickTurn;

	UPROPERTY()
	bool UseAtlantaKillerQuickTurn;

	UPROPERTY()
	TArray<FAtlantaCustomizedHudSettings> AtlantaCustomizedHuds;

	UPROPERTY()
	bool ShowPortraitBorder;

	UPROPERTY()
	FString PartyPrivacyState;

	UPROPERTY()
	int32 ColorBlindMode;

	UPROPERTY()
	int32 ColorBlindModeIntensity;

	UPROPERTY()
	bool BeginnerMode;

	UPROPERTY()
	bool Subtitles;

	UPROPERTY()
	int32 SubtitlesBackgroundOpacity;

	UPROPERTY()
	int32 SubtitlesSize;

	UPROPERTY()
	bool IsAnonymousMode;

	UPROPERTY()
	bool HideYourName;

	UPROPERTY()
	bool HideOtherNames;

	UPROPERTY()
	bool HiddenMatchmakingDelay;

public:
	UFUNCTION(BlueprintPure)
	int32 GetSkillCheckScaleFactor() const;

	UFUNCTION(BlueprintPure)
	int32 GetMenuScaleFactor() const;

	UFUNCTION(BlueprintPure)
	bool GetLegacyPrestigePortraits() const;

	UFUNCTION(BlueprintPure)
	bool GetLargeText() const;

	UFUNCTION(BlueprintPure)
	bool GetHUDScoreEventsVisibility() const;

	UFUNCTION(BlueprintPure)
	int32 GetHudScaleFactor() const;

	UFUNCTION(BlueprintPure)
	bool GetHUDPlayerNamesVisibility() const;

	UFUNCTION(BlueprintPure)
	bool GetHUDKillerHookCountVisibility() const;

	UFUNCTION(BlueprintCallable)
	static UDBDGameUserSettings* GetDBDGameUserSettings();

	UFUNCTION(BlueprintPure)
	int32 GetColorBlindModeIntensity() const;

	UFUNCTION(BlueprintPure)
	EColorVisionDeficiency GetColorBlindMode() const;

	UFUNCTION(BlueprintPure)
	bool GetChallengeProgression() const;

	UFUNCTION(BlueprintPure)
	bool GetChallengeCompletion() const;

public:
	UDBDGameUserSettings();
};

FORCEINLINE uint32 GetTypeHash(const UDBDGameUserSettings) { return 0; }

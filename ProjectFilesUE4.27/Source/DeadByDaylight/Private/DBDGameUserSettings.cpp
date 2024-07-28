#include "DBDGameUserSettings.h"
#include "Rendering/RenderingCommon.h"

class UDBDGameUserSettings;

int32 UDBDGameUserSettings::GetSkillCheckScaleFactor() const
{
	return 0;
}

int32 UDBDGameUserSettings::GetMenuScaleFactor() const
{
	return 0;
}

bool UDBDGameUserSettings::GetLegacyPrestigePortraits() const
{
	return false;
}

bool UDBDGameUserSettings::GetLargeText() const
{
	return false;
}

bool UDBDGameUserSettings::GetHUDScoreEventsVisibility() const
{
	return false;
}

int32 UDBDGameUserSettings::GetHudScaleFactor() const
{
	return 0;
}

bool UDBDGameUserSettings::GetHUDPlayerNamesVisibility() const
{
	return false;
}

bool UDBDGameUserSettings::GetHUDKillerHookCountVisibility() const
{
	return false;
}

UDBDGameUserSettings* UDBDGameUserSettings::GetDBDGameUserSettings()
{
	return NULL;
}

int32 UDBDGameUserSettings::GetColorBlindModeIntensity() const
{
	return 0;
}

EColorVisionDeficiency UDBDGameUserSettings::GetColorBlindMode() const
{
	return EColorVisionDeficiency::NormalVision;
}

bool UDBDGameUserSettings::GetChallengeProgression() const
{
	return false;
}

bool UDBDGameUserSettings::GetChallengeCompletion() const
{
	return false;
}

UDBDGameUserSettings::UDBDGameUserSettings()
{
	this->ActionMappings = TArray<FInputActionKeyMapping>();
	this->AxisMappings = TArray<FInputAxisKeyMapping>();
	this->DeviceLoginTokenID = TEXT("");
	this->ScalabilityLevel = 3;
	this->AutoScalabilitySet = false;
	this->AutoAdjust = false;
	this->ScreenResolution = 100;
	this->FullScreen = true;
	this->HUDConstrainedAspectRatio = false;
	this->MenuScaleFactor = 100;
	this->HudScaleFactor = 100;
	this->SkillCheckScaleFactor = 100;
	this->LargeText = false;
	this->HUDPlayerNamesVisibility = true;
	this->HUDKillerHookCountVisibility = true;
	this->HUDScoreEventsVisibility = true;
	this->LegacyPrestigePortraits = true;
	this->ChallengeProgression = true;
	this->ChallengeCompletion = true;
	this->FPSLimit = 30;
	this->MainVolume = 80;
	this->MainVolumeOn = true;
	this->MenuMusicVolume = 100;
	this->MenuMusicVolumeOn = true;
	this->UseHeadphones = true;
	this->MuteOnFocusLost = true;
	this->HapticsVibrationPS5 = true;
	this->KillerCameraSensitivity = 50;
	this->SurvivorCameraSensitivity = 50;
	this->KillerMouseSensitivity = 50;
	this->SurvivorMouseSensitivity = 50;
	this->KillerControllerSensitivity = 50;
	this->SurvivorControllerSensitivity = 50;
	this->AimAssist = false;
	this->ControlType = 1;
	this->InvertY = false;
	this->SurvivorInvertY = false;
	this->KillerToggleInteractions = false;
	this->SurvivorToggleInteractions = false;
	this->SprintToCancel = false;
	this->Language = TEXT("en");
	this->LanguageIsDefinedByPlayer = false;
	this->HighestWeightSeenNews = 0;
	this->LastPanelContextId = 0;
	this->ArchivesAutoPlayVoiceOver = true;
	this->HasAcceptedCrossplayPopup = false;
	this->HasAcceptedProgressionSystemInfoPopup = true;
	this->HasAcceptedHapticsVibrationPopup = false;
	this->HasAcceptedCrossProgressionPopup = false;
	this->UseAtlantaCustomizedHuds = false;
	this->UseAtlantaSurvivorQuickTurn = true;
	this->UseAtlantaKillerQuickTurn = true;
	this->AtlantaCustomizedHuds = TArray<FAtlantaCustomizedHudSettings>();
	this->ShowPortraitBorder = false;
	this->PartyPrivacyState = TEXT("friends");
	this->ColorBlindMode = 0;
	this->ColorBlindModeIntensity = 0;
	this->BeginnerMode = true;
	this->Subtitles = false;
	this->SubtitlesBackgroundOpacity = 1;
	this->SubtitlesSize = 1;
	this->IsAnonymousMode = false;
	this->HideYourName = false;
	this->HideOtherNames = false;
	this->HiddenMatchmakingDelay = false;
}

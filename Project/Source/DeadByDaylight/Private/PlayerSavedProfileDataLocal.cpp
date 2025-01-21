#include "PlayerSavedProfileDataLocal.h"

FPlayerSavedProfileDataLocal::FPlayerSavedProfileDataLocal()
{
	this->Tokens = 0;
	this->Offerings = TArray<FName>();
	this->PageVisited = TMap<FName, bool>();
	this->ChatVisible = TMap<FName, bool>();
	this->OnboardingCompleted = TMap<FName, bool>();
	this->ConsecutiveMatchStreak = 0;
	this->Wins = 0;
	this->Losses = 0;
	this->CurrentSeasonTicks = 0;
	this->DailyRitualSaveData = FDailyRitualSaveData{};
	this->UIViewFlags = FUIViewFlagSaveData{};
	this->FearMarket = FFearMarketOfferingInstance{};
	this->LastConnectedLoadout = FPlayerLoadoutData{};
	this->LastConnectedCharacterIndex = 0;
	this->DisconnectPenaltyTime = FDateTime{};
	this->LastMatchEndTime = FDateTime{};
	this->LastMatchStartTime = FDateTime{};
	this->LastKillerMatchEndTime = FDateTime{};
	this->LastSurvivorMatchEndTime = FDateTime{};
	this->BloodStoreKillers = FBloodWebPersistentData{};
	this->BloodStoreSurvivors = FBloodWebPersistentData{};
	this->CrossplayAllowed = false;
	this->AutoDeclineFriendInvites = false;
	this->CharacterCustomizationPresets = TArray<FCharacterCustomizationPresetsList>();
	this->CharacterLoadoutPresets = TArray<FCharacterLoadoutPresetsList>();
	this->_cumulativeData = FPlayerSavedProfileCumulativeData{};
	this->_savedPlayerStats = TArray<FSavedStatsData>();
	this->_hasBeenGivenKillerTutorialEndReward = false;
	this->_hasBeenGivenSurvivorTutorialEndReward = false;
	this->_hasSeenBloodpointsOnboardingCurrencyPopup = false;
	this->_hasSeenAuricCellsOnboardingCurrencyPopup = false;
	this->_hasSeenIridescentShardsOnboardingCurrencyPopup = false;
	this->_hasSeenLightSensitivity = false;
	this->_characterData = TMap<int32, FCharacterSavedProfileData>();
	this->_specialEvent = TMap<FName, FSpecialEventSavedData>();
	this->_releases = TMap<FString, FReleaseSavedData>();
	this->_hasBeginnerTooltipsBeenDisabledAtLevel = false;
}

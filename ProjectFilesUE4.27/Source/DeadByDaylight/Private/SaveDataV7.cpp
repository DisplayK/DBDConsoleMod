#include "SaveDataV7.h"

FSaveDataV7::FSaveDataV7()
{
	this->PlayerUID = TEXT("");
	this->SelectedCamperIndex = 0;
	this->SelectedSlasherIndex = 0;
	this->Offerings = TArray<FName>();
	this->FirstTimePlaying = false;
	this->ConsecutiveMatchStreak = 0;
	this->HasBeenGivenKillerTutorialEndReward = false;
	this->HasBeenGivenSurvivorTutorialEndReward = false;
	this->HasSeenBloodpointsOnboardingCurrencyPopup = false;
	this->HasSeenAuricCellsOnboardingCurrencyPopup = false;
	this->HasSeenIridescentShardsOnboardingCurrencyPopup = false;
	this->CurrentSeasonTicks = 0;
	this->LastConnectedCharacterIndex = 0;
	this->DisconnectPenaltyTime = TEXT("");
	this->LastMatchEndTime = TEXT("");
	this->LastMatchStartTime = TEXT("");
	this->LastKillerMatchEndTime = TEXT("");
	this->LastSurvivorMatchEndTime = TEXT("");
	this->Experience = 0;
	this->BonusExperience = 0;
	this->FearTokens = 0;
	this->FearTokensMigrated = false;
	this->OngoingGameTime = TEXT("");
	this->CumulativeMatches = 0;
	this->PageVisited = TArray<FKeyTupleBool>();
	this->ChatVisible = TArray<FKeyTupleBool>();
	this->CumulativeMatchesAsSurvivor = 0;
	this->CumulativeMatchesAsKiller = 0;
	this->CumulativeMatchesAsSurvivorNoFriends = 0;
	this->CumulativeMatchesAsKillerNoFriends = 0;
	this->LastMatchTimestamp = FDateTime{};
	this->LastSessionTimestamp = FDateTime{};
	this->CumulativeSessions = 0;
	this->CumulativePlaytime = TEXT("");
	this->CharacterData = TArray<FCharacterKeyTuple>();
	this->OwnedCharms = TArray<FName>();
	this->DailyRituals = FSavedDailyRitualContainerV7{};
	this->FearMarket = FSavedFearMarketOfferingInstanceV7{};
	this->LastLoadout = FLegacySavedPlayerLoadoutData{};
	this->ConsoleUserSettings = FConsoleUserSettings{};
	this->PlayerStatProgression = TArray<FSavedStatsDataV7>();
	this->OwnedContent = TArray<FString>();
	this->SpecialEvent = TArray<FSavedSpecialEventDataV7>();
	this->BloodStoreKillers = FLegacySavedBloodWebPersistentData{};
	this->BloodStoreSurvivors = FLegacySavedBloodWebPersistentData{};
	this->OnBoardingCompleted = TArray<FKeyTupleBool>();
	this->IsCrossplayAllowed = false;
	this->AutoDeclineFriendInvites = false;
}

#include "LegacyPlayerSavedProfileDataLocal.h"

FLegacyPlayerSavedProfileDataLocal::FLegacyPlayerSavedProfileDataLocal()
{
	this->Tokens = 0;
	this->Offerings = TArray<FName>();
	this->FirstTimePlaying = false;
	this->HasBeenGivenKillerTutorialEndReward = false;
	this->HasBeenGivenSurvivorTutorialEndReward = false;
	this->Wins = 0;
	this->Losses = 0;
	this->CharacterData = TMap<int32, FLegacyCharacterSavedProfileData>();
	this->CurrentSeasonTicks = 0;
	this->DailyRituals = FLegacySavedDailyRitualContainer{};
	this->FearMarket = FLegacySavedFearMarketOfferingInstance{};
	this->LastConnectedLoadout = FLegacySavedPlayerLoadoutData{};
	this->LastConnectedCharacterIndex = 0;
	this->DisconnectPenaltyTime = FDateTime{};
	this->_bloodpoints = 0;
	this->_bonusBloodpoints = 0;
	this->_unclampedBloodpoints = 0;
	this->_fearTokens = 0;
	this->_ongoingGameTime = FDateTime{};
	this->_fearTokensMigrated = false;
}

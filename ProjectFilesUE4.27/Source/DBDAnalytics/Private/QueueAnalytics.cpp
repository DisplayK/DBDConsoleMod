#include "QueueAnalytics.h"

FQueueAnalytics::FQueueAnalytics()
{
	this->TimesQueuedSurvivor = 0;
	this->TimesQueuedKiller = 0;
	this->MatchesAsSurvivor = 0;
	this->MatchesAsKiller = 0;
	this->SelectedCountry = TEXT("");
	this->PlayerName = TEXT("");
	this->FirstTimePlaying = false;
	this->CumulativeMatches = 0;
	this->CumulativeMatchesAsSurvivor = 0;
	this->CumulativeMatchesAsKiller = 0;
	this->LastMatchTimestamp = TEXT("");
	this->SessionStartTimestamp = TEXT("");
	this->SessionEndTimestamp = TEXT("");
	this->LastSessionTimestamp = TEXT("");
	this->CumulativeSessions = 0;
	this->CumulativePlaytime = 0.0f;
	this->TimeInCharacterMenu = 0.0f;
	this->TimeInBloodwebMenu = 0.0f;
	this->TimeInLoadoutMenu = 0.0f;
	this->TimeInCustomizationMenu = 0.0f;
	this->TimeInFearMarket = 0.0f;
	this->TimeInTallyScreen = 0.0f;
	this->TimeInGameMatch = 0.0f;
	this->TimeInHelpMenu = 0.0f;
	this->TimeInOfflineLobby = 0.0f;
	this->TimeInOfflineLobbySurvivorGroup = 0.0f;
	this->TimeInOnlineLobby = 0.0f;
	this->TimeInOnlineLobbySurvivorGroup = 0.0f;
}

#include "PrestigeLevelUpAnalytics.h"

FPrestigeLevelUpAnalytics::FPrestigeLevelUpAnalytics()
{
	this->CharacterName = TEXT("");
	this->NewPrestigeLevel = 0;
	this->BloodpointsSpent = 0;
	this->ItemRewards = TArray<FPrestigeRewardItemAnalytic>();
}

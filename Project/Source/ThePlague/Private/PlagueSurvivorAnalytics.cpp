#include "PlagueSurvivorAnalytics.h"

FPlagueSurvivorAnalytics::FPlagueSurvivorAnalytics()
{
	this->MatchId = TEXT("");
	this->BecomeInfectCount = 0;
	this->RegularVomitHits = 0;
	this->SuperVomitHits = 0;
	this->CleanSicknessCount = 0;
	this->TimeWithSickness = 0.0f;
	this->TimeWithMaximumSickness = 0.0f;
	this->TimeInSuperMode = 0.0f;
}

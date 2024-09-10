#include "PostGameAnalyticsBase.h"

FPostGameAnalyticsBase::FPostGameAnalyticsBase()
{
	this->MatchId = TEXT("");
	this->KrakenMatchId = TEXT("");
	this->GameMode = TEXT("");
	this->BloodwebPoints = 0;
	this->GameDuration = 0.0f;
	this->CharacterName = TEXT("");
	this->Rank = 0;
	this->PipsGainedOrLost = 0;
	this->MatchEndReason = TEXT("");
	this->IsTutorialBotMatch = false;
}

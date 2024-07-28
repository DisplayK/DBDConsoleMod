#include "MatchIncentivesGrantedAnalytics.h"

FMatchIncentivesGrantedAnalytics::FMatchIncentivesGrantedAnalytics()
{
	this->MatchId = TEXT("");
	this->PlayerId = TEXT("");
	this->PlayerRole = EPlayerRole::VE_None;
	this->Incentive = 0;
}

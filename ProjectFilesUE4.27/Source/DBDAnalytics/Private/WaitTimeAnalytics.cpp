#include "WaitTimeAnalytics.h"

FWaitTimeAnalytics::FWaitTimeAnalytics()
{
	this->EnterLobbyWaitTime = 0.0f;
	this->EnterMatchWaitTime = 0.0f;
	this->MatchWaitStartUtc = TEXT("");
	this->MatchWaitStopUtc = TEXT("");
	this->LobbyWaitStartUtc = TEXT("");
	this->LobbyWaitStopUtc = TEXT("");
	this->LobbyWaitStopReason = TEXT("");
	this->MatchId = TEXT("");
	this->GameMode = EGameType::Online;
	this->Role = EPlayerRole::VE_None;
	this->PartySize = 0;
	this->Rank = 0;
	this->RankDifference = 0;
	this->DaysSinceReset = 0;
}

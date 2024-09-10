#include "MatchmakingAnalytics.h"

FMatchmakingAnalytics::FMatchmakingAnalytics()
{
	this->MatchmakingSessionGuid = TEXT("");
	this->PlayerRole = EPlayerRole::VE_None;
	this->GameType = EGameType::Online;
	this->PartySize = 0;
	this->Rank = 0;
	this->CharacterName = TEXT("");
}

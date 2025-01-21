#include "MatchInfoAnalytics.h"

FMatchInfoAnalytics::FMatchInfoAnalytics()
{
	this->GameMode = EGameType::Online;
	this->Role = EPlayerRole::VE_None;
	this->IsABot = false;
	this->BotId = TEXT("");
	this->BotDifficultyLevel = EAIDifficultyLevel::VeryEasy;
	this->PartySize = 0;
	this->CharacterName = TEXT("");
	this->Rank = 0;
	this->Level = 0;
	this->Prestige = 0;
	this->Pips = 0;
	this->PipsTotal = 0;
	this->MapSeed = 0;
	this->MapName = TEXT("");
	this->PartyHostMirrorsId = TEXT("");
	this->LobbyId = TEXT("");
	this->MatchId = TEXT("");
	this->KrakenMatchId = TEXT("");
	this->PlayerName = TEXT("");
	this->SelectedCountry = TEXT("");
	this->FirstTimePlaying = false;
	this->CumulativeMatches = 0;
	this->CumulativeMatchesAsSurvivor = 0;
	this->CumulativeMatchesAsKiller = 0;
	this->LastMatchTimestamp = TEXT("");
	this->ExactPing = 0.0f;
	this->hasAnActiveArchiveQuest = false;
	this->IsUsingKeyboard = false;
	this->ControllerType = TEXT("");
	this->IsTutorialBotMatch = false;
}

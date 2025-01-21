#include "BotReplacementAnalytics.h"

FBotReplacementAnalytics::FBotReplacementAnalytics()
{
	this->MatchId = TEXT("");
	this->KrakenMatchId = TEXT("");
	this->Role = EPlayerRole::VE_None;
	this->MatchTime = 0.0f;
	this->CharacterName = TEXT("");
	this->ReplacedCharacterMirrorsId = TEXT("");
	this->BotDifficultyLevel = EAIDifficultyLevel::VeryEasy;
}

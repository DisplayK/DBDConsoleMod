#include "PlayerRoundStartEventData.h"

FPlayerRoundStartEventData::FPlayerRoundStartEventData()
{
	this->PlayerRole = EPlayerRole::VE_None;
	this->IsABot = false;
	this->BotDifficultyLevel = EAIDifficultyLevel::VeryEasy;
	this->BotName = TEXT("");
	this->BotMirrorID = TEXT("");
	this->CharacterId = 0;
	this->PlayerRankForRole = 0;
	this->PrestigeLevel = 0;
	this->BloodWebLevel = 0;
	this->Pips = 0;
	this->PlayerRankDataArray = TArray<FPlayerRankData>();
}

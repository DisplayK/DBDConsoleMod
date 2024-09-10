#include "TallyPlayerResultData.h"

FTallyPlayerResultData::FTallyPlayerResultData()
{
	this->CharacterIconPath = NAME_None;
	this->PlayerId = TEXT("");
	this->PlatformAccountId = TEXT("");
	this->MirrorsId = TEXT("");
	this->PlayerName = TEXT("");
	this->CharacterName = TEXT("");
	this->PlayerScore = 0;
	this->PlayerRank = 0;
	this->PlayerStatus = EGameState::VE_Active;
	this->OfferingData = FInventorySlotData{};
	this->PerksData = TArray<FInventorySlotData>();
	this->ItemData = FInventorySlotData{};
	this->AddonsData = TArray<FInventorySlotData>();
	this->PrestigeData = FPrestigeData{};
	this->IsReported = false;
	this->IsSlasher = false;
	this->IsMyScore = false;
	this->IsOffNetwork = false;
	this->ShowPortraitBorder = false;
	this->IsABot = false;
}

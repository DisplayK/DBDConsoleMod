#include "AtlantaRitualUIData.h"

FAtlantaRitualUIData::FAtlantaRitualUIData()
{
	this->ID = 0;
	this->Type = EAltantaRitualUIType::Single;
	this->Title = TEXT("");
	this->Description = TEXT("");
	this->IconFilePath = TEXT("");
	this->IsNew = false;
	this->IsClaimed = false;
	this->ProgressPercentage = 0.0f;
	this->RefreshPrice = 0;
	this->Rewards = TArray<FAtlantaRitualRewardUIData>();
	this->SubRituals = TArray<FAtlantaSubRitualUIData>();
}

#include "AtlantaRitualRewardUIData.h"

FAtlantaRitualRewardUIData::FAtlantaRitualRewardUIData()
{
	this->Type = EAtlantaRitualRewardUIType::Item;
	this->Quantity = 0;
	this->IconFilePath = TEXT("");
	this->Rarity = EItemRarity::Common;
}

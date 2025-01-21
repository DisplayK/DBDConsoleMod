#include "BaseLoadoutPartViewData.h"

FBaseLoadoutPartViewData::FBaseLoadoutPartViewData()
{
	this->ItemId = NAME_None;
	this->IconTexture = NULL;
	this->DisplayName = TEXT("");
	this->Rarity = EItemRarity::Common;
}

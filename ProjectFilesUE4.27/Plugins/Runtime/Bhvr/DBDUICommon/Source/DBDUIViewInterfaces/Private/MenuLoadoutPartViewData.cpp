#include "MenuLoadoutPartViewData.h"

UMenuLoadoutPartViewData::UMenuLoadoutPartViewData()
{
	this->ItemId = NAME_None;
	this->IconTexture = NULL;
	this->Rarity = EItemRarity::Common;
	this->StackCount = 0;
	this->IsLocked = false;
	this->IsSelected = false;
	this->IsKillSwitchEnabled = false;
}

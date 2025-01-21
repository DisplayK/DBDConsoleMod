#include "LevelUpDetails.h"

FLevelUpDetails::FLevelUpDetails()
{
	this->Level = 0;
	this->Prestige = 0;
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->ItemId = NAME_None;
	this->ItemType = EInventoryItemType::None;
	this->AssociatedCharacter = 0;
}

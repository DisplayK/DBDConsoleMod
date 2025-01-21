#include "LoadoutMenuPopupViewData.h"

ULoadoutMenuPopupViewData::ULoadoutMenuPopupViewData()
{
	this->LoadoutIcon = NULL;
	this->ItemId = NAME_None;
	this->DisplayName = FText::GetEmpty();
	this->ParentDisplayName = FText::GetEmpty();
	this->ParentTypeDisplayName = FText::GetEmpty();
	this->IsParentAvailable = false;
	this->Description = FText::GetEmpty();
	this->ItemType = EInventoryItemType::None;
	this->Rarity = EItemRarity::Common;
	this->StatusEffectType = EStatusEffectType::None;
	this->Level = 0;
	this->Subtitle = FText::GetEmpty();
	this->StackCount = 0;
	this->Availability = EItemAvailability::Available;
	this->IsTeachablePerk = false;
	this->IsSlasherPerk = false;
	this->IsSlasher = false;
	this->IsLocked = false;
	this->IsKillSwitch = false;
	this->EventName = FText::GetEmpty();
	this->EventId = TEXT("");
}

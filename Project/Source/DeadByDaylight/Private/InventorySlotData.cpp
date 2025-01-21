#include "InventorySlotData.h"

FInventorySlotData::FInventorySlotData()
{
	this->ItemId = NAME_None;
	this->IconFilePath = TEXT("");
	this->DisplayName = TEXT("");
	this->ParentDisplayName = TEXT("");
	this->ParentTypeDisplayName = TEXT("");
	this->IsParentAvailable = false;
	this->Description = TEXT("");
	this->PerkCategory = TArray<EPerkCategory>();
	this->OfferingCategory = EOfferingCategory::None;
	this->ItemType = EInventoryItemType::None;
	this->Rarity = EItemRarity::Common;
	this->StatusEffectType = EStatusEffectType::None;
	this->Level = 0;
	this->Subtitle = TEXT("");
	this->StackCount = 0;
	this->Availability = EItemAvailability::Available;
	this->IsTeachablePerk = false;
	this->IsSlasherPerk = false;
	this->IsPerkAvailableInFearMarket = false;
	this->IsPerkAvailableInBloodWeb = false;
	this->TeachableLevel = 0;
	this->DlcDisplayName = TEXT("");
	this->IsLocked = false;
	this->EventInfo = FSpecialEventUIInfo{};
	this->UnlockableLevel = 0;
	this->IsLimitedItem = false;
	this->IsPrivateIcon = false;
	this->IsEnabled = false;
	this->IsSharablePerk = false;
	this->LoadoutPartState = ELoadoutPartState::None;
}

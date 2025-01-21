#include "CharacterInfoData.h"

FCharacterInfoData::FCharacterInfoData()
{
	this->SlotData = FCharacterSlotData{};
	this->Description = TEXT("");
	this->TeachablePerksData = TArray<FTeachableData>();
	this->PowerData = FInventorySlotData{};
	this->killerAttributesData = FKillerAttributesData{};
	this->IsKiller = false;
	this->IsEnabled = false;
}

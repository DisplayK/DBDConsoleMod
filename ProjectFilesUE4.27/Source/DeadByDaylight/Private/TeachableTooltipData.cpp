#include "TeachableTooltipData.h"

FTeachableTooltipData::FTeachableTooltipData()
{
	this->ItemRarity = EItemRarity::Common;
	this->ItemType = EInventoryItemType::None;
	this->CharacterName = TEXT("");
	this->AvailabilityMessage = TEXT("");
	this->EffectMessage = TEXT("");
	this->UseInCharacterSelectionScreen = false;
	this->TeachableStatus = ETeachableStatus::Unknown;
}

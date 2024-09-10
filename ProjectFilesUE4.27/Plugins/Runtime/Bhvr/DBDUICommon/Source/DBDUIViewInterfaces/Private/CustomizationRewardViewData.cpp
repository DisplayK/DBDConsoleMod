#include "CustomizationRewardViewData.h"

FCustomizationRewardViewData::FCustomizationRewardViewData()
{
	this->CustomizationId = NAME_None;
	this->OutfitId = NAME_None;
	this->IconTexture = NULL;
	this->Rarity = EItemRarity::Common;
	this->IsOwned = false;
	this->IsEquipped = false;
	this->IsUnbreakable = false;
	this->TooltipData = FCustomizationTooltipViewData{};
	this->IsEnabled = false;
}

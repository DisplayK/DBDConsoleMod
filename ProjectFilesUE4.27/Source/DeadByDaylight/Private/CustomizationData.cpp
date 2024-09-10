#include "CustomizationData.h"

FCustomizationData::FCustomizationData()
{
	this->ID = NAME_None;
	this->AssociatedCharacter = 0;
	this->AssociatedRole = EPlayerRole::VE_None;
	this->Rarity = EItemRarity::Common;
	this->UIData = FItemUIData{};
	this->Availability = FItemAvailability{};
	this->InclusionVersion = TEXT("");
}

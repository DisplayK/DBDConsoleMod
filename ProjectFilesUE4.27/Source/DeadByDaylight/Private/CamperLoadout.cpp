#include "CamperLoadout.h"

FCamperLoadout::FCamperLoadout()
{
	this->Camper = FCharacterCustomizationDropdown{};
	this->Slot0_CharmID = FCharmDropdown{};
	this->Slot1_CharmID = FCharmDropdown{};
	this->Slot2_CharmID = FCharmDropdown{};
	this->Item = FItemIdDropdown{};
	this->AddonIDs = TArray<FDebugLoadoutAddon>();
	this->Perks = TArray<FDebugLoadoutPerk>();
}

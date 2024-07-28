#include "SlasherLoadout.h"

FSlasherLoadout::FSlasherLoadout()
{
	this->Perks = TArray<FDebugLoadoutPerk>();
	this->PowerAddonIDs = TArray<FDebugLoadoutAddon>();
	this->Slasher = FCharacterCustomizationDropdown{};
}

#include "InLockerPerk.h"

FInLockerPerk::FInLockerPerk()
{
	this->PerkID = FDataTableDropdown{};
	this->PerkNeedToBeFullyCharged = false;
	this->NeedToHoldItem = false;
	this->NeedToBeEmptyHanded = false;
	this->NeedToBeInjured = false;
	this->MustBeFarFromLinkedObject = false;
	this->MinimumDistanceFromObject = 0.0f;
	this->LinkedObjectClass = NULL;
	this->PerkWeight = FAITunableParameter{};
}

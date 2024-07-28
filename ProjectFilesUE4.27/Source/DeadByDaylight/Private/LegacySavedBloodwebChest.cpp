#include "LegacySavedBloodwebChest.h"

FLegacySavedBloodwebChest::FLegacySavedBloodwebChest()
{
	this->ID = NAME_None;
	this->EventID = NAME_None;
	this->Rarity = EItemRarity::Common;
	this->GivenItemRarity = TArray<float>();
}

#include "ItemData.h"

FItemData::FItemData()
{
	this->ItemMesh = NULL;
	this->HandPosition = EItemHandPosition::None;
	this->Role = EPlayerRole::VE_None;
	this->Rarity = EItemRarity::Common;
	this->Inventory = false;
	this->Chest = false;
	this->RequiredKillerAbility = EKillerAbilities::VE_None;
	this->Availability = FItemAvailability{};
	this->IsInNonViolentBuild = false;
	this->IsAvailableInAtlantaBuild = false;
	this->AntiDLC = false;
	this->Bloodweb = false;
	this->CanKeepInLoadout = false;
	this->IsBotSupported = false;
	this->EventId = NAME_None;
	this->CanUseAfterEventEnd = false;
	this->ItemType = ELoadoutItemType::None;
}

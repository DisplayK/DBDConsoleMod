#include "PlayerDataSync.h"

FPlayerDataSync::FPlayerDataSync()
{
	this->PlayerData = FPlayerStateData{};
	this->EquippedCustomization = FEquippedPlayerCustomization{};
	this->EquipedItemId = NAME_None;
	this->EquipedItemAddonIds = TArray<FName>();
}

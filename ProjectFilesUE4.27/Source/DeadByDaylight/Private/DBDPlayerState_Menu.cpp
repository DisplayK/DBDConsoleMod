#include "DBDPlayerState_Menu.h"
#include "EPlayerRole.h"
#include "EquippedPlayerCustomization.h"
#include "ELoadoutSlot.h"

void ADBDPlayerState_Menu::Server_SetSelectedCharacterId_Implementation(int32 id, bool updateDisplayData)
{

}

bool ADBDPlayerState_Menu::Server_SetSelectedCharacterId_Validate(int32 id, bool updateDisplayData)
{
	return true;
}

void ADBDPlayerState_Menu::Server_SetSelectedCharacterCustomization_Implementation(EPlayerRole forRole, int32 id, const FEquippedPlayerCustomization customization)
{

}

bool ADBDPlayerState_Menu::Server_SetSelectedCharacterCustomization_Validate(EPlayerRole forRole, int32 id, const FEquippedPlayerCustomization customization)
{
	return true;
}

void ADBDPlayerState_Menu::Server_SetEquipmentAddons_Implementation(const TArray<FName>& addonItemIds, bool callOnRep)
{

}

bool ADBDPlayerState_Menu::Server_SetEquipmentAddons_Validate(const TArray<FName>& addonItemIds, bool callOnRep)
{
	return true;
}

void ADBDPlayerState_Menu::Server_SetEquipment_Implementation(ELoadoutSlot slot, FName itemId, bool callOnRep)
{

}

bool ADBDPlayerState_Menu::Server_SetEquipment_Validate(ELoadoutSlot slot, FName itemId, bool callOnRep)
{
	return true;
}

void ADBDPlayerState_Menu::Server_NotifyOnRep_Implementation()
{

}

bool ADBDPlayerState_Menu::Server_NotifyOnRep_Validate()
{
	return true;
}

void ADBDPlayerState_Menu::Multicast_SetSelectedCharacterId_Implementation(EPlayerRole forRole, int32 id, bool updateDisplayData)
{

}

void ADBDPlayerState_Menu::Multicast_SetSelectedCharacterCustomization_Implementation(EPlayerRole forRole, int32 id, const FEquippedPlayerCustomization customization)
{

}

ADBDPlayerState_Menu::ADBDPlayerState_Menu()
{

}

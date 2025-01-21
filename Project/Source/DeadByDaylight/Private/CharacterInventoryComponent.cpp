#include "CharacterInventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "EInventoryType.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"

class ACollectable;
class UItemAddon;

void UCharacterInventoryComponent::StoreItem()
{

}

ACollectable* UCharacterInventoryComponent::SpawnAndCollectItem(FName itemID)
{
	return NULL;
}

void UCharacterInventoryComponent::RemoveFromInventory(ACollectable* item)
{

}

void UCharacterInventoryComponent::OnRep_Inventory()
{

}

void UCharacterInventoryComponent::OnRep_GeneralAddons()
{

}

void UCharacterInventoryComponent::OnRep_BackpackInventory()
{

}

void UCharacterInventoryComponent::Multicast_RemoveFromInventory_Implementation(ACollectable* item)
{

}

void UCharacterInventoryComponent::Multicast_ClearAndDestroyInventory_Implementation()
{

}

void UCharacterInventoryComponent::Multicast_AddToInventory_Implementation(ACollectable* item, EInventoryType inventoryType)
{

}

bool UCharacterInventoryComponent::IsUsingAimItem() const
{
	return false;
}

bool UCharacterInventoryComponent::HasStoredItem() const
{
	return false;
}

bool UCharacterInventoryComponent::HasMaximumItemCount(const ACollectable* item) const
{
	return false;
}

bool UCharacterInventoryComponent::HasItem() const
{
	return false;
}

bool UCharacterInventoryComponent::HasInInventory(TSubclassOf<ACollectable> item, EInventoryType inventoryType)
{
	return false;
}

bool UCharacterInventoryComponent::HasEquippedItem() const
{
	return false;
}

FName UCharacterInventoryComponent::GetItemID() const
{
	return NAME_None;
}

int32 UCharacterInventoryComponent::GetItemCountByID(FName itemID) const
{
	return 0;
}

int32 UCharacterInventoryComponent::GetItemCount() const
{
	return 0;
}

ACollectable* UCharacterInventoryComponent::GetItem() const
{
	return NULL;
}

ACollectable* UCharacterInventoryComponent::GetFirstItemFromInventory(TSubclassOf<ACollectable> item, EInventoryType inventoryType)
{
	return NULL;
}

TArray<UItemAddon*> UCharacterInventoryComponent::GetAddons()
{
	return TArray<UItemAddon*>();
}

void UCharacterInventoryComponent::EquipItem()
{

}

void UCharacterInventoryComponent::Collect(ACollectable* item, EInventoryType inventoryType)
{

}

void UCharacterInventoryComponent::ClearAndDestroyInventory()
{

}

void UCharacterInventoryComponent::Authority_UseInventoryItem()
{

}

void UCharacterInventoryComponent::Authority_Drop(ACollectable* item, const FVector& location, const FRotator& rotation, bool onDeath, bool adjustToGround, bool dropInChest)
{

}

void UCharacterInventoryComponent::AddToInventory(ACollectable* item, EInventoryType inventoryType)
{

}

void UCharacterInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCharacterInventoryComponent, _inventory);
	DOREPLIFETIME(UCharacterInventoryComponent, _generalAddons);
	DOREPLIFETIME(UCharacterInventoryComponent, _backpackInventory);
}

UCharacterInventoryComponent::UCharacterInventoryComponent()
{
	this->_inventory = TArray<ACollectable*>();
	this->_generalAddons = TArray<UItemAddon*>();
	this->_backpackInventory = TArray<ACollectable*>();
	this->_localInventory = TArray<ACollectable*>();
	this->_localBackpackInventory = TArray<ACollectable*>();
	this->_allAddons = TArray<UItemAddon*>();
}

#include "Searchable.h"
#include "Net/UnrealNetwork.h"
#include "SearchableSpawnPoint.h"

class ADBDPlayer;
class UPrimitiveComponent;
class ACollectable;

void ASearchable::SetHasBeenSearched(bool newHasBeenSearched)
{

}

bool ASearchable::HasBeenSearched() const
{
	return false;
}

UPrimitiveComponent* ASearchable::GetInteractorPrimitiveComponent_Implementation() const
{
	return NULL;
}

bool ASearchable::ContainsSpawnedItem() const
{
	return false;
}

ACollectable* ASearchable::Authority_SpawnObject(ADBDPlayer* player)
{
	return NULL;
}

void ASearchable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASearchable, _itemInsideSearchable);
}

ASearchable::ASearchable()
{
	this->Weight = 1.000000;
	this->ItemRarity = EItemRarity::Common;
	this->IsSecret = false;
	this->_searchableSpawnPoint = CreateDefaultSubobject<USearchableSpawnPoint>(TEXT("SearchableSpawnPoint"));
	this->_itemIdToSpawn = NAME_None;
	this->_hasBeenSearched = false;
	this->_spawnedItem = NULL;
	this->_itemInsideSearchable = NULL;
	this->_numberOfSearchesWhileOpenPerPlayer = TMap<ADBDPlayer*, uint8>();
}

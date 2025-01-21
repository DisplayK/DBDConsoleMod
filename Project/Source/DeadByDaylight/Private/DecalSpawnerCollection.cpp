#include "DecalSpawnerCollection.h"
#include "ESpawnerStrategyType.h"
#include "UObject/NoExportTypes.h"

class UDBDDecalComponent;
class UMaterialInterface;
class UDecalSpawner;
class UObject;

UDBDDecalComponent* UDecalSpawnerCollection::SpawnDecalAtLocation(FName decalSpawnerName, const FVector& decalSize, const FVector& location, const FRotator& rotation, float lifeSpan, FName decalType, const int32 sortOrder)
{
	return NULL;
}

void UDecalSpawnerCollection::ReleaseDecalSpawner(FName decalSpawnerName)
{

}

UDecalSpawner* UDecalSpawnerCollection::CreateDecalSpawner(const UObject* worldContextObject, FName decalSpawnerName, UMaterialInterface* decalMaterial, int32 poolSize, ESpawnerStrategyType spawnerStrateryType)
{
	return NULL;
}

UDecalSpawnerCollection::UDecalSpawnerCollection()
{
	this->_decalSpawners = TMap<FName, UDecalSpawner*>();
}

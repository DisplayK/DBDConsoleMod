#include "DBDClientSyncer.h"
#include "SpawnInfo.h"

class UPaperTileMap;

void ADBDClientSyncer::Multicast_SyncSeed_Implementation(int32 seed, UPaperTileMap* tileMap, int32 generationPlayerCount, const FString& premadeMap)
{

}

void ADBDClientSyncer::Multicast_SyncFinalLocallySpawnCount_Implementation(int16 numLocal)
{

}

void ADBDClientSyncer::Multicast_SyncActorToSpawnLocally_Implementation(const TArray<FSpawnInfo>& spawnInfos, int16 startIndex)
{

}

ADBDClientSyncer::ADBDClientSyncer()
{
	this->_actorsToSpawnLocally = TArray<FSpawnInfo>();
	this->_currentQueue = TArray<FSpawnInfo>();
	this->_tileMap = NULL;
}

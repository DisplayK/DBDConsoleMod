#include "ProceduralLevelBuilder.h"
#include "Net/UnrealNetwork.h"
#include "ETileSpawnPointType.h"
#include "GenerationParams.h"

class AActor;

void AProceduralLevelBuilder::SyncSeeds()
{

}

void AProceduralLevelBuilder::StartGenerationOnSyncerReady()
{

}

AActor* AProceduralLevelBuilder::SpawnActor(UClass* actorClass, ETileSpawnPointType spawnPointType)
{
	return NULL;
}

void AProceduralLevelBuilder::Multicast_DebugShareGenerationData_Implementation(FGenerationParams usedParams)
{

}

void AProceduralLevelBuilder::BuildFromSeed()
{

}

void AProceduralLevelBuilder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AProceduralLevelBuilder, _syncer);
}

AProceduralLevelBuilder::AProceduralLevelBuilder()
{
	this->PathToMapDirectory = TEXT("");
	this->PathToTilesDirectory = TEXT("");
	this->KillerMinProximityFromCamper = 3.000000;
	this->SurvivorMinProximityFromOtherCamper = 1.000000;
	this->MinProximityBetweenGenerators = 0.500000;
	this->MinProximityBetweenChests = 1.000000;
	this->MinProximityBetweenTotems = 1.000000;
	this->SurvivorMinProximityFromGenerator = 0.300000;
	this->SurvivorMinProximityFromTotem = 0.200000;
	this->SurvivorMaxLineOfSightFromTotem = 2.000000;
	this->MinProximityBetweenSpecialBehaviourItems = 0.500000;
	this->SpecialBehaviourItemMinProximityFromSurvivor = 0.500000;
	this->SpecialBehaviourItemMinProximityFromKiller = 0.500000;
	this->DebugMap = NULL;
	this->DebugTiles = TArray<TSubclassOf<ATile>>();
	this->SmallMeatLockerMinProximityFromKillerLair = 1.500000;
	this->FactorToAdjustToWhenOutOfProximity = 0.000000;
	this->FactorToAdjustToWhenInLineOfSight = 0.000000;
	this->HeightAmplifier = 3.000000;
	this->HeightAmplifierActivationHeight = 350.000000;
	this->ProceduralGenerationData = NULL;
	this->TileWeightRateOfDecay = 0.001000;
	this->QuadTileWeightRateOfDecay = 0.010000;
	this->_tileClass = NULL;
	this->_mapData = NULL;
	this->_availableTilesLibrary = NULL;
	this->_availableDerivedTileLibrary = NULL;
	this->DesignTunableClass = NULL;
	this->_designTunables = NULL;
	this->_tileMatrix = NULL;
	this->_tileBank = NULL;
	this->_killerLairSpawner = NULL;
	this->_preloadAssetReferences = TArray<FSoftObjectPath>();
	this->_chestItemAssetReferences = TArray<TSubclassOf<AActor>>();
	this->_slasherPawn = NULL;
	this->_tilesThatHaveBeenSpawned = TArray<ATile*>();
	this->_debugProceduralDatas = NULL;
	this->_syncer = NULL;
	this->_blackboardComp = NULL;
	this->_edgeObjectHandlingStrategy = NULL;
	this->_backupKillerLairTile = NULL;
}

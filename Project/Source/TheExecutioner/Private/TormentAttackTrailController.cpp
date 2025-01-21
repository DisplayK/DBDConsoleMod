#include "TormentAttackTrailController.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"

void ATormentAttackTrailController::OnTrailPointRemovedCosmetic_Implementation(int32 index)
{

}

void ATormentAttackTrailController::OnStartTrailTimerDone()
{

}

void ATormentAttackTrailController::OnIntervalBetweenPointsTimerDone()
{

}

void ATormentAttackTrailController::Multicast_StartAttackTrail_Implementation(const float serverTimeSpawn, const FVector_NetQuantize10 location, const FRotator rotation)
{

}

void ATormentAttackTrailController::DisplayAttackTrailSpawnSign_Implementation()
{

}

ATormentAttackTrailController::ATormentAttackTrailController()
{
	this->_tormentTrailAttackPointClass = NULL;
	this->_tormentTrailAttackSign = NULL;
	this->_pointsTransform = TArray<FTransform>();
	this->_spawnedAttackPointList = TArray<FSpawnedAttackPoint>();
	this->_trailSpawnStarted = false;
	this->_soundDistanceOnTrail = 0.000000;
	this->_mobileTormentTrailRenderer = NULL;
}

#include "LamentConfigurationSpawnStrategy.h"
#include "Net/UnrealNetwork.h"

void ULamentConfigurationSpawnStrategy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULamentConfigurationSpawnStrategy, _cached_spawnsInfo);
}

ULamentConfigurationSpawnStrategy::ULamentConfigurationSpawnStrategy()
{
	this->_killerPointDistanceMultiplier = 2.500000;
	this->_survivorPointDistanceMultiplier = 1.000000;
	this->_maxDistancePointAllowed = 5000.000000;
	this->_minSurvivorDistance = 1000.000000;
	this->_minSurvivorDistancePointPenalty = 1000.000000;
	this->_minKillerDistance = 1500.000000;
	this->_minHatchDistance = 100.000000;
	this->_minDistanceFromOtherSpawns = 750.000000;
	this->_minKillerDistancePointPenalty = 1000.000000;
	this->_numberOfSpawnPointInLottery = 3;
	this->_pointPenaltyPerUsedLocationTime = 500.000000;
	this->_spawnPointsTypes = TArray<ETileSpawnPointType>();
	this->_downRaycastLength = 10000.000000;
	this->_rayCastZOffet = 150.000000;
	this->_navmeshCheckRadius = 100.000000;
	this->_cached_spawnsInfo = TArray<FLamentConfigurationSpawnInfo>();
	this->_hatches = TArray<AHatch*>();
}

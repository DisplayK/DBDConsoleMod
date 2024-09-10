#include "SnowmanSpawnPlacementStrategy.h"

void USnowmanSpawnPlacementStrategy::Authority_OnIntroCompletedOrLevelReadyToPlay()
{

}

USnowmanSpawnPlacementStrategy::USnowmanSpawnPlacementStrategy()
{
	this->_collisionCapsuleHalfHeight = 0.000000;
	this->_collisionCapsuleRadius = 0.000000;
	this->_minDistanceFromOtherActiveSnowmenSquared = 0.000000;
	this->_minDistanceFromOtherPlayersSquared = 0.000000;
	this->_minPalletDistanceSquared = 0.000000;
	this->_minHatchSquaredDistance = 0.000000;
	this->_spawnPointsTileTypes = TArray<ETileSpawnPointType>();
	this->_spawnPointsGameplayElementTypes = TArray<EGameplayElementType>();
	this->_spawnLocationData = TArray<FSnowmanSpawnLocationData>();
	this->_hatches = TArray<AHatch*>();
	this->_pallets = TArray<APallet*>();
	this->_downRaycastLength = 1000.000000;
	this->_rayCastZOffet = 25.000000;
	this->_distanceToGroundToleranceSquared = 625.000000;
}

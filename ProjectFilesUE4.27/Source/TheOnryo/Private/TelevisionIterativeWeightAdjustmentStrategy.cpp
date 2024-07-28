#include "TelevisionIterativeWeightAdjustmentStrategy.h"

UTelevisionIterativeWeightAdjustmentStrategy::UTelevisionIterativeWeightAdjustmentStrategy()
{
	this->_unmatchedGenerators = TArray<USceneComponent*>();
	this->_selectedSpawners = TArray<UActorSpawner*>();
	this->_penaltyFromDistanceToClosestTelevision = NULL;
	this->_penaltyFromDistanceToClosestTelevisionWhenGeneratorHasOtherTelevisionNearby = NULL;
	this->_scoreFromDistanceFromClosestGenerator = NULL;
}

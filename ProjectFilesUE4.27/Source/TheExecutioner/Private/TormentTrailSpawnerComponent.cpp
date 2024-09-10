#include "TormentTrailSpawnerComponent.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "ETrailType.h"

class ATormentTrailController;
class AActor;

void UTormentTrailSpawnerComponent::Sever_SpawnTrailController_Implementation(ATormentTrailController* trailController, const FVector_NetQuantize10 location, const FRotator rotation)
{

}

bool UTormentTrailSpawnerComponent::Sever_SpawnTrailController_Validate(ATormentTrailController* trailController, const FVector_NetQuantize10 location, const FRotator rotation)
{
	return true;
}

void UTormentTrailSpawnerComponent::Server_StopTrailController_Implementation(ATormentTrailController* trailController)
{

}

void UTormentTrailSpawnerComponent::Server_RequestMoreActorInPool_Implementation(const ETrailType trailType)
{

}

bool UTormentTrailSpawnerComponent::Server_RequestMoreActorInPool_Validate(const ETrailType trailType)
{
	return true;
}

void UTormentTrailSpawnerComponent::OnLevelReadyToPlay()
{

}

void UTormentTrailSpawnerComponent::OnInRangeChanged(const bool inRange, const AActor* actor)
{

}

UTormentTrailSpawnerComponent::UTormentTrailSpawnerComponent()
{
	this->_currentTrailController = NULL;
	this->_tormentTrailPointCollectionComponent = NULL;
	this->_restrictedTormentTrailPointCollectionComponent = NULL;
	this->_tormentTrailControllerPool = NULL;
	this->_tormentRestrictedTrailControllerPool = NULL;
	this->_actorsInRange = TArray<AActor*>();
	this->_forwardMultiplierSlopeDetection = 30.000000;
	this->_epsilonToAddToSpawnLocationInZ = 1.000000;
}

#include "SnowmanWinterEventComponent.h"

void USnowmanWinterEventComponent::DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds)
{

}

void USnowmanWinterEventComponent::DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds)
{

}

void USnowmanWinterEventComponent::DBD_Winter2021RecalculateSpawnPoints()
{

}

void USnowmanWinterEventComponent::DBD_Winter2021ForceRespawnAllSnowmen()
{

}

USnowmanWinterEventComponent::USnowmanWinterEventComponent()
{
	this->_snowmanSpawnPlacementStrategyClass = NULL;
	this->_snowmanClass = NULL;
	this->_survivorInSnowmanEffect = NULL;
	this->_killerInSnowmanEffect = NULL;
	this->_snowmanSpawnPlacementStrategy = NULL;
	this->_snowmen = TArray<ASnowman*>();
}

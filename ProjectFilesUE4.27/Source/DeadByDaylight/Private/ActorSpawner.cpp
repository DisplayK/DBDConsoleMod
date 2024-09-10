#include "ActorSpawner.h"

class AActor;

bool UActorSpawner::UseActivatedElement() const
{
	return false;
}

bool UActorSpawner::IsEnabled() const
{
	return false;
}

void UActorSpawner::EditorForceSpawnVisualization()
{

}

void UActorSpawner::AuthoritySelect(bool selected)
{

}

AActor* UActorSpawner::AuthorityGetSpawnedActor() const
{
	return NULL;
}

void UActorSpawner::Authority_SpawnActorAsyncEvent()
{

}

UActorSpawner::UActorSpawner()
{
	this->Type = EGameplayElementType::Generic;
	this->Visualization = NULL;
	this->ActivatedByDefault = true;
	this->ActivatedSceneElement = TArray<FActorSpawnerProperties>();
	this->DeactivatedSceneElement = TArray<FActorSpawnerProperties>();
	this->Weight = 1.000000;
	this->SpawnCountMax = 1;
	this->SpawnPriorityTier = 1;
	this->WeightInfluenceable = true;
	this->WeightInfluencer = true;
	this->Cost = 1.000000;
	this->_toSpawn = NULL;
	this->_spawnedActorOnAuthority = NULL;
}

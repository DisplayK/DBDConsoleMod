#include "ActorVariationSpawner.h"

UActorVariationSpawner::UActorVariationSpawner()
{
	this->Visualization = NULL;
	this->Variations = TArray<FActorVariationElements>();
	this->_toSpawn = NULL;
}

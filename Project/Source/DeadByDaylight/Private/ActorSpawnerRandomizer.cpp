#include "ActorSpawnerRandomizer.h"

UActorSpawnerRandomizer::UActorSpawnerRandomizer()
{
	this->ActivatedSpawnerContentLists = TArray<FSpawnerElement>();
	this->DeactivatedSpawnerContentLists = TArray<FSpawnerElement>();
}

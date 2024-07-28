#include "ObjectRandomizer.h"

UObjectRandomizer::UObjectRandomizer()
{
	this->Spawners = TArray<UActorSpawner*>();
	this->MinPopulation = 0;
	this->MaxPopulation = 0;
}

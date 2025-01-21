#include "ManagedGameplayElementData.h"

FManagedGameplayElementData::FManagedGameplayElementData()
{
	this->ActivatedSpawners = TArray<UActorSpawner*>();
	this->RemovedSpawners = TArray<UActorSpawner*>();
	this->PopulationType = EGameplayElementType::Generic;
	this->CurrentPopulationCost = 0.0f;
	this->MaxPopulationCost = 0;
	this->MinPopulationCost = 0;
	this->MapWidth = 0.0f;
	this->MinProximityBetweenElements = 0.0f;
	this->MinDistSqrBetweenElements = 0.0f;
	this->TileWidth = 0.0f;
	this->FactorToAdjustToWhenOutOfProximity = 0.0f;
}

#include "ManagedGameplayElementsPopulation.h"

FManagedGameplayElementsPopulation::FManagedGameplayElementsPopulation()
{
	this->Type = EGameplayElementType::Generic;
	this->GameplayElementBlueprint = NULL;
	this->MinDistance = 0.0f;
	this->MinPopulation = 0;
	this->MaxPopulation = 0;
}

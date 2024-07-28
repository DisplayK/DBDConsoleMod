#include "EdgeObjectHandlingStrategy.h"

UEdgeObjectHandlingStrategy::UEdgeObjectHandlingStrategy()
{
	this->_edgeObjectSpawners = TArray<UActorSpawner*>();
	this->_edgeObjectBlockers = TArray<UActorSpawner*>();
}

#include "ShortStats.h"

FShortStats::FShortStats()
{
	this->FlatAggregate = TArray<FStat>();
	this->CounterAggregate = TArray<FCounter>();
	this->MemoryAggregate = TArray<FMemoryStat>();
}

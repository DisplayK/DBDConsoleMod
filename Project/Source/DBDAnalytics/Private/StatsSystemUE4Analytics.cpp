#include "StatsSystemUE4Analytics.h"

FStatsSystemUE4Analytics::FStatsSystemUE4Analytics()
{
	this->Name = TEXT("");
	this->bIsBudget = false;
	this->MatchId = TEXT("");
	this->MapName = TEXT("");
	this->FlatAggregate = TArray<FStat>();
	this->CounterAggregate = TArray<FCounter>();
	this->MemoryAggregate = TArray<FMemoryStat>();
}

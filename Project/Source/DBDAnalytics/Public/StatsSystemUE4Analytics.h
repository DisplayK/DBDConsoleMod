#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "Stat.h"
#include "Counter.h"
#include "MemoryStat.h"
#include "StatsSystemUE4Analytics.generated.h"

USTRUCT()
struct FStatsSystemUE4Analytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Name;

	UPROPERTY()
	bool bIsBudget;

	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString MapName;

	UPROPERTY()
	TArray<FStat> FlatAggregate;

	UPROPERTY()
	TArray<FCounter> CounterAggregate;

	UPROPERTY()
	TArray<FMemoryStat> MemoryAggregate;

public:
	DBDANALYTICS_API FStatsSystemUE4Analytics();
};

FORCEINLINE uint32 GetTypeHash(const FStatsSystemUE4Analytics) { return 0; }

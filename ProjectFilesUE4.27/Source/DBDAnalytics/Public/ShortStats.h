#pragma once

#include "CoreMinimal.h"
#include "Stat.h"
#include "Counter.h"
#include "MemoryStat.h"
#include "ShortStats.generated.h"

USTRUCT()
struct FShortStats
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FStat> FlatAggregate;

	UPROPERTY()
	TArray<FCounter> CounterAggregate;

	UPROPERTY()
	TArray<FMemoryStat> MemoryAggregate;

public:
	DBDANALYTICS_API FShortStats();
};

FORCEINLINE uint32 GetTypeHash(const FShortStats) { return 0; }

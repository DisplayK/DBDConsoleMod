#pragma once

#include "CoreMinimal.h"
#include "StatsProgressionData.generated.h"

USTRUCT()
struct FStatsProgressionData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName Name;

	UPROPERTY()
	float Value;

public:
	DBDANALYTICS_API FStatsProgressionData();
};

FORCEINLINE uint32 GetTypeHash(const FStatsProgressionData) { return 0; }

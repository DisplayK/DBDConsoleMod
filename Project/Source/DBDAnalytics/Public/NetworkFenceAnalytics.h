#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "NetworkFenceAnalytics.generated.h"

USTRUCT()
struct FNetworkFenceAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString RecentLogs;

	UPROPERTY()
	FString MatchId;

public:
	DBDANALYTICS_API FNetworkFenceAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FNetworkFenceAnalytics) { return 0; }

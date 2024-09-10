#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchIncentivesFetchedAnalytics.generated.h"

USTRUCT()
struct FMatchIncentivesFetchedAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 KillerPercentageIncentive;

	UPROPERTY()
	int32 SurvivorPercentageIncentive;

public:
	DBDANALYTICS_API FMatchIncentivesFetchedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchIncentivesFetchedAnalytics) { return 0; }

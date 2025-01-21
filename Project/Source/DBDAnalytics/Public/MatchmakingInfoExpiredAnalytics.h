#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingInfoExpiredAnalytics.generated.h"

USTRUCT()
struct FMatchmakingInfoExpiredAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MatchmakingSessionGuid;

public:
	DBDANALYTICS_API FMatchmakingInfoExpiredAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingInfoExpiredAnalytics) { return 0; }

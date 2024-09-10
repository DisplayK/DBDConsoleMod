#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CrowdChoiceOnGameRoundStartedAnalytics.generated.h"

USTRUCT()
struct FCrowdChoiceOnGameRoundStartedAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PollId;

	UPROPERTY()
	FString MatchId;

public:
	DBDANALYTICS_API FCrowdChoiceOnGameRoundStartedAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCrowdChoiceOnGameRoundStartedAnalytics) { return 0; }

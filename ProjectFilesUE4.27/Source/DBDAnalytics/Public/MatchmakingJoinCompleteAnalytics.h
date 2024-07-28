#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MatchmakingJoinCompleteAnalytics.generated.h"

USTRUCT()
struct FMatchmakingJoinCompleteAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString SessionName;

	UPROPERTY()
	int32 Result;

public:
	DBDANALYTICS_API FMatchmakingJoinCompleteAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingJoinCompleteAnalytics) { return 0; }

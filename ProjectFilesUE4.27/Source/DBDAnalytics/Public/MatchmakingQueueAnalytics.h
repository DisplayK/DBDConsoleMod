#pragma once

#include "CoreMinimal.h"
#include "MatchmakingAnalytics.h"
#include "MatchmakingQueueAnalytics.generated.h"

USTRUCT()
struct FMatchmakingQueueAnalytics: public FMatchmakingAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString QueueStartTime;

	UPROPERTY()
	FString QueueEndTime;

	UPROPERTY()
	FString QueueResult;

	UPROPERTY()
	bool CrossPlayEnabled;

public:
	DBDANALYTICS_API FMatchmakingQueueAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMatchmakingQueueAnalytics) { return 0; }

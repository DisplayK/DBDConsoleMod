#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CrowdChoiceSummaryResultAnalytics.generated.h"

USTRUCT()
struct FCrowdChoiceSummaryResultAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PollId;

	UPROPERTY()
	FString PollType;

	UPROPERTY()
	FString Status;

	UPROPERTY()
	float PollDuration;

	UPROPERTY()
	TArray<float> VoteTimestamps;

	UPROPERTY()
	TArray<int32> NewVotesPerTimestampInterval;

public:
	DBDANALYTICS_API FCrowdChoiceSummaryResultAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCrowdChoiceSummaryResultAnalytics) { return 0; }

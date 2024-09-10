#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CrowdChoiceVoteResultAnalytics.generated.h"

USTRUCT()
struct FCrowdChoiceVoteResultAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PollId;

	UPROPERTY()
	FString VoteOption;

	UPROPERTY()
	int32 VoteCount;

public:
	DBDANALYTICS_API FCrowdChoiceVoteResultAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCrowdChoiceVoteResultAnalytics) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "ScoreEventRewards.generated.h"

USTRUCT()
struct FScoreEventRewards
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Weight;

	UPROPERTY()
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FScoreEventRewards();
};

FORCEINLINE uint32 GetTypeHash(const FScoreEventRewards) { return 0; }

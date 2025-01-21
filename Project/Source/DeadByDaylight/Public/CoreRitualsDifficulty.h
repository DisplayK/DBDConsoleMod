#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "CoreRitualsDifficulty.generated.h"

USTRUCT()
struct FCoreRitualsDifficulty
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float Threshold;

	UPROPERTY()
	float Tolerance;

	UPROPERTY()
	int32 DisplayThreshold;

	UPROPERTY()
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FCoreRitualsDifficulty();
};

FORCEINLINE uint32 GetTypeHash(const FCoreRitualsDifficulty) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "RewardTrackTierData.h"
#include "RewardTrackData.generated.h"

USTRUCT()
struct FRewardTrackData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FRewardTrackTierData> TierInfo;

	UPROPERTY()
	uint32 Requirement;

public:
	DEADBYDAYLIGHT_API FRewardTrackData();
};

FORCEINLINE uint32 GetTypeHash(const FRewardTrackData) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "RewardTrackTierData.generated.h"

USTRUCT()
struct FRewardTrackTierData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	uint32 TierId;

	UPROPERTY()
	uint32 TierGroup;

	UPROPERTY()
	TArray<FRewardResponseItem> Free;

	UPROPERTY(SkipSerialization)
	bool Free_IsSet;

	UPROPERTY()
	TArray<FRewardResponseItem> Premium;

	UPROPERTY(SkipSerialization)
	bool Premium_IsSet;

public:
	DEADBYDAYLIGHT_API FRewardTrackTierData();
};

FORCEINLINE uint32 GetTypeHash(const FRewardTrackTierData) { return 0; }

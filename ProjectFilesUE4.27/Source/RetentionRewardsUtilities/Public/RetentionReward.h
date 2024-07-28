#pragma once

#include "CoreMinimal.h"
#include "ERewardItemType.h"
#include "RetentionReward.generated.h"

USTRUCT()
struct FRetentionReward
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString ItemId;

	UPROPERTY(Transient)
	uint32 Amount;

	UPROPERTY(Transient)
	ERewardItemType RewardType;

	UPROPERTY(Transient)
	TMap<FName, FString> GameSpecificData;

public:
	RETENTIONREWARDSUTILITIES_API FRetentionReward();
};

FORCEINLINE uint32 GetTypeHash(const FRetentionReward) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "ERewardItemType.h"
#include "RewardItem.generated.h"

USTRUCT()
struct FRewardItem
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	ERewardItemType Type;

	UPROPERTY(Transient)
	FString Id;

	UPROPERTY(Transient)
	int32 Amount;

public:
	REWARDUTILITIES_API FRewardItem();
};

FORCEINLINE uint32 GetTypeHash(const FRewardItem) { return 0; }

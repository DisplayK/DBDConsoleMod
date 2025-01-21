#pragma once

#include "CoreMinimal.h"
#include "ESubscriptionClaimType.h"
#include "SubscriptionReward.h"
#include "SubscriptionRewardMap.generated.h"

USTRUCT()
struct FSubscriptionRewardMap
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TMap<ESubscriptionClaimType, FSubscriptionReward> RewardsByClaimType;

public:
	SUBSCRIPTIONSUBSYSTEM_API FSubscriptionRewardMap();
};

FORCEINLINE uint32 GetTypeHash(const FSubscriptionRewardMap) { return 0; }

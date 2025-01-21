#pragma once

#include "CoreMinimal.h"
#include "RewardItem.h"
#include "UObject/NoExportTypes.h"
#include "SubscriptionReward.generated.h"

USTRUCT()
struct FSubscriptionReward
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FRewardItem> Rewards;

	UPROPERTY(Transient)
	FDateTime NextClaimTime;

	UPROPERTY(Transient)
	FString AnalyticsEventId;

public:
	SUBSCRIPTIONSUBSYSTEM_API FSubscriptionReward();
};

FORCEINLINE uint32 GetTypeHash(const FSubscriptionReward) { return 0; }

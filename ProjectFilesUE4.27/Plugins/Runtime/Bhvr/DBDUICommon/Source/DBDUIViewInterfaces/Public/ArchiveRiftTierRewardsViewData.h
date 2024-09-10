#pragma once

#include "CoreMinimal.h"
#include "ETierType.h"
#include "RewardWrapperViewData.h"
#include "ArchiveRiftTierRewardsViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchiveRiftTierRewardsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	int32 Tier;

	UPROPERTY(BlueprintReadWrite)
	ETierType TierType;

	UPROPERTY(BlueprintReadWrite)
	float TierProgress;

	UPROPERTY(BlueprintReadWrite)
	bool IsPremiumUnlocked;

	UPROPERTY(BlueprintReadWrite)
	bool IsCurrentTier;

	UPROPERTY(BlueprintReadWrite)
	TArray<FRewardWrapperViewData> FreeRewards;

	UPROPERTY(BlueprintReadWrite)
	TArray<FRewardWrapperViewData> PremiumRewards;

public:
	DBDUIVIEWINTERFACES_API FArchiveRiftTierRewardsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveRiftTierRewardsViewData) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "S3PrestigeRewardItem.h"
#include "S3PrestigeRewards.generated.h"

USTRUCT()
struct FS3PrestigeRewards
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 PrestigeLevel;

	UPROPERTY()
	TArray<FS3PrestigeRewardItem> Rewards;

public:
	DEADBYDAYLIGHT_API FS3PrestigeRewards();
};

FORCEINLINE uint32 GetTypeHash(const FS3PrestigeRewards) { return 0; }

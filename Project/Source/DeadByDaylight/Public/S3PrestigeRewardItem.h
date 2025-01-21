#pragma once

#include "CoreMinimal.h"
#include "S3PrestigeRewardItem.generated.h"

USTRUCT()
struct FS3PrestigeRewardItem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	FString RewardType;

	UPROPERTY()
	int32 PerkLevel;

	UPROPERTY(SkipSerialization)
	bool PerkLevel_IsSet;

public:
	DEADBYDAYLIGHT_API FS3PrestigeRewardItem();
};

FORCEINLINE uint32 GetTypeHash(const FS3PrestigeRewardItem) { return 0; }

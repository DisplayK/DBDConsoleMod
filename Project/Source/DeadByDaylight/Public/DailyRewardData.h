#pragma once

#include "CoreMinimal.h"
#include "EAtlantaRewardType.h"
#include "EUMGDailyRewardWidgetState.h"
#include "EItemRarity.h"
#include "DailyRewardData.generated.h"

USTRUCT()
struct FDailyRewardData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	EAtlantaRewardType RewardType;

	UPROPERTY(Transient)
	int32 CurrencyAmount;

	UPROPERTY(Transient)
	FString IconPath;

	UPROPERTY(Transient)
	FString ParentIconPath;

	UPROPERTY(Transient)
	FString ItemName;

	UPROPERTY(Transient)
	int32 Index;

	UPROPERTY(Transient)
	bool IsMarkedSpecial;

	UPROPERTY(Transient)
	EItemRarity ItemRarity;

	UPROPERTY(Transient)
	EUMGDailyRewardWidgetState State;

public:
	DEADBYDAYLIGHT_API FDailyRewardData();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRewardData) { return 0; }

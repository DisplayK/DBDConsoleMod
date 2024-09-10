#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.generated.h"

USTRUCT()
struct FRewardResponseItem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Type;

	UPROPERTY(SkipSerialization)
	bool Type_IsSet;

	UPROPERTY()
	FString Id;

	UPROPERTY()
	int32 Amount;

public:
	DEADBYDAYLIGHT_API FRewardResponseItem();
};

FORCEINLINE uint32 GetTypeHash(const FRewardResponseItem) { return 0; }

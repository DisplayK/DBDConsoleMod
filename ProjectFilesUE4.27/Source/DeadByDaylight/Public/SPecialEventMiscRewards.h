#pragma once

#include "CoreMinimal.h"
#include "RewardResponseItem.h"
#include "SPecialEventMiscRewards.generated.h"

USTRUCT()
struct FSPecialEventMiscRewards
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	TArray<FRewardResponseItem> Rewards;

public:
	DEADBYDAYLIGHT_API FSPecialEventMiscRewards();
};

FORCEINLINE uint32 GetTypeHash(const FSPecialEventMiscRewards) { return 0; }

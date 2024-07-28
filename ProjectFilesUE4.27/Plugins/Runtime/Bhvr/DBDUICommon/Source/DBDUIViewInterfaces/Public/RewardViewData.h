#pragma once

#include "CoreMinimal.h"
#include "RewardViewData.generated.h"

USTRUCT(BlueprintType)
struct FRewardViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHighlighted;

public:
	DBDUIVIEWINTERFACES_API FRewardViewData();
};

FORCEINLINE uint32 GetTypeHash(const FRewardViewData) { return 0; }

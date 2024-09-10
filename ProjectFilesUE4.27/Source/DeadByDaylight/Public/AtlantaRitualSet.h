#pragma once

#include "CoreMinimal.h"
#include "AtlantaRitualInstance.h"
#include "RewardItem.h"
#include "AtlantaRitualSet.generated.h"

USTRUCT()
struct FAtlantaRitualSet
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FAtlantaRitualInstance> Instances;

	UPROPERTY()
	TArray<FRewardItem> RewardItems;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualSet();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualSet) { return 0; }

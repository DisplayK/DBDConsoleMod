#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RewardTrackContainer.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API URewardTrackContainer : public UObject
{
	GENERATED_BODY()

public:
	URewardTrackContainer();
};

FORCEINLINE uint32 GetTypeHash(const URewardTrackContainer) { return 0; }

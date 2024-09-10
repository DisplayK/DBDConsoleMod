#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RewardUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API URewardUtilities : public UObject
{
	GENERATED_BODY()

public:
	URewardUtilities();
};

FORCEINLINE uint32 GetTypeHash(const URewardUtilities) { return 0; }

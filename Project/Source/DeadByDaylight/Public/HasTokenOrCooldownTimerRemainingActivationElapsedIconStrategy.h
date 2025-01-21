#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "HasTokenOrCooldownTimerRemainingActivationElapsedIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UHasTokenOrCooldownTimerRemainingActivationElapsedIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UHasTokenOrCooldownTimerRemainingActivationElapsedIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UHasTokenOrCooldownTimerRemainingActivationElapsedIconStrategy) { return 0; }

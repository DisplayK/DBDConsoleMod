#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActivationTimerRemainingCooldownElapsedIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActivationTimerRemainingCooldownElapsedIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActivationTimerRemainingCooldownElapsedIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivationTimerRemainingCooldownElapsedIconStrategy) { return 0; }

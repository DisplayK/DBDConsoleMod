#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActivationTimerElapsedCooldownElapsedIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActivationTimerElapsedCooldownElapsedIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActivationTimerElapsedCooldownElapsedIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivationTimerElapsedCooldownElapsedIconStrategy) { return 0; }

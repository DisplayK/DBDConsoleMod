#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "StartLitActivationTimerRemainingCooldownElapsedIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UStartLitActivationTimerRemainingCooldownElapsedIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UStartLitActivationTimerRemainingCooldownElapsedIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UStartLitActivationTimerRemainingCooldownElapsedIconStrategy) { return 0; }

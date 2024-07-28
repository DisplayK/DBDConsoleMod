#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActivationTimerRemainingPercentIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActivationTimerRemainingPercentIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActivationTimerRemainingPercentIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivationTimerRemainingPercentIconStrategy) { return 0; }

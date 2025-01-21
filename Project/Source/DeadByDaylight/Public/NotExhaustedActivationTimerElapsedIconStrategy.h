#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "NotExhaustedActivationTimerElapsedIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UNotExhaustedActivationTimerElapsedIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UNotExhaustedActivationTimerElapsedIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UNotExhaustedActivationTimerElapsedIconStrategy) { return 0; }

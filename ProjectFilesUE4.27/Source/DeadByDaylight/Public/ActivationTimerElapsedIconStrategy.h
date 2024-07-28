#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActivationTimerElapsedIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActivationTimerElapsedIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActivationTimerElapsedIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivationTimerElapsedIconStrategy) { return 0; }

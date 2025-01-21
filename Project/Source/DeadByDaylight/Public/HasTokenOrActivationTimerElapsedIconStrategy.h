#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "HasTokenOrActivationTimerElapsedIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UHasTokenOrActivationTimerElapsedIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UHasTokenOrActivationTimerElapsedIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UHasTokenOrActivationTimerElapsedIconStrategy) { return 0; }

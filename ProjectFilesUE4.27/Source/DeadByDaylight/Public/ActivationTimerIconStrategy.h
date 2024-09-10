#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActivationTimerIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActivationTimerIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActivationTimerIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActivationTimerIconStrategy) { return 0; }

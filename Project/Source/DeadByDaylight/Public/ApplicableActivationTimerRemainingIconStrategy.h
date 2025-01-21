#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ApplicableActivationTimerRemainingIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UApplicableActivationTimerRemainingIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UApplicableActivationTimerRemainingIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UApplicableActivationTimerRemainingIconStrategy) { return 0; }

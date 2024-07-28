#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ApplicableActivationTimerElapsedIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UApplicableActivationTimerElapsedIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UApplicableActivationTimerElapsedIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UApplicableActivationTimerElapsedIconStrategy) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "CooldownTimerPerkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCooldownTimerPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UCooldownTimerPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCooldownTimerPerkIconStrategy) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActiveWhenKOdAndCooldownTimerPerkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActiveWhenKOdAndCooldownTimerPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActiveWhenKOdAndCooldownTimerPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActiveWhenKOdAndCooldownTimerPerkIconStrategy) { return 0; }

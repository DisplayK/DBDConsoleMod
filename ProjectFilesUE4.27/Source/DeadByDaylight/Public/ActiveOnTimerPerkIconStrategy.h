#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActiveOnTimerPerkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActiveOnTimerPerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActiveOnTimerPerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActiveOnTimerPerkIconStrategy) { return 0; }

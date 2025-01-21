#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "AlwaysVisiblePerkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAlwaysVisiblePerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UAlwaysVisiblePerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UAlwaysVisiblePerkIconStrategy) { return 0; }

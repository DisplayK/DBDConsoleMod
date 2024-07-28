#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ManualIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UManualIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UManualIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UManualIconStrategy) { return 0; }

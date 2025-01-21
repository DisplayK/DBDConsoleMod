#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "ActiveWhenApplicablePerkIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UActiveWhenApplicablePerkIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UActiveWhenApplicablePerkIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UActiveWhenApplicablePerkIconStrategy) { return 0; }

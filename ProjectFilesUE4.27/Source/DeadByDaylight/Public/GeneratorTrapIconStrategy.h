#pragma once

#include "CoreMinimal.h"
#include "BasePerkIconStrategy.h"
#include "GeneratorTrapIconStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UGeneratorTrapIconStrategy : public UBasePerkIconStrategy
{
	GENERATED_BODY()

public:
	UGeneratorTrapIconStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorTrapIconStrategy) { return 0; }

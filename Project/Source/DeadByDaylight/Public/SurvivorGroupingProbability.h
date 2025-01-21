#pragma once

#include "CoreMinimal.h"
#include "ESurvivorGrouping.h"
#include "SurvivorGroupingProbability.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorGroupingProbability
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESurvivorGrouping Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Probability;

public:
	DEADBYDAYLIGHT_API FSurvivorGroupingProbability();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorGroupingProbability) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "FasterChestSearch.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFasterChestSearch : public UStatusEffect
{
	GENERATED_BODY()

public:
	UFasterChestSearch();
};

FORCEINLINE uint32 GetTypeHash(const UFasterChestSearch) { return 0; }

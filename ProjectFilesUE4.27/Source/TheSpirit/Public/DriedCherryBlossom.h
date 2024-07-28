#pragma once

#include "CoreMinimal.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddon.h"
#include "DriedCherryBlossom.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDriedCherryBlossom : public USimpleSpawnEffectsOnAllSurvivorsAddon
{
	GENERATED_BODY()

public:
	UDriedCherryBlossom();
};

FORCEINLINE uint32 GetTypeHash(const UDriedCherryBlossom) { return 0; }

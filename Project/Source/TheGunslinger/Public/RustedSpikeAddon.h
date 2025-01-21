#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "RustedSpikeAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class URustedSpikeAddon : public UItemAddon
{
	GENERATED_BODY()

public:
	URustedSpikeAddon();
};

FORCEINLINE uint32 GetTypeHash(const URustedSpikeAddon) { return 0; }

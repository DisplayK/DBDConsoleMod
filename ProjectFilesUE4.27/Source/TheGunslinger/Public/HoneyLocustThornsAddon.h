#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "HoneyLocustThornsAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHoneyLocustThornsAddon : public UItemAddon
{
	GENERATED_BODY()

public:
	UHoneyLocustThornsAddon();
};

FORCEINLINE uint32 GetTypeHash(const UHoneyLocustThornsAddon) { return 0; }

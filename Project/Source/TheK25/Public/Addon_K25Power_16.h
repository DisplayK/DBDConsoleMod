#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_K25Power_16.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K25Power_16 : public UItemAddon
{
	GENERATED_BODY()

public:
	UAddon_K25Power_16();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K25Power_16) { return 0; }

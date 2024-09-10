#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_K28Power_04.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K28Power_04 : public UItemAddon
{
	GENERATED_BODY()

public:
	UAddon_K28Power_04();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K28Power_04) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_Beartrap_05.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_Beartrap_05 : public UItemAddon
{
	GENERATED_BODY()

public:
	UAddon_Beartrap_05();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Beartrap_05) { return 0; }

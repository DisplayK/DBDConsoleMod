#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_TheBlight_18.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_18 : public UItemAddon
{
	GENERATED_BODY()

public:
	UAddon_TheBlight_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_18) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_K28Power_16.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K28Power_16 : public UOnEventBaseAddon
{
	GENERATED_BODY()

public:
	UAddon_K28Power_16();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K28Power_16) { return 0; }

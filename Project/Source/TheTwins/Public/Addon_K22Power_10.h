#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_K22Power_10.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_10 : public UOnEventBaseAddon
{
	GENERATED_BODY()

public:
	UAddon_K22Power_10();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_10) { return 0; }

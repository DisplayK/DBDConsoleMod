#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_K22Power_20.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_20 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _exposedDuration;

public:
	UAddon_K22Power_20();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_20) { return 0; }

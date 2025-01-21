#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_K22Power_18.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_18 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _auraRevealedDuration;

public:
	UAddon_K22Power_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_18) { return 0; }

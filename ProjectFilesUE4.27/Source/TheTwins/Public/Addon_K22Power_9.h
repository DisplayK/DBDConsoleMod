#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_K22Power_9.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_9 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _blindnessDuration;

public:
	UAddon_K22Power_9();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_9) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Addon_K22Power_8.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_8 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _increaseDestroyTwinTime;

public:
	UAddon_K22Power_8();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_8) { return 0; }

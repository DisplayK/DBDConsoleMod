#pragma once

#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Addon_K22Power_11.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_11 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _increaseRemoveTwinTime;

public:
	UAddon_K22Power_11();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_11) { return 0; }

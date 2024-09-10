#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Addon_K22Power_17.generated.h"

class AConjoinedTwin;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_17 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lingerDuration;

private:
	UFUNCTION()
	void Authority_OnTwinSet(AConjoinedTwin* twin);

public:
	UAddon_K22Power_17();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_17) { return 0; }

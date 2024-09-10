#pragma once

#include "CoreMinimal.h"
#include "VoidEnergyProducer.h"
#include "DBDTunableRowHandle.h"
#include "VoidEnergyGeneratorComponent.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UVoidEnergyGeneratorComponent : public UVoidEnergyProducer
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeWorkingOnGeneratorNeededToAwardEnergy;

public:
	UFUNCTION(BlueprintPure)
	float GetCurrentTimeDoneOnGenerator(ADBDPlayer* player) const;

public:
	UVoidEnergyGeneratorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyGeneratorComponent) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "VoidEnergyProducer.h"
#include "DBDTunableRowHandle.h"
#include "VoidEnergyPumpkinComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UVoidEnergyPumpkinComponent : public UVoidEnergyProducer
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _treatVoidEnergyAmount;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _trickVoidEnergyAmount;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _neutralVoidEnergyAmount;

public:
	UVoidEnergyPumpkinComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVoidEnergyPumpkinComponent) { return 0; }

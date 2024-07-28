#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "PrisonChainAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPrisonChainAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxTensionCharge;

	UPROPERTY(EditDefaultsOnly)
	float _tensionChargeModifier;

public:
	UPrisonChainAddon();
};

FORCEINLINE uint32 GetTypeHash(const UPrisonChainAddon) { return 0; }

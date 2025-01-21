#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "K29HinderedStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK29HinderedStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumMovementSpeedDecrease;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minimumMovementSpeedDecrease;

public:
	UK29HinderedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK29HinderedStatusEffect) { return 0; }

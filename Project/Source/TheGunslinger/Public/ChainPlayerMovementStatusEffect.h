#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "ChainPlayerMovementStatusEffect.generated.h"

class ARifleChain;

UCLASS(meta=(BlueprintSpawnableComponent))
class UChainPlayerMovementStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _baseMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _collisionMovementSpeedMultiplier;

	UPROPERTY(Transient)
	ARifleChain* _chain;

private:
	UFUNCTION()
	void OnIsChainCollidingChanged(bool isColliding);

public:
	UChainPlayerMovementStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UChainPlayerMovementStatusEffect) { return 0; }

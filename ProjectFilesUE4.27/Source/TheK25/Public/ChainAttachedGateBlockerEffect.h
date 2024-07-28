#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GateBlockerEffect.h"
#include "ECamperDamageState.h"
#include "ChainAttachedGateBlockerEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UChainAttachedGateBlockerEffect : public UGateBlockerEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _blockGateLingeringTimeDyingState;

private:
	UFUNCTION()
	void OnSurvivorDamageStateChanged(const ECamperDamageState oldState, const ECamperDamageState newState);

public:
	UChainAttachedGateBlockerEffect();
};

FORCEINLINE uint32 GetTypeHash(const UChainAttachedGateBlockerEffect) { return 0; }

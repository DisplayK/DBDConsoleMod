#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "ChargeTwinJumpInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UChargeTwinJumpInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chargeJumpMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _interactionViewPitchMax;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _interactionViewPitchMin;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _cancelCooldownTime;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnJumpReadyChanged(ADBDPlayer* twin, const bool ready);

public:
	UChargeTwinJumpInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UChargeTwinJumpInteraction) { return 0; }

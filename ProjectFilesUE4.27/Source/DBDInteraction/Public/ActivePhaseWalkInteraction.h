#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "ActivePhaseWalkInteraction.generated.h"

class UCurveFloat;
class ADBDPlayer;
class UAnimMontage;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FTunableStat _fullyChargedSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _accelerationMultiplier;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _chargingSpeedCurve;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _phaseWalkPenaltyThreshold;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _phaseWalkPenaltyValue;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _activePhaseWalkChargeDuration;

	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* _activePhaseWalkChargingMontage;

private:
	UFUNCTION()
	void OnPowerCollected(ADBDPlayer* collector);

	UFUNCTION()
	void OnPlayerLocallyObservedChanged(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintPure)
	float GetChargeTime() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ResetChargeVFX(ADBDPlayer* player);

public:
	UActivePhaseWalkInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UActivePhaseWalkInteraction) { return 0; }

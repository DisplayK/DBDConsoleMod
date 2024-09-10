#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OniDashInteraction.generated.h"

class UCurveFloat;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOniDashInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _chargingSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _dashingSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	float _yawAdjustTime;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _cooldownSpeedCurve;

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerOwner(const ADBDPlayer* player);

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnDashEnd(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnDashBegin(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnChargeEnd(ADBDPlayer* player, const bool chargeCompleted);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnChargeBegin(ADBDPlayer* player);

public:
	UOniDashInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOniDashInteraction) { return 0; }

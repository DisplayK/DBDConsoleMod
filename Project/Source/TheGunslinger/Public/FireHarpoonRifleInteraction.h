#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "EFireHarpoonRifleAimingInteractionSubState.h"
#include "FireHarpoonRifleInteraction.generated.h"

class AHarpoonProjectile;
class UCurveFloat;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UFireHarpoonRifleInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHitPlayer);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFireHarpoon);

public:
	UPROPERTY(BlueprintAssignable)
	FOnFireHarpoon OnFireHarpoon;

	UPROPERTY(BlueprintAssignable)
	FOnHitPlayer OnHitPlayer;

private:
	UPROPERTY(Replicated)
	EFireHarpoonRifleAimingInteractionSubState _aimingSubState;

	UPROPERTY(Transient)
	AHarpoonProjectile* _harpoon;

	UPROPERTY(Transient)
	ADBDPlayer* _collector;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _aimDownSightDuration;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _aimDownSightZoom;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _aimDownSightMousePitchScaleMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _aimDownSightMouseYawScaleMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _aimDownSightGamepadPitchScaleMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _aimDownSightGamepadYawScaleMultiplier;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _aimDownSightGamepadPitchCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _aimDownSightGamepadYawCurve;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _aimDownSightRotationScaleAdjustmentTime;

	UPROPERTY(EditAnywhere)
	FTunableStat _aimDownSightMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _fireDuration;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _fireRotationScaleMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _fireRotationScaleAdjustmentTime;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _fireMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _longRangeShotMinDistance;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _successMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _missMovementSpeedMultiplier;

	UPROPERTY(EditAnywhere)
	FTunableStat _missShotCooldownDuration;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _nearMissShotMaxDistance;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _successShotDuration;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetAimingSubstate(EFireHarpoonRifleAimingInteractionSubState newState);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_HandleMissShotScores(const TArray<ADBDPlayer*>& nearMissedPlayers);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFireHarpoonRifleInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UFireHarpoonRifleInteraction) { return 0; }

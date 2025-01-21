#pragma once

#include "CoreMinimal.h"
#include "OnChargingStarted.h"
#include "OnChargingStopped.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "OnProjectileSummoned.h"
#include "K26SpawnCrowProjectileChargeableInteractionDefinition.generated.h"

class AK26AimingGuide;
class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class UK26PowerStatusHandlerComponent;
class ASlasherPlayer;
class ADBDPlayer;
class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26SpawnCrowProjectileChargeableInteractionDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnChargingStarted OnChargingStarted;

	UPROPERTY(BlueprintAssignable)
	FOnChargingStopped OnChargingStopped;

	UPROPERTY(BlueprintAssignable)
	FOnProjectileSummoned OnProjectileSummoned;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chargeCooldownTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _summonCooldownTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pathLength;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _projectileHeight;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _projectileSummonDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _cooldownGracePeriodPercentage;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _globalSpawnCooldownTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pathDistanceCheckAttempts;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK26AimingGuide> _aimingGuideClass;

	UPROPERTY(Transient)
	AK26AimingGuide* _local_aimingGuide;

	UPROPERTY(Transient)
	bool _isConfirmButtonPressed;

	UPROPERTY(Transient, Export)
	UK26AmmoHandlerComponent* _ammoHandler;

	UPROPERTY(Transient, Export)
	UK26PathHandlerComponent* _pathHandler;

	UPROPERTY(Transient, Export)
	UK26PowerStatusHandlerComponent* _statusHandler;

	UPROPERTY(Transient)
	bool _firedFullyChargedEvent;

	UPROPERTY(Transient)
	bool _isWaitingForSummonAcknowledgement;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _globalCooldownMovementSpeedCurve;

protected:
	UFUNCTION(BlueprintCallable)
	void SetSummonCooldown();

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26PathHandlerComponent* pathHandler, UK26PowerStatusHandlerComponent* statusHandler);

protected:
	UFUNCTION(Server, Reliable)
	void Server_PlaceProjectileWithPath(ASlasherPlayer* killer, const FVector& projectileSpawnPoint, const float killerLocalTime);

private:
	UFUNCTION()
	void OnSummonCooldownComplete();

	UFUNCTION()
	void OnConfirmButtonPressed(ASlasherPlayer* killer);

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnK26CrowSummoned(const ASlasherPlayer* killer, const int32 remainingAmmo, const int32 maxAmmo);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnK26CrowSummonAttemptAcknowledged();

private:
	UFUNCTION()
	void Local_OnGlobalCooldownDone(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintPure)
	bool IsSummonOnCooldown() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFullyCharged(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_LocalOnSummonCooldownComplete(const int32 amountOfAmmoLeft, const bool isInteractionActive);

	UFUNCTION(BlueprintCallable)
	bool CanSummonCrowOnceFullyCharged();

	UFUNCTION(BlueprintCallable)
	bool CanSummonCrow();

public:
	UK26SpawnCrowProjectileChargeableInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK26SpawnCrowProjectileChargeableInteractionDefinition) { return 0; }

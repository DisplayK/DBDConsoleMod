#pragma once

#include "CoreMinimal.h"
#include "OnAcquiredChanged.h"
#include "K25Projectile.h"
#include "PoolableActor.h"
#include "DBDTunableRowHandle.h"
#include "K25UncontrolledProjectile.generated.h"

class ACamperPlayer;

UCLASS()
class AK25UncontrolledProjectile : public AK25Projectile, public IPoolableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _minimumTimeBeforeProjectileLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _maximumTimeBeforeProjectileLaunch;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _projectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _projectileMaximumTravelDistance;

private:
	UPROPERTY(Transient)
	bool _isAcquiredFromPool;

	UPROPERTY(ReplicatedUsing=OnRep_TargetSurvivor)
	ACamperPlayer* _targetSurvivor;

private:
	UFUNCTION()
	void OnRep_TargetSurvivor();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerUncontrolledProjectileSpawnSFX();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25UncontrolledProjectile();
};

FORCEINLINE uint32 GetTypeHash(const AK25UncontrolledProjectile) { return 0; }

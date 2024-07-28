#pragma once

#include "CoreMinimal.h"
#include "PhysicsBasedProjectileMovementComponent.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "K25ControlledProjectileMovementComponent.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25ControlledProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _projectileBaseSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _baseProjectileMaximumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDBDTunableRowHandle _projectileSpeedIncreaseTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTunableStat _maximumTravelDistanceStat;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _projectileSpeedIncreaseMultiplier;

private:
	UPROPERTY(Transient)
	float _totaldistanceTravelled;

public:
	UK25ControlledProjectileMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25ControlledProjectileMovementComponent) { return 0; }

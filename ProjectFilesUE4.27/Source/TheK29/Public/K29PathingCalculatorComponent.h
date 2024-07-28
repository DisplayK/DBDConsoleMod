#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K29PathingCalculatorComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29PathingCalculatorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxStepHeight;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxStepHeightDownwards;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _horizontalAngle;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _verticalAngle;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _gridLength;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _detectionHeightOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _floorSearchLengthFromActorLocation;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minimumWallDashDistanceCarryingSurvivor;

	UPROPERTY(EditDefaultsOnly)
	float _floorCheckDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lineOfSightCapsuleRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lineOfSightCapsuleHeight;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lineOfSightCapsuleHeightOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumWalkableAngle;

	UPROPERTY(EditDefaultsOnly)
	float _groundCollisionDetectionRadius;

	UPROPERTY(EditDefaultsOnly)
	float _allowedGroundBlockerHeight;

	UPROPERTY(EditDefaultsOnly)
	float _minimalLedgeDistance;

public:
	UK29PathingCalculatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29PathingCalculatorComponent) { return 0; }

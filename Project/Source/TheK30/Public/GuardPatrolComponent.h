#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "SpeedBasedNetSyncedValue.h"
#include "GuardPatrolComponent.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGuardPatrolComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated)
	uint8 _currentDirection;

	UPROPERTY(Replicated)
	float _patrolPathLength;

	UPROPERTY(Replicated)
	bool _isInPatrolStartup;

	UPROPERTY(ReplicatedUsing=OnRep_IsPatrolling)
	bool _isPatrolling;

	UPROPERTY(Replicated)
	FSpeedBasedNetSyncedValue _patrolTimeLeft;

	UPROPERTY(Replicated)
	float _patrolTotalDuration;

	UPROPERTY(EditDefaultsOnly)
	float _distanceBeforeHeadingToNextNode;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _spawningVisionAngle;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _patrollingVisionAngle;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeToInterpolateVisionRadius;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _detectionRadiusInterpolationDurationPathLengthMultiplier;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _detectionRadiusPathLenghtMultiplier;

private:
	UFUNCTION()
	void OnRep_IsPatrolling();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGuardPatrolComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGuardPatrolComponent) { return 0; }

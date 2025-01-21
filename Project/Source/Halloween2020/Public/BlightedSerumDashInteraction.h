#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BlightedSerumDashInteraction.generated.h"

class UBlightedSerumCooldownInteraction;
class UBlightedSerumCollisionInteraction;
class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumDashInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UBlightedSerumCooldownInteraction* _cooldownInteraction;

	UPROPERTY(Transient, Export)
	UBlightedSerumCollisionInteraction* _collisionInteraction;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _dashSpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _lookAngleToTurnRateCurveController;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _lookAngleToTurnRateCurveMouse;

	UPROPERTY(EditDefaultsOnly)
	float _dashDuration;

	UPROPERTY(EditDefaultsOnly)
	float _vectorInterpToSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _wallDashAccelerationMultiplier;

	UPROPERTY(EditDefaultsOnly)
	float _cameraPitchRecenterTime;

	UPROPERTY(EditDefaultsOnly)
	float _lookAngleTurnRateModifier;

	UPROPERTY(EditDefaultsOnly)
	float _wallDashCollisionRadius;

	UPROPERTY(EditDefaultsOnly)
	float _wallDashCollisionHeight;

	UPROPERTY(EditDefaultsOnly)
	float _wallDashCollisionRange;

public:
	UFUNCTION(BlueprintCallable)
	void SetCooldownInteraction(UBlightedSerumCooldownInteraction* cooldownInteraction);

	UFUNCTION(BlueprintCallable)
	void SetCollisionInteraction(UBlightedSerumCollisionInteraction* collisionInteraction);

public:
	UBlightedSerumDashInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBlightedSerumDashInteraction) { return 0; }

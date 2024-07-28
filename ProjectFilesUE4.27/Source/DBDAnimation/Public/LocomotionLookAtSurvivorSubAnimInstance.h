#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "LocomotionLookAtSurvivorSubAnimInstance.generated.h"

class UCurveFloat;

UCLASS(NonTransient)
class DBDANIMATION_API ULocomotionLookAtSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	bool _isHealthy;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isUsingAimItem;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _aimOffsetPitch;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _aimOffsetYaw;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _aimOffsetYawInterpolated;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _allowLookAt;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDrasticAimOffsetYawChangeDetected;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _aimOffsetYawInterpolationSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _aimOffsetYawDeadzoneStart;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _aimOffsetYawClampValue;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _aimOffsetYawDrasticChangeUpperLimit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _aimOffsetYawDrasticChangeLowerLimit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _aimOffsetYawDrasticChangeInterpolationSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCurveFloat* _aimOffsetYawInterpolateEaseIn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCurveFloat* _aimOffsetYawInterpolateEaseOut;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _aimOffsetYawInterpolationEaseInLength;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _aimOffsetYawInterpolationEaseOutDistance;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isAimOffsetYawInDeadZone;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _alphaAimOffsetPitchDown;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _alphaAimOffsetPitchCenter;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _alphaAimOffsetPitchUp;

public:
	ULocomotionLookAtSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULocomotionLookAtSurvivorSubAnimInstance) { return 0; }

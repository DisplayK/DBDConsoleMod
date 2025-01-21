#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "AimOffsetSurvivorSubAnimInstance.generated.h"

class UCurveFloat;

UCLASS(NonTransient)
class DBDANIMATION_API UAimOffsetSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	float _pitch;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _yaw;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _yawInterpolated;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _allowLookAt;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isUsingAimItem;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInjured;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDrasticYawChangeDetected;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _yawInterpolationSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _yawDeadzoneStart;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _yawClampValue;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _yawDrasticChangeUpperLimit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _yawDrasticChangeLowerLimit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _yawDrasticChangeInterpolationSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCurveFloat* _yawInterpolateEaseIn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCurveFloat* _yawInterpolateEaseOut;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _yawInterpolationEaseInLength;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _yawInterpolationEaseOutDistance;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isYawInDeadZone;

private:
	UPROPERTY(Transient)
	float _currentTargetYaw;

	UPROPERTY(Transient)
	float _yawAcceleration;

	UPROPERTY(Transient)
	float _yawAccelerationTime;

public:
	UAimOffsetSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UAimOffsetSurvivorSubAnimInstance) { return 0; }

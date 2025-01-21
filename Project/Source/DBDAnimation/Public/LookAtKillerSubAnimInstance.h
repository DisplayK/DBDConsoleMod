#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "LookAtKillerSubAnimInstance.generated.h"

class ADBDPlayer;
class ASlasherPlayer;

UCLASS(NonTransient)
class DBDANIMATION_API ULookAtKillerSubAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Transient)
	ADBDPlayer* _owningPawn;

	UPROPERTY(BlueprintReadWrite, Transient)
	ASlasherPlayer* _owningKiller;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _enableDynamics;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _dynamicsAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _shouldApplyDynamics;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _playerMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _animYaw;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _enableTurnInPlace;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _shouldTurnLeft;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _shouldTurnRight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _turnInPlaceThresholdAngle;

	UPROPERTY(BlueprintReadOnly)
	float _idleNeutralRotationYaw;

	UPROPERTY(BlueprintReadOnly)
	bool _isIdle;

public:
	UFUNCTION(BlueprintCallable)
	void ResetNeutralIdleRotationYaw();

public:
	ULookAtKillerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULookAtKillerSubAnimInstance) { return 0; }

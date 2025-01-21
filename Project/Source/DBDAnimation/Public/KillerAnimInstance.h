#pragma once

#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "BaseKillerAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "EAttackSubstate.h"
#include "KillerAnimInstance.generated.h"

class UArmIKSensorComponent;

UCLASS(NonTransient)
class DBDANIMATION_API UKillerAnimInstance : public UBaseKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	FVector _leftHandIKLocationFPV;

	UPROPERTY(BlueprintReadOnly)
	FVector _rightHandIKLocationFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAnyMontagePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCarrying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _firstPersonCarryOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _firstPersonCarryOffsetLookingDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSpectator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _idleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _directionSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPlayingAnyMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isKilling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _leftClearFrontSpaceVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _rightClearFrontSpaceVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _rightFootEffectorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _leftFootEffectorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionAnimation _interactionType;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UArmIKSensorComponent* _armIKSensorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate _attackState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _forwardVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lateralVelocity;

protected:
	UFUNCTION(BlueprintPure)
	FName GetWeaponCustomizationId() const;

public:
	UKillerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UKillerAnimInstance) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "EOniAttackType.h"
#include "TagStateBool.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "EIntroState.h"
#include "EAttackSubstate.h"
#include "OnDynamicEvent.h"
#include "EInteractionAnimation.h"
#include "Templates/SubclassOf.h"
#include "SlasherAnimInstance.generated.h"

class UArmIKSensorComponent;
class ASlasherPlayer;
class UPhaseWalkingComponent;
class UAnimMontage;
class UChargedAttackStateComponent;
class UAnimEffectHandler;
class UEvilWithinComponent;
class UOniDemonModeAttackStateComponent;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API USlasherAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnDynamicEvent OnFootTrapped;

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	EIntroState _introState;

	UPROPERTY(BlueprintReadWrite)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRevvingChainsaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttackSuccessMontagePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCamOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAnyMontagePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFrenzy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFrenzyCD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInParadise;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _enableArmOverrideTier3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRingingBell;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCarrying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _firstPersonCarryOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _firstPersonCarryOffsetLookingDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPassivePhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActivePhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInAir;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isVaultingToFall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSpectator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _firstPersonView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _validSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animTurning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _pelvisHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _idleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _directionSwitch;

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
	FRotator _meshRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimMontage*> _attackSuccessAnimations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimMontage*> _camOnAnimations;

	UPROPERTY(BlueprintReadOnly)
	ASlasherPlayer* _mySlasher;

	UPROPERTY(Transient)
	FTagStateBool _isVaultingToFallState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionAnimation _interactionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _demogorgonTeleportDuration;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UChargedAttackStateComponent* _demogorgonChargedAttackStateComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDemogorgonCharging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _demogorgonChargingPercent;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UOniDemonModeAttackStateComponent* _oniAttackState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isOniCharging;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EOniAttackType _oniAttackType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _oniChargeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAttackSubstate _previousAttackSubstate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAttackSubstate _attackSubstate;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UEvilWithinComponent* _evilWithinComponent;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UPhaseWalkingComponent* _phaseWalkingComponent;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UArmIKSensorComponent* _armIKSensorComponent;

	UPROPERTY(Transient)
	UAnimEffectHandler* _animEffectHandlerForSFX;

	UPROPERTY(Transient)
	UAnimEffectHandler* _animEffectHandlerForVFX;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForSFX;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForVFX;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsCrouched(const bool value);

protected:
	UFUNCTION(BlueprintCallable)
	void CallOnFootTrapped();

public:
	USlasherAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USlasherAnimInstance) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EAttackSubstate.h"
#include "K24PowerAnimInstance.generated.h"

class UAnimSequence;
class ASlasherPlayer;
class AK24Power;

UCLASS(NonTransient)
class UK24PowerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	ASlasherPlayer* _owningKiller;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInPowerMode;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isChargingPower;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isK24PowerAttacking;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isRequestingPowerAttack;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _tentacleLength;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isFirstPersonView;

	UPROPERTY(BlueprintReadOnly, Transient)
	EAttackSubstate _attackSubState;

	UPROPERTY(BlueprintReadOnly)
	bool _isIntroCompleted;

	UPROPERTY(BlueprintReadOnly)
	bool _isLevelReadyToPlay;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 _powerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _forwardVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lateralVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isKilling;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _swingIdleTPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _wipeIdleTPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _missIdleTPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _bowIdleTPVSequences;

	UPROPERTY(BlueprintReadOnly, Transient)
	UAnimSequence* _swingIdleTPVSequence;

	UPROPERTY(BlueprintReadOnly, Transient)
	UAnimSequence* _wipeIdleTPVSequence;

	UPROPERTY(BlueprintReadOnly, Transient)
	UAnimSequence* _missIdleTPVSequence;

	UPROPERTY(BlueprintReadOnly, Transient)
	UAnimSequence* _bowIdleTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAnimSequence* _swingLocoTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAnimSequence* _wipeLocoTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAnimSequence* _missLocoTPVSequence;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAnimSequence* _bowLocoTPVSequence;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _swingFPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _wipeFPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _missFPVSequences;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _bowFPVSequences;

	UPROPERTY(BlueprintReadOnly, Transient)
	UAnimSequence* _swingFPVSequence;

	UPROPERTY(BlueprintReadOnly, Transient)
	UAnimSequence* _wipeFPVSequence;

	UPROPERTY(BlueprintReadOnly, Transient)
	UAnimSequence* _missFPVSequence;

	UPROPERTY(BlueprintReadOnly, Transient)
	UAnimSequence* _bowFPVSequence;

private:
	UPROPERTY(Transient)
	AK24Power* _k24Power;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnKillerPowerLevelChanged(int32 powerLevel);

	UFUNCTION()
	void OnIntroCompleted();

public:
	UK24PowerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK24PowerAnimInstance) { return 0; }

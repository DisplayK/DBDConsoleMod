#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "KillerAnimInstance.h"
#include "GunslingerAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class UGunslingerAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isAiming;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isAimingWarmup;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isAimingCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isAimingReadyToShoot;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isFiring;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isInMissShotCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isInSuccessShot;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isLinked;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isReeling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInGunState;

	UPROPERTY(BlueprintReadOnly)
	float _idleToAimAnimPlayrate;

	UPROPERTY(BlueprintReadOnly)
	float _aimToIdleAnimPlayrate;

	UPROPERTY(BlueprintReadOnly)
	float _fireAnimPlayRate;

	UPROPERTY(BlueprintReadOnly)
	float _missShotCooldownAnimPlayRate;

	UPROPERTY(BlueprintReadOnly)
	float _successShotAnimPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _idleToAimAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _aimToIdleAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _fireAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _missShotCooldownAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _successShotAnim;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _idleToAimAnimDuration;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _aimToIdleAnimDuration;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _fireAnimDuration;

	UPROPERTY(EditAnywhere)
	FTunableStat _missShotCooldownAnimDuration;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _successShotAnimDuration;

public:
	UGunslingerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UGunslingerAnimInstance) { return 0; }

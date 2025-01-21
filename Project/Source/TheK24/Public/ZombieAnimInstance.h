#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "ZombieAnimInstance.generated.h"

class AZombieCharacter;

UCLASS(NonTransient)
class UZombieAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isChasing;

	UPROPERTY(BlueprintReadOnly)
	float _chaseLocomotionPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _chaseSequenceMaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 _chaseLocomotionIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 _chaseLocomotionMaxIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FFloatRange _chaseLocomotionIndexChangeTimerDurationRange;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isUsingFirstChaseLocomotionPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 _attackIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 _maxAttackIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isPatrollingOrSearching;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isStunned;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isDying;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isSpawning;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isInPool;

	UPROPERTY(Transient)
	AZombieCharacter* _zombieCharacter;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isMoving;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isFalling;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isMale;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _currentDirection;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FRotator _currentRotation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _rotationInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _rotationInterpolationSpeedDuringChase;

public:
	UZombieAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UZombieAnimInstance) { return 0; }

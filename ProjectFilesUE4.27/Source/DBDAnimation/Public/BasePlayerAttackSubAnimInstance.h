#pragma once

#include "CoreMinimal.h"
#include "PlayerAnimInstance.h"
#include "EAttackSubstate.h"
#include "AnimSequenceSelector.h"
#include "BasePlayerAttackSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UBasePlayerAttackSubAnimInstance : public UPlayerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate _attackState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _strafeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isStrafe;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _attackInPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimSequenceSelector _attackIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _attackSwingPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimSequenceSelector _attackSwing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _attackMissPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimSequenceSelector _attackMiss;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _attackHitPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimSequenceSelector _attackHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _attackBounceOfWallPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnimSequenceSelector _attackBounceOfWall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _firstPersonView;

public:
	UBasePlayerAttackSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBasePlayerAttackSubAnimInstance) { return 0; }

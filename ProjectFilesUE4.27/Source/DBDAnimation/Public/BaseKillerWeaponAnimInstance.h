#pragma once

#include "CoreMinimal.h"
#include "AnimSequenceSelector.h"
#include "Animation/AnimInstance.h"
#include "EAttackSubstate.h"
#include "BaseKillerWeaponAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API UBaseKillerWeaponAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackSubstate _attackState;

	UPROPERTY(BlueprintReadOnly)
	bool _isCarrying;

	UPROPERTY(BlueprintReadOnly)
	bool _isActive;

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
	UBaseKillerWeaponAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBaseKillerWeaponAnimInstance) { return 0; }

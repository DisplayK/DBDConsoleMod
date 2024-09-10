#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "LocomotionSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class DBDANIMATION_API ULocomotionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isRecoveringWhileCrawling;

	UPROPERTY(BlueprintReadOnly)
	bool _isTenacityPerkActive;

	UPROPERTY(EditDefaultsOnly)
	float _wasMovingResetTime;

	UPROPERTY(BlueprintReadOnly)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _shouldPlayLowerCarryAnimation;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isRunning;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouching;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDead;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _walkAnimSpeed;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _walkAnimStartOffset;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _walkAnimPlayRateMultiplier;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _wasLastDamageSourceDeepWounds;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isStrafing;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isUsingDeadHard;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _direction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _isUsingAimItem;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingCarried;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _crawlingDirectionWhileMoving;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _crawlMovingJustStopped;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _aimOffsetYawInterpolated;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _allowLookAt;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _isDrasticAimOffsetYawChangeDetected;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _lookAtAlphaBlendMultiDown;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _lookAtAlphaBlendMultiCenter;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _lookAtAlphaBlendMultiUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lookAtStandIdleAnimationLength;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	float _aimOffsetYawClampValue;

	UPROPERTY(EditDefaultsOnly)
	float _maxParadiseWalkCycleOffSet;

	UPROPERTY(EditDefaultsOnly)
	float _minParadiseWalkPlayRateMultiplier;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _lowerCarryAnimationPresenceTags;

public:
	ULocomotionSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULocomotionSurvivorSubAnimInstance) { return 0; }

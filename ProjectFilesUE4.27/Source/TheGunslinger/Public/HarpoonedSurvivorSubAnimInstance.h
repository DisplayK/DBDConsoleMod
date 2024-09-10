#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "HarpoonedSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UHarpoonedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _linkedMaxSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _timeBeforeHarpoonHitReset;

	UPROPERTY(EditDefaultsOnly)
	FName _hitHarpoonedEnterEvent;

	UPROPERTY(EditDefaultsOnly)
	FName _chainBreakEnterEvent;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isChainLinked;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingReeled;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasLinkInput;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _linkInputX;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _linkInputY;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _chainBreakTrigger;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _triggerHarpoonHit;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _harpoonHitTurnAnimNormalizedStartTime;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _harpoonHitAnimTurnRight;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _walkAnimSpeed;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _yaw;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _pitch;

public:
	UHarpoonedSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonedSurvivorSubAnimInstance) { return 0; }

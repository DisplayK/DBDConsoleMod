#pragma once

#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "ECamperGuidedAction.h"
#include "SicknessSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class USicknessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FString _vomitingEnteredStatEvent;

	UPROPERTY(EditDefaultsOnly)
	float _hitByVomitTime;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isSick;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isVomiting;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasRecentlyBeenHitByVomit;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isOpeningExitGate;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHooked;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDead;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isFrightScreaming;

	UPROPERTY(BlueprintReadOnly, Transient)
	ECamperGuidedAction _guidedAction;

	UPROPERTY(BlueprintReadOnly, Transient)
	EInteractionAnimation _interactionType;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInsideCloset;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInteracting;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHoldingAimItem;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHoldingHandleItem;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHoldingFlashbang;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHoldingFirecracker;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHoldingSmallItem;

public:
	USicknessSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USicknessSurvivorSubAnimInstance) { return 0; }

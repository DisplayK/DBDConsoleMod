#pragma once

#include "CoreMinimal.h"
#include "EK25ChainAnchorPointDirection.h"
#include "AnimLayerUpdateInterface.h"
#include "EK25ChainDetachmentReason.h"
#include "BaseSurvivorAnimInstance.h"
#include "K25ChainAnchorAnimationData.h"
#include "K25ChainLocomotionSurvivorAnimInstance.generated.h"

class AK25Chain;
class AK25SurvivorChainAttachmentAnchor;

UCLASS(NonTransient)
class UK25ChainLocomotionSurvivorAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasChainsAttached;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isPerformingBreakChainInteraction;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _forwardDirectionDotProductResult;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _lateralDirectionDotProductResult;

	UPROPERTY(BlueprintReadOnly, Transient)
	AK25Chain* _currentChainBeingDetached;

	UPROPERTY(BlueprintReadOnly, Transient)
	FK25ChainAnchorAnimationData _leftHandAttachmentData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FK25ChainAnchorAnimationData _rightHandAttachmentData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FK25ChainAnchorAnimationData _leftShoulderAttachmentData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FK25ChainAnchorAnimationData _rightShoulderAttachmentData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FK25ChainAnchorAnimationData _stomachAttachmentData;

	UPROPERTY(BlueprintReadOnly, Transient)
	FK25ChainAnchorAnimationData _backAttachmentData;

	UPROPERTY(BlueprintReadOnly, Transient)
	EK25ChainAnchorPointDirection _chainDirection;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasBrokenFreeFromChain;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _hasBrokenFreeTime;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasBeenHitByChain;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _IsCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isMale;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingCarried;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _hasBeenHitByChainTime;

	UPROPERTY(BlueprintReadOnly, Transient)
	FName _hitChainName;

	UPROPERTY(BlueprintReadOnly, Transient)
	FName _detachedChainAnchorName;

protected:
	UFUNCTION()
	void OnChainDetached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, EK25ChainDetachmentReason detachmentReason);

	UFUNCTION()
	void OnChainAttached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);

public:
	UK25ChainLocomotionSurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainLocomotionSurvivorAnimInstance) { return 0; }

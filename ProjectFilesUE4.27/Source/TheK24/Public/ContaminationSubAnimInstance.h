#pragma once

#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "ContaminationSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UContaminationSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isContaminated;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isInjectingSerumSelf;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isInjectingSerumOther;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isBeingInjectedWithSerum;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isBeingHealed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isFirstContaminationHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _triggerCough;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	float _timeBetweenCough;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isInsideCloset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isHoldingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isHooked;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isDead;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isFrightScreaming;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isHoldingSmallItem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isUsingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isHoldingHandleItem;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isInjured;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	bool _isCarried;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	EInteractionAnimation _interactionType;

public:
	UContaminationSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UContaminationSubAnimInstance) { return 0; }

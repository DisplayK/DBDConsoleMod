#pragma once

#include "CoreMinimal.h"
#include "EInteractionAnimation.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "AgonySubAnimInstance.generated.h"

UCLASS(NonTransient)
class UAgonySubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInAgony;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInTormentTrail;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInTormentTrailEffect;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInDeathBed;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDeadInDeathBed;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInStruggleInDeathBed;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _walkAnimSpeed;

	UPROPERTY(BlueprintReadOnly, Transient)
	EInteractionAnimation _interactionType;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInjured;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingCarried;

public:
	UAgonySubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UAgonySubAnimInstance) { return 0; }

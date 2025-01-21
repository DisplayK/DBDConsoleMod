#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "InDreamSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UInDreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _shouldLookSleepy;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingCarried;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDead;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHooked;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _walkAnimSpeed;

public:
	UInDreamSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UInDreamSurvivorSubAnimInstance) { return 0; }

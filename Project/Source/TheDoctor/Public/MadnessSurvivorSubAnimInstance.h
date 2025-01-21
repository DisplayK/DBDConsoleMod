#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "MadnessSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UMadnessSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isTotallyInsane;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInjured;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _walkAnimSpeed;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCarried;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInAir;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDead;

public:
	UMadnessSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UMadnessSurvivorSubAnimInstance) { return 0; }

#pragma once

#include "CoreMinimal.h"
#include "AnimLayerUpdateInterface.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K29SurvivorAnimInstance.generated.h"

UCLASS(NonTransient)
class UK29SurvivorAnimInstance : public UBaseSurvivorAnimInstance, public IAnimLayerUpdateInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingGrabbed;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingThrown;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isKillerLocallyControlled;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isUsingInfectionRemoverOnSelf;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isUsingInfectionRemoverOnOther;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInfectionRemoverUsedOnSelf;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasLastThrowResultedInDamage;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInfectionActive;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasBeenThrown;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCoughing;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient)
	float _timeBetweenRandomCoughingTry;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient)
	float _randomCoughMinProbabilityRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient)
	float _randomCoughMaxProbabilityRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient)
	float _randomCoughProbabilityThreshold;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrawling;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInsideCloset;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isDead;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInteracting;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInjured;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHoldingObject;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHooked;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isUsingAimItem;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isInAir;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBeingHealed;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetHasBeenThrown();

private:
	UFUNCTION()
	void OnHasBeenThrown();

	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK29SurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK29SurvivorAnimInstance) { return 0; }

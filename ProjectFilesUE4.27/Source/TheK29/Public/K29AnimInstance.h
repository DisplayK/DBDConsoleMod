#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K29AnimInstance.generated.h"

UCLASS(NonTransient)
class UK29AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isRushing;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isHoldingSurvivor;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isChargingRushing;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBetweenRushes;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isThrowing;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isBouncingBack;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasStartedFinalRush;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasRushEndedInSurvivorImpact;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasRushEndedInLedgeDrop;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasInstantlyPickedUpSurvivor;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isReadyToRushButHasNoPath;

public:
	UFUNCTION(BlueprintCallable)
	void ResetStartThrowingSurvivor();

	UFUNCTION(BlueprintCallable)
	void ResetHasRushEndedInSurvivorImpact();

	UFUNCTION(BlueprintCallable)
	void ResetHasRushEndedInLedgeDrop();

	UFUNCTION(BlueprintCallable)
	void ResetHasInstantlyPickedUpSurvivor();

private:
	UFUNCTION()
	void OnStartThrowingSurvivor();

	UFUNCTION()
	void OnHasRushEndedInSurvivorImpact();

	UFUNCTION()
	void OnHasRushEndedInLedgeDrop();

	UFUNCTION()
	void OnHasInstantlyPickedUpSurvivor();

	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK29AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK29AnimInstance) { return 0; }

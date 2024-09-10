#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Tinkerer.generated.h"

class ADBDPlayer;
class UStatusEffect;
class AActor;
class UChargeableComponent;
class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UTinkerer : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _undetectableEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _triggerThreshold;

	UPROPERTY(EditDefaultsOnly)
	float _distanceThreshold;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _activationTime;

	UPROPERTY(Transient)
	TMap<AActor*, float> _generatorActivationTimes;

public:
	UFUNCTION(BlueprintPure)
	float GetTriggerThreshold() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimeAtLevel() const;

	UFUNCTION(BlueprintImplementableEvent)
	void Authority_OnUndetectableGeneratorInterrupt(ADBDPlayer* instigator, ADBDPlayer* target);

	UFUNCTION(BlueprintImplementableEvent)
	void Authority_OnUndetectableAttackSuccessNearActiveGenerator(ADBDPlayer* instigator, ADBDPlayer* target);

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void Authority_OnGeneratorReachedThreshold(AGenerator* generator);

private:
	UFUNCTION()
	void Authority_OnGeneratorChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	UTinkerer();
};

FORCEINLINE uint32 GetTypeHash(const UTinkerer) { return 0; }

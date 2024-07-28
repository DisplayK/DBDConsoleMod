#pragma once

#include "CoreMinimal.h"
#include "ETrapRemovedReason.h"
#include "Perk.h"
#include "GameEventData.h"
#include "GameplayTagContainer.h"
#include "SecondaryInteractionProperties.h"
#include "GeneratorTrapPerk.generated.h"

class UInteractionDefinition;
class AGenerator;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGeneratorTrapPerk : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _secondaryActionProperties;

	UPROPERTY(EditDefaultsOnly)
	float _secondsToActivatePerk;

	UPROPERTY(EditDefaultsOnly)
	float _generatorTrapDurationLevels;

	UPROPERTY(EditDefaultsOnly)
	float _progressPercentRequirementLevels;

	UPROPERTY(EditDefaultsOnly)
	bool _onePerGenerator;

	UPROPERTY(Transient)
	AGenerator* _generatorBeingRepaired;

	UPROPERTY(ReplicatedUsing=OnRep_TrappedGenerator, Transient)
	AGenerator* _trappedGenerator;

private:
	UPROPERTY(ReplicatedUsing=OnRep_CurrentRepairInteractionWithAbility, Transient, Export)
	UInteractionDefinition* _currentRepairInteractionWithAbility;

	UPROPERTY(Replicated)
	float _progressPercent;

private:
	UFUNCTION(Server, Reliable)
	void Server_TryTriggerAction();

protected:
	UFUNCTION()
	void OnRep_TrappedGenerator(AGenerator* oldGenerator);

private:
	UFUNCTION()
	void OnRep_CurrentRepairInteractionWithAbility(UInteractionDefinition* oldRepairInteraction);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void Local_TrapDestroyed(const AGenerator* generator, const ETrapRemovedReason reason);

	UFUNCTION(BlueprintImplementableEvent)
	void Local_TrapActivated(const AGenerator* generator);

public:
	UFUNCTION(BlueprintPure)
	float GetSecondsToActivatePerk() const;

	UFUNCTION(BlueprintPure)
	float GetRequiredRepairProgressForSettingTrap() const;

	UFUNCTION(BlueprintPure)
	float GetRepairProgressPercent() const;

	UFUNCTION(BlueprintPure)
	float GetGeneratorTrapDuration() const;

private:
	UFUNCTION(Client, Unreliable)
	void Client_OnTrapDestroyed(const AGenerator* generator, const ETrapRemovedReason reason);

	UFUNCTION(Client, Unreliable)
	void Client_OnTrapActivated(const AGenerator* generator);

	UFUNCTION()
	void Authority_OnTrapDamaged(const FGameplayTag gameEventTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnRepairProgress(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

	UFUNCTION()
	void Authority_OnGeneratorCompleted(bool isAutoCompleted);

	UFUNCTION()
	void Authority_OnExitGatesPowered(const FGameplayTag gameEventTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGeneratorTrapPerk();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorTrapPerk) { return 0; }

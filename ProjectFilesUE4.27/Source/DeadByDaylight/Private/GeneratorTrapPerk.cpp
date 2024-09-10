#include "GeneratorTrapPerk.h"
#include "GameEventData.h"
#include "ETrapRemovedReason.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainer.h"

class UInteractionDefinition;
class AGenerator;
class AActor;

void UGeneratorTrapPerk::Server_TryTriggerAction_Implementation()
{

}

void UGeneratorTrapPerk::OnRep_TrappedGenerator(AGenerator* oldGenerator)
{

}

void UGeneratorTrapPerk::OnRep_CurrentRepairInteractionWithAbility(UInteractionDefinition* oldRepairInteraction)
{

}

float UGeneratorTrapPerk::GetSecondsToActivatePerk() const
{
	return 0.0f;
}

float UGeneratorTrapPerk::GetRequiredRepairProgressForSettingTrap() const
{
	return 0.0f;
}

float UGeneratorTrapPerk::GetRepairProgressPercent() const
{
	return 0.0f;
}

float UGeneratorTrapPerk::GetGeneratorTrapDuration() const
{
	return 0.0f;
}

void UGeneratorTrapPerk::Client_OnTrapDestroyed_Implementation(const AGenerator* generator, const ETrapRemovedReason reason)
{

}

void UGeneratorTrapPerk::Client_OnTrapActivated_Implementation(const AGenerator* generator)
{

}

void UGeneratorTrapPerk::Authority_OnTrapDamaged(const FGameplayTag gameEventTag, const FGameEventData& gameEventData)
{

}

void UGeneratorTrapPerk::Authority_OnRepairProgress(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
{

}

void UGeneratorTrapPerk::Authority_OnGeneratorCompleted(bool isAutoCompleted)
{

}

void UGeneratorTrapPerk::Authority_OnExitGatesPowered(const FGameplayTag gameEventTag, const FGameEventData& gameEventData)
{

}

void UGeneratorTrapPerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGeneratorTrapPerk, _trappedGenerator);
	DOREPLIFETIME(UGeneratorTrapPerk, _currentRepairInteractionWithAbility);
	DOREPLIFETIME(UGeneratorTrapPerk, _progressPercent);
}

UGeneratorTrapPerk::UGeneratorTrapPerk()
{
	this->_secondsToActivatePerk = 0.000000;
	this->_generatorTrapDurationLevels = 0.000000;
	this->_progressPercentRequirementLevels = 0.000000;
	this->_onePerGenerator = false;
	this->_generatorBeingRepaired = NULL;
	this->_trappedGenerator = NULL;
	this->_currentRepairInteractionWithAbility = NULL;
	this->_progressPercent = 0.000000;
}

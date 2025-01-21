#include "CamperHealthComponent.h"
#include "EHealthType.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"
#include "Net/UnrealNetwork.h"
#include "CamperHealResult.h"

class AActor;
class ADBDPlayer;
class ACharacter;
class ACamperPlayer;
class UChargeableComponent;

void UCamperHealthComponent::SetCanBleedout(bool canBleedout)
{

}

void UCamperHealthComponent::OnRep_InInjuredBleedOut()
{

}

void UCamperHealthComponent::OnImmobilizedStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState)
{

}

void UCamperHealthComponent::Multicast_SetHealthType_Implementation(EHealthType healthType)
{

}

void UCamperHealthComponent::Multicast_SetHealthStateFromDamageState_Implementation(ECamperDamageState damageState, bool fireScoreEvent)
{

}

void UCamperHealthComponent::Multicast_SetDamageState_Implementation(ECamperDamageState damageState, bool fireScoreEvent, bool sacrificed)
{

}

void UCamperHealthComponent::Multicast_SetCurrentHealthStateCount_Implementation(int32 newHealth, bool fireScoreEvent)
{

}

void UCamperHealthComponent::Multicast_OnSurvivorGainedHealthStateByOthersEvents_Implementation(const bool healedFromKO, ADBDPlayer* healedSurvivor, const TArray<ADBDPlayer*>& healers, const TArray<bool>& healedSurvivorFarEnoughAway)
{

}

void UCamperHealthComponent::Multicast_OnInjuredBleedoutKO_Implementation(ADBDPlayer* injuredBleedoutInstigator)
{

}

void UCamperHealthComponent::Multicast_OnHealed_Implementation(const FCamperHealResult& healResult)
{

}

bool UCamperHealthComponent::IsKO() const
{
	return false;
}

bool UCamperHealthComponent::IsInjuredBleedoutTimerExpired() const
{
	return false;
}

bool UCamperHealthComponent::IsInjured() const
{
	return false;
}

bool UCamperHealthComponent::IsInInjuredBleedout() const
{
	return false;
}

bool UCamperHealthComponent::IsHealthy() const
{
	return false;
}

bool UCamperHealthComponent::IsDyingTimerExpired() const
{
	return false;
}

bool UCamperHealthComponent::IsDead() const
{
	return false;
}

void UCamperHealthComponent::IncreaseHPSlotSize(float percent)
{

}

float UCamperHealthComponent::GetPercentInjuredBleedoutTimer() const
{
	return 0.0f;
}

float UCamperHealthComponent::GetPercentDyingTimer() const
{
	return 0.0f;
}

ECamperDamageState UCamperHealthComponent::GetDamageState() const
{
	return ECamperDamageState::VE_Healthy;
}

float UCamperHealthComponent::GetCurrentTotalHealthBarPercent() const
{
	return 0.0f;
}

UChargeableComponent* UCamperHealthComponent::GetCurrentHPSlot()
{
	return NULL;
}

bool UCamperHealthComponent::CanHealSelf() const
{
	return false;
}

bool UCamperHealthComponent::CanBeHealedFromInjured() const
{
	return false;
}

bool UCamperHealthComponent::CanBeHealed() const
{
	return false;
}

bool UCamperHealthComponent::CanBecomeHealthy() const
{
	return false;
}

void UCamperHealthComponent::Authority_SetDamageState(ECamperDamageState damageState, bool fireScoreEvent, bool sacrificed)
{

}

void UCamperHealthComponent::Authority_OnSurvivorRemoved(ACamperPlayer* survivor)
{

}

void UCamperHealthComponent::Authority_OnMendChargeCompletionStateChanged(bool complete, const TArray<AActor*>& instigators)
{

}

void UCamperHealthComponent::Authority_OnHealthBarCharged(bool complete, const TArray<AActor*>& instigators)
{

}

void UCamperHealthComponent::Authority_MendTryGrantScoresOnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
{

}

void UCamperHealthComponent::Authority_HealTryGrantScoresOnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
{

}

void UCamperHealthComponent::Authority_EndInjuredBleedout()
{

}

void UCamperHealthComponent::Authority_ApplyDoubleDamage(AActor* damageSource, ACharacter* damagePlayerOwner)
{

}

void UCamperHealthComponent::Authority_ApplyDeepWound(AActor* damageSource, ACharacter* damagePlayerOwner)
{

}

void UCamperHealthComponent::Authority_ApplyDamage(AActor* damageSource, ACharacter* damagePlayerOwner)
{

}

void UCamperHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCamperHealthComponent, _inInjuredBleedOut);
	DOREPLIFETIME(UCamperHealthComponent, _bleedOutTimer);
	DOREPLIFETIME(UCamperHealthComponent, _numHealthyHeals);
	DOREPLIFETIME(UCamperHealthComponent, _dyingTimer);
}

UCamperHealthComponent::UCamperHealthComponent()
{
	this->_canBleedout = true;
	this->_pauseInjuredBleedoutTimerInteractions = TArray<TSubclassOf<UInteractionDefinition>>();
	this->_currentHealthStateCount = 2;
	this->_numHealthyHeals = 0;
	this->_healFromDyingChargeable = NULL;
	this->_healFromInjuredChargeable = NULL;
	this->_mendChargeable = NULL;
	this->_injuredBleedoutInstigator = NULL;
}

#include "FrenzyComponent.h"
#include "EFrenzyEndReason.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class UGameplayTagContainerComponent;

void UFrenzyComponent::StartFrenzy()
{

}

void UFrenzyComponent::SetStartingFrenzy(bool startingFrenzy)
{

}

void UFrenzyComponent::SetObjectState(UGameplayTagContainerComponent* objectState)
{

}

void UFrenzyComponent::ResumeFrenzyChargeDepletion()
{

}

void UFrenzyComponent::PauseFrenzyChargeDepletion()
{

}

void UFrenzyComponent::OnMoriStarted()
{

}

void UFrenzyComponent::OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UFrenzyComponent::OnFrenzyCooldownStarted()
{

}

bool UFrenzyComponent::IsStartingFrenzy() const
{
	return false;
}

bool UFrenzyComponent::IsInFrenzyCooldown() const
{
	return false;
}

bool UFrenzyComponent::IsInFrenzy() const
{
	return false;
}

void UFrenzyComponent::InitializeFrenzy()
{

}

bool UFrenzyComponent::HasStartedInjuredBleedoutDuringThisFrenzy() const
{
	return false;
}

void UFrenzyComponent::EndFrenzy(EFrenzyEndReason reason)
{

}

bool UFrenzyComponent::CanStartFrenzy() const
{
	return false;
}

bool UFrenzyComponent::CanManuallyEndFrenzy() const
{
	return false;
}

UFrenzyComponent::UFrenzyComponent()
{
	this->_slasher = NULL;
	this->_cooldownInteraction = NULL;
	this->_boltSlasherEffect = NULL;
	this->_frenzySlasherEffect = NULL;
	this->_frenzyTier0SlasherEffect = NULL;
	this->_frenzyTier1SlasherEffect = NULL;
	this->_frenzyTier2SlasherEffect = NULL;
	this->_frenzyTier3SlasherEffect = NULL;
	this->_frenzyTier4SlasherEffect = NULL;
	this->_frenzyCooldownEffect = NULL;
	this->_boltCamperEffect = NULL;
	this->_frenzyCamperEffect = NULL;
}

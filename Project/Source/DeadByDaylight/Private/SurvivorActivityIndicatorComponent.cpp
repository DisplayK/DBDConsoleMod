#include "SurvivorActivityIndicatorComponent.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"
#include "SurvivorActivity.h"
#include "GameplayTagContainer.h"

class UChargeableComponent;
class ADBDPlayer;

void USurvivorActivityIndicatorComponent::OnPlayerPickedUp(ADBDPlayer* picker)
{

}

void USurvivorActivityIndicatorComponent::OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState)
{

}

void USurvivorActivityIndicatorComponent::OnPlayerDropped()
{

}

void USurvivorActivityIndicatorComponent::OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

void USurvivorActivityIndicatorComponent::OnChargeableProgressChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete)
{

}

void USurvivorActivityIndicatorComponent::HandleStartActivityIfStillInEffect(const FSurvivorActivity activityViewInfo, const FGameplayTag tag)
{

}

USurvivorActivityIndicatorComponent::USurvivorActivityIndicatorComponent()
{
	this->_activitiesDataAsset = NULL;
	this->_durationNeededToEnableUI = 0.500000;
}

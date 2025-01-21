#include "SurvivorHideInSnowmanInteraction.h"
#include "Net/UnrealNetwork.h"
#include "ECamperDamageState.h"

void USurvivorHideInSnowmanInteraction::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

void USurvivorHideInSnowmanInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USurvivorHideInSnowmanInteraction, _shouldRunOutOfSnowman);
	DOREPLIFETIME(USurvivorHideInSnowmanInteraction, _isSnowmanShieldDamaged);
}

USurvivorHideInSnowmanInteraction::USurvivorHideInSnowmanInteraction()
{
	this->_shouldRunOutOfSnowman = false;
	this->_isSnowmanShieldDamaged = false;
	this->_nonDamagingSnowmanDestroyingEvents = TArray<FGameplayTag>();
}

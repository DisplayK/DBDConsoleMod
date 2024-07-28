#include "ObjectOfObsession.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"

void UObjectOfObsession::Authority_OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState)
{

}

void UObjectOfObsession::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

UObjectOfObsession::UObjectOfObsession()
{
	this->_revealTimeIntervals = 0.000000;
	this->_revealTimeDuration = 0.000000;
	this->_actionSpeedBonus = 0.000000;
	this->_increaseObsessionChanceEffect = NULL;
	this->_revealToKillerStatusEffect = NULL;
	this->_objectOfObsessionActionSpeedEffect = NULL;
}

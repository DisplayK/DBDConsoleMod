#include "ThrowingKnivesHitSubAnimInstance.h"

UThrowingKnivesHitSubAnimInstance::UThrowingKnivesHitSubAnimInstance()
{
	this->_hitByKnifeTrigger = false;
	this->_knifeHitCausedKOTrigger = false;
	this->_knifeHitCausedDamageTrigger = false;
	this->_useAlternateHitReactionState = false;
	this->_knifeHitStateHitAngle = 0.000000;
	this->_alternateKnifeHitStateHitAngle = 0.000000;
	this->_isCrawling = false;
	this->_hitByKnifeTriggerEventDriven = false;
	this->_knifeHitCausedDamageTriggerEventDriven = false;
	this->_knifeHitCausedKOTriggerEventDriven = false;
}

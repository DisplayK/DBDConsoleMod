#include "GuardAttackComponent.h"

UGuardAttackComponent::UGuardAttackComponent()
{
	this->_killerInstinctEffectClass = NULL;
	this->_detectionZoneToUse = EDetectionZone::VE_None;
	this->_survivorsInZone = TSet<TWeakObjectPtr<ACamperPlayer>>();
}

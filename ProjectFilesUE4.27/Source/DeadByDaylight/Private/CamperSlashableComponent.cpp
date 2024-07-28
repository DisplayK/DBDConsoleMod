#include "CamperSlashableComponent.h"

class UCapsuleComponent;

void UCamperSlashableComponent::SetUseCrouchSlashableCapsule(bool useCrouchCapsule)
{

}

void UCamperSlashableComponent::SetStandingCapsuleHalfHeight(float height)
{

}

void UCamperSlashableComponent::SetSlashableZone(UCapsuleComponent* zone)
{

}

void UCamperSlashableComponent::SetHookSlashableZone(UCapsuleComponent* zone)
{

}

void UCamperSlashableComponent::SetCrouchCapsuleHalfHeight(float height)
{

}

UCamperSlashableComponent::UCamperSlashableComponent()
{
	this->_slashableZone = NULL;
	this->_hookSlashableZone = NULL;
	this->_standingCapsuleHalfHeight = -1.000000;
	this->_crouchCapsuleHalfHeight = -1.000000;
	this->_sourceActivationLingerDuration = 0.100000;
	this->_slashableActivationSources = NULL;
}

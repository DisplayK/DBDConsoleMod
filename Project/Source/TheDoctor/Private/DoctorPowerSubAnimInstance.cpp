#include "DoctorPowerSubAnimInstance.h"

void UDoctorPowerSubAnimInstance::OnShockTherapyAnimationAttackStop()
{

}

void UDoctorPowerSubAnimInstance::OnShockTherapyAnimationAttackStart()
{

}

UDoctorPowerSubAnimInstance::UDoctorPowerSubAnimInstance()
{
	this->_abilityType = EDoctorAbilityType::VE_ShockTherapy;
	this->_abilityPhase = EDoctorAbilityPhase::VE_Charging;
	this->_isShockTherapyInCooldown = false;
	this->_powerStateComponent = NULL;
}

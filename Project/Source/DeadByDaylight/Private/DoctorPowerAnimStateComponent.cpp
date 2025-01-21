#include "DoctorPowerAnimStateComponent.h"
#include "EDoctorAbilityType.h"
#include "EDoctorAbilityPhase.h"

void UDoctorPowerAnimStateComponent::SetCurrentAbilityType(EDoctorAbilityType abilityType)
{

}

void UDoctorPowerAnimStateComponent::SetCurrentAbilityPhase(EDoctorAbilityPhase abilityPhase)
{

}

UDoctorPowerAnimStateComponent::UDoctorPowerAnimStateComponent()
{
	this->_abilityType = EDoctorAbilityType::VE_ShockTherapy;
	this->_abilityPhase = EDoctorAbilityPhase::VE_Charging;
}

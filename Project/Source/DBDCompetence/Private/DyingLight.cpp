#include "DyingLight.h"

class ACamperPlayer;

void UDyingLight::OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession)
{

}

UDyingLight::UDyingLight()
{
	this->_actionSpeedPenaltyPerToken = TArray<float>();
	this->_obsessionActionSpeedBonus = 0.000000;
	this->_obsessionStatusEffectID = NAME_None;
	this->_nonObsessionStatusEffectID = NAME_None;
	this->_survivorDebuffs = TArray<UStatusEffect*>();
}

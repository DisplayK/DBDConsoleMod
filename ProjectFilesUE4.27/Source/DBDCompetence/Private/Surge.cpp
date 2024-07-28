#include "Surge.h"

class AGenerator;

float USurge::GetZoneRadius() const
{
	return 0.0f;
}

float USurge::GetInstantRegressionAtLevel() const
{
	return 0.0f;
}

bool USurge::GetHasCooldown() const
{
	return false;
}

float USurge::GetCooldownDurationAtLevel() const
{
	return 0.0f;
}

void USurge::Client_TriggerEffects_Implementation(const TArray<AGenerator*>& generators)
{

}

USurge::USurge()
{
	this->_zoneRadius = 0.000000;
	this->_instantRegression = 0.000000;
	this->_cooldownDuration = 0.000000;
	this->_hasCooldown = true;
	this->_useTerrorRadiusInsteadOfFixedDistance = false;
}

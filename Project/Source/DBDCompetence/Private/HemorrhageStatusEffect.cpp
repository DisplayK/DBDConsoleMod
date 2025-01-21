#include "HemorrhageStatusEffect.h"
#include "CamperHealResult.h"

class ADBDPlayer;

void UHemorrhageStatusEffect::OnStoppedHealing_Implementation(const ADBDPlayer* instigator, const ADBDPlayer* target)
{

}

void UHemorrhageStatusEffect::Authority_OnSurvivorHealed(const FCamperHealResult& healResult)
{

}

UHemorrhageStatusEffect::UHemorrhageStatusEffect()
{
	this->_cooldownFXTime = 1.000000;
	this->_removeEffectWhenFullyHealed = true;
}

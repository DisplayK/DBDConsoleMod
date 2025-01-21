#include "K30P02ScreamStatusEffect.h"

void UK30P02ScreamStatusEffect::Multicast_MakePlayerScream_Implementation(const float screamRevealDuration)
{

}

bool UK30P02ScreamStatusEffect::IsTimerPaused() const
{
	return false;
}

bool UK30P02ScreamStatusEffect::IsTimerActive() const
{
	return false;
}

float UK30P02ScreamStatusEffect::GetTimerRemainingTime() const
{
	return 0.0f;
}

float UK30P02ScreamStatusEffect::GetTimerElapsedTime() const
{
	return 0.0f;
}

float UK30P02ScreamStatusEffect::GetTimerDuration() const
{
	return 0.0f;
}

UK30P02ScreamStatusEffect::UK30P02ScreamStatusEffect()
{
	this->_screamingPlayerRevealAuraEffectClass = NULL;
}

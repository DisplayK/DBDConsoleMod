#include "IsHighestLevelAndClosestOriginatingEffect.h"

class UStatusEffect;

void UIsHighestLevelAndClosestOriginatingEffect::OnStatusEffectAddedOrRemoved(UStatusEffect* effect, bool valid)
{

}

UIsHighestLevelAndClosestOriginatingEffect::UIsHighestLevelAndClosestOriginatingEffect()
{
	this->_applicableEffects = TArray<UStatusEffect*>();
}

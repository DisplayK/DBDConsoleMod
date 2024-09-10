#include "PerspectiveEffectActivator.h"
#include "PerspectiveEffectData.h"

void UPerspectiveEffectActivator::UnregisterEffect(FName effectName)
{

}

void UPerspectiveEffectActivator::SetWantsActive(FName effectName, bool wantsActive)
{

}

void UPerspectiveEffectActivator::RegisterEffect(FName effectName, FPerspectiveEffectData effectData)
{

}

bool UPerspectiveEffectActivator::IsEffectActive(FName effectName)
{
	return false;
}

UPerspectiveEffectActivator::UPerspectiveEffectActivator()
{
	this->_perspectiveEffects = TMap<FName, FPerspectiveEffectData>();
}

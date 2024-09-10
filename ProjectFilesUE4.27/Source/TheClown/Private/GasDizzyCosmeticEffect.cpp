#include "GasDizzyCosmeticEffect.h"
#include "Components/PostProcessComponent.h"

void AGasDizzyCosmeticEffect::SetWantsDizzyEffectActive(bool isActive)
{

}

AGasDizzyCosmeticEffect::AGasDizzyCosmeticEffect()
{
	this->_dizzyPostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Dizzy Post Process"));
}

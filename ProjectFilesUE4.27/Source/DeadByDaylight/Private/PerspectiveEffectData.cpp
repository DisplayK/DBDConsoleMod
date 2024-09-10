#include "PerspectiveEffectData.h"

FPerspectiveEffectData::FPerspectiveEffectData()
{
	this->WantsActive = false;
	this->ActivationEvent = FPerspectiveEffectActivationEvent();
	this->Condition = EPerspectiveActivationCondition::LocallyControlled;
}

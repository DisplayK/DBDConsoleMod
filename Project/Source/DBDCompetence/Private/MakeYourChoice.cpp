#include "MakeYourChoice.h"

class AActor;

bool UMakeYourChoice::CanApplyExposedEffect(const AActor* unhooker) const
{
	return false;
}

UMakeYourChoice::UMakeYourChoice()
{
	this->MinimumHookedSurvivorDistance = 3200.000000;
}

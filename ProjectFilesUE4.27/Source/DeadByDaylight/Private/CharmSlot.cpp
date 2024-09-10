#include "CharmSlot.h"

FCharmSlot::FCharmSlot()
{
	this->SlotIndex = 0;
	this->CharmAttacherClass = NULL;
	this->DefaultAnimationTweak = FCharmAttacherAnimationTweak{};
	this->AnimationTweakByTag = TMap<FName, FCharmAttacherAnimationTweak>();
	this->CharmAttacherSpawned = NULL;
}

#include "CharmAttacherAnimationTweak.h"

FCharmAttacherAnimationTweak::FCharmAttacherAnimationTweak()
{
	this->AttachPointTranslation = FVector{};
	this->AttachPointRotation = FRotator{};
	this->ConstraintType = 0;
	this->MagicTweakingFloat = 0.0f;
}

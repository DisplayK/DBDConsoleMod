#include "AISkill_InteractionTeleportEthereal.h"

UAISkill_InteractionTeleportEthereal::UAISkill_InteractionTeleportEthereal()
{
	this->TeleportPlanInterval = 2.000000;
	this->MaxTeleportAlignHalfAngle = 45.000000;
	this->AbortNotWorkingTeleportDelay = 2.000000;
	this->AbortAddRunCooldownPenaltyTime = 12.000000;
	this->_onStimulusInstigator = NULL;
}

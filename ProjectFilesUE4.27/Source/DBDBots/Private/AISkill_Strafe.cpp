#include "AISkill_Strafe.h"

UAISkill_Strafe::UAISkill_Strafe()
{
	this->StartMaxRange = 200.000000;
	this->StopMaxRange = 300.000000;
	this->StrafeBackwardRange = 0.000000;
	this->StrafeFowardRange = 450.000000;
	this->IgnoreUnderNavLinkStartRange = 300.000000;
	this->PauseStrafeOnAnimation = true;
}

#include "AISkill.h"

UAISkill::UAISkill()
{
	this->StopIfPausedByNavLinkProxy = false;
	this->RunTimeLimit = -1.000000;
	this->RunCooldownTime = -1.000000;
	this->RunCooldownTimeDeviation = 0.000000;
	this->SkillNavigationFilterClass = NULL;
	this->SkillSenseConfigs = TArray<UAISenseConfig*>();
	this->DynamicSubtree = NULL;
	this->_pausedByObjects = TArray<UObject*>();
	this->_aiControllerOwner = NULL;
}

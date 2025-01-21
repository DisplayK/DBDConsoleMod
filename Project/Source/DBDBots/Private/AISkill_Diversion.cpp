#include "AISkill_Diversion.h"

UAISkill_Diversion::UAISkill_Diversion()
{
	this->PerkId = TEXT("Diversion");
	this->DiversionFromGoalClasses = TArray<TSubclassOf<AActor>>();
	this->ThrowOnInteractablesAtDifficultyLevel = EAIDifficultyLevel::VeryEasy;
	this->MaxThrowOnInteractableHalfAngle = 30.000000;
	this->MaxMoveToTargetDistance = 1200.000000;
	this->PlanInterval = 1.000000;
}

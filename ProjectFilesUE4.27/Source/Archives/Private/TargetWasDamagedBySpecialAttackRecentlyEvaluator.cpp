#include "TargetWasDamagedBySpecialAttackRecentlyEvaluator.h"

UTargetWasDamagedBySpecialAttackRecentlyEvaluator::UTargetWasDamagedBySpecialAttackRecentlyEvaluator()
{
	this->_timeLimit = 1.000000;
	this->_specialCaseGameEvents = TArray<FGameplayTag>();
}

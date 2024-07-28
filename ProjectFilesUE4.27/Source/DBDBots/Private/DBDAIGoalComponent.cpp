#include "DBDAIGoalComponent.h"

UDBDAIGoalComponent::UDBDAIGoalComponent()
{
	this->_activeGoals = TMap<UObject*, FAIGoal>();
	this->_foundWeightedGoals = TMap<UObject*, FAIGoalWeightContainer>();
}

#include "BTService_GoalCoordinator.h"

UBTService_GoalCoordinator::UBTService_GoalCoordinator()
{
	this->_managedGoals = TMap<UObject*, FAIGoalWeightContainer>();
}

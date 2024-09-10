#include "PathStrategy_FleeLoop.h"

UPathStrategy_FleeLoop::UPathStrategy_FleeLoop()
{
	this->GameStateFleeLoopStrategyTable = TMap<EAIDifficultyLevel, FGameStateEvadeLoopStrategyMapContainer>();
	this->FleeLoopStrategyPathBuilders = TMap<EAIFleeLoopStrategy, UPathBuilder_EvadeLoop*>();
	this->CanBranchUnderEndPathDistance = 500.000000;
	this->BranchRolls = TMap<EAIFleeLoopStrategy, FAIRoll>();
	this->RejectLoopBranchUnderEndPointsDistance = 800.000000;
	this->RejectBranchPointNearerHostileSourceDistance = 800.000000;
	this->RejectBranchUnderNavLinkDistance = 600.000000;
	this->AddDistanceToRequiredBranchEvadeGap = 200.000000;
}

#include "GameStateEvadeLoopStrategyMapContainer.h"

FGameStateEvadeLoopStrategyMapContainer::FGameStateEvadeLoopStrategyMapContainer()
{
	this->Map = TMap<EAIGameState, EAIFleeLoopStrategy>();
}

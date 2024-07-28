#include "PathStrategySelector_Flee.h"

UPathStrategySelector_Flee::UPathStrategySelector_Flee()
{
	this->FleePathStrategies = TMap<EAIFleePathStrategy, UPathStrategy*>();
	this->_activeFleePathStrategiesMap = TMap<EAIFleePathStrategy, UPathStrategy*>();
}

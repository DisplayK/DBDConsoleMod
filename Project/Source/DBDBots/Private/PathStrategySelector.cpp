#include "PathStrategySelector.h"

UPathStrategySelector::UPathStrategySelector()
{
	this->_aiOwner = NULL;
	this->_activePathStrategies = TArray<UPathStrategy*>();
	this->_nextPathStrategies = TArray<UPathStrategy*>();
}

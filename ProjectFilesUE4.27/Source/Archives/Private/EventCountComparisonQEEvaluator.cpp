#include "EventCountComparisonQEEvaluator.h"

UEventCountComparisonQEEvaluator::UEventCountComparisonQEEvaluator()
{
	this->_incrementCountEvents = TArray<FGameplayTag>();
	this->_resetCountEvents = TArray<FGameplayTag>();
	this->_comparisonOperator = EventCountComparisonOperator::EqualTo;
}

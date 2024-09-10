#include "MultipleMadSurvivorsQEEvaluator.h"

UMultipleMadSurvivorsQEEvaluator::UMultipleMadSurvivorsQEEvaluator()
{
	this->_requiredTier = 0;
	this->_madSurvivors = TSet<TWeakObjectPtr<AActor>>();
}

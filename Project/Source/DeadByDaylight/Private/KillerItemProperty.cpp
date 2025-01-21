#include "KillerItemProperty.h"

FKillerItemProperty::FKillerItemProperty()
{
	this->Object = NULL;
	this->Population = NULL;
	this->_gameplayElementType = EGameplayElementType::Generic;
	this->IterativeWeightAdjustmentStrategyClass = NULL;
}

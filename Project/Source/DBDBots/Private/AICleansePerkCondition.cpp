#include "AICleansePerkCondition.h"

FAICleansePerkCondition::FAICleansePerkCondition()
{
	this->CleansePerkID = FDataTableDropdown{};
	this->DisplayPercentQuery = EArithmeticKeyOperation::Equal;
	this->DisplayPercentValue = 0.0f;
}

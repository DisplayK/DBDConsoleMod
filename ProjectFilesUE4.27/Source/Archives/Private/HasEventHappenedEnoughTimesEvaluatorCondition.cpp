#include "HasEventHappenedEnoughTimesEvaluatorCondition.h"

UHasEventHappenedEnoughTimesEvaluatorCondition::UHasEventHappenedEnoughTimesEvaluatorCondition()
{
	this->_numOccurrences = 0.000000;
	this->_prerequisiteTimeLimit = -1.000000;
	this->_triggerTimeLimit = -1.000000;
}

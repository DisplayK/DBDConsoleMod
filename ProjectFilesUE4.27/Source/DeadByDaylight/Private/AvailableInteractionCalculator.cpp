#include "AvailableInteractionCalculator.h"

FAvailableInteractionCalculator::FAvailableInteractionCalculator()
{
	this->_interactions = TSet<UInteractionDefinition*>();
	this->_fullEvaluationFrequency = 0.0f;
	this->_maxFramesForFullEvaluation = 0;
	this->_secondsBetweenNullReferenceCleanup = 0.0f;
}

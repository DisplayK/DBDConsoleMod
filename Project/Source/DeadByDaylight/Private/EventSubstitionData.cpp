#include "EventSubstitionData.h"

FEventSubstitionData::FEventSubstitionData()
{
	this->_name = NAME_None;
	this->_allowSubstitutionInKYF = false;
	this->_baseNumOfSubstitutionPerGroup = 0;
	this->_gameplaySubstitutionElements = TArray<FGameplayElementSubstitutions>();
	this->_dependencySubstitutionElements = TArray<FDependencyElementSubstitutions>();
	this->_dependencyElementAdditions = TArray<FDependencyElementAddition>();
	this->_gameplayElementAdditions = TArray<FGameplayElementAddition>();
}

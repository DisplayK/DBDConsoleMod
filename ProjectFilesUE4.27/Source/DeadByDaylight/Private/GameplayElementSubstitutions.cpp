#include "GameplayElementSubstitutions.h"

FGameplayElementSubstitutions::FGameplayElementSubstitutions()
{
	this->_replacements = TArray<FSubstitutionElements>();
	this->_type = EGameplayElementType::Generic;
}

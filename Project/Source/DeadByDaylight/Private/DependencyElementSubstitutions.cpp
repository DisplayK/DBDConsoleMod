#include "DependencyElementSubstitutions.h"

FDependencyElementSubstitutions::FDependencyElementSubstitutions()
{
	this->_replacements = TArray<FSubstitutionElements>();
	this->_type = ETileSpawnPointType::Unspecified;
}

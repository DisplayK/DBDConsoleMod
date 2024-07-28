#include "CruelConfinement.h"

float UCruelConfinement::GetEffectiveRadiusAtLevel()
{
	return 0.0f;
}

float UCruelConfinement::GetBlockDurationAtLevel()
{
	return 0.0f;
}

UCruelConfinement::UCruelConfinement()
{
	this->_effectiveRadius = 0.000000;
	this->_blockDuration = 0.000000;
	this->_blockableLists = TMap<AGenerator*, FWindowBlockableList>();
}

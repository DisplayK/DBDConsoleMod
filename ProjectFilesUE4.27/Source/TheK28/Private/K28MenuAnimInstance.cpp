#include "K28MenuAnimInstance.h"

int32 UK28MenuAnimInstance::GetAnimationMappingIndex() const
{
	return 0;
}

UK28MenuAnimInstance::UK28MenuAnimInstance()
{
	this->_customizationAnimationSelectorClass = NULL;
	this->_customizationAnimationSelector = NULL;
}

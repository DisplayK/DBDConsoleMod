#include "DestroyBreakableDefinition.h"

class ABreakableBase;

ABreakableBase* UDestroyBreakableDefinition::GetBreakable() const
{
	return NULL;
}

UDestroyBreakableDefinition::UDestroyBreakableDefinition()
{
	this->_interactionTimePercentForDestroyEvent = 0.000000;
	this->_breakable = NULL;
}

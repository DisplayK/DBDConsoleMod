#include "UnlockSaveStatCondition.h"

FUnlockSaveStatCondition::FUnlockSaveStatCondition()
{
	this->StatName = NAME_None;
	this->ValueRequired = 0.0f;
	this->isCharacterSpecific = false;
}

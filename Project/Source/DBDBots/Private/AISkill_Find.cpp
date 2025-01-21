#include "AISkill_Find.h"

UAISkill_Find::UAISkill_Find()
{
	this->FindClass = NULL;
	this->SearchInterval = 1.000000;
	this->MustBeSeen = false;
	this->_currentWishedObjects = TArray<UObject*>();
}

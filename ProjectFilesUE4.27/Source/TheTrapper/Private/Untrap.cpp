#include "Untrap.h"

class ABearTrap;

ABearTrap* UUntrap::GetTrap() const
{
	return NULL;
}

UUntrap::UUntrap()
{
	this->_overridableInteractions = TArray<FString>();
	this->_bearTrapUpdateMontageID = TEXT("BearTrapOpen");
	this->_bearTrapFinishMontageID = TEXT("BearTrapEscape");
}

#include "TrapKillerInteraction.h"

UTrapKillerInteraction::UTrapKillerInteraction()
{
	this->_overridableInteractions = TArray<FString>();
	this->_openNotifyID = TEXT("OnTrapOpen");
	this->_footSocketName = TEXT("LeftFootIKSocket");
}

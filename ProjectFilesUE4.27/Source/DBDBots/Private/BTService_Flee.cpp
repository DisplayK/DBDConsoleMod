#include "BTService_Flee.h"

UBTService_Flee::UBTService_Flee()
{
	this->PathStrategySelectorClass = NULL;
	this->OnEndObjectInFocusCooldown = 15.000000;
	this->ClearFleePathBBKeyDelay = 1.000000;
	this->_activePath = NULL;
	this->_lostFocusedObjects = TArray<UObject*>();
	this->_strategySelector = NULL;
}

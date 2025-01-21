#include "ReversibleActionSystemComponent.h"

UReversibleActionSystemComponent::UReversibleActionSystemComponent()
{
	this->_pendingInstantActionHandlers = TMap<FActionPredictionKey, FPendingInstantActionList>();
	this->_predictedInstantActionHandlers = TMap<FActionPredictionKey, FInstantActionList>();
}

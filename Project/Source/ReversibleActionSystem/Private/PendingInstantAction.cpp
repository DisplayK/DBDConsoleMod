#include "PendingInstantAction.h"

FPendingInstantAction::FPendingInstantAction()
{
	this->Handler = NULL;
	this->TimerHandle = FTimerHandle{};
}

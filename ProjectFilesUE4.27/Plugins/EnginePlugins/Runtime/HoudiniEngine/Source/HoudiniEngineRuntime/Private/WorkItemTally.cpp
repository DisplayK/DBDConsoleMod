#include "WorkItemTally.h"

FWorkItemTally::FWorkItemTally()
{
	this->AllWorkItems = TSet<int32>();
	this->WaitingWorkItems = TSet<int32>();
	this->ScheduledWorkItems = TSet<int32>();
	this->CookingWorkItems = TSet<int32>();
	this->CookedWorkItems = TSet<int32>();
	this->ErroredWorkItems = TSet<int32>();
	this->CookCancelledWorkItems = TSet<int32>();
}

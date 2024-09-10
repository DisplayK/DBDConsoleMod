#include "QuestEventsTrackingData.h"

FQuestEventsTrackingData::FQuestEventsTrackingData()
{
	this->QuestEventId = TEXT("");
	this->CurrentProgressionValue = 0;
	this->MaxProgressionValue = 0;
	this->OperationType = EQuestOperationType::EQ;
}

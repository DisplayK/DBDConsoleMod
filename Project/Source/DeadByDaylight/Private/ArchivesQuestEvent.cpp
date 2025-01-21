#include "ArchivesQuestEvent.h"

FArchivesQuestEvent::FArchivesQuestEvent()
{
	this->QuestEventId = TEXT("");
	this->Repetition = 0;
	this->Parameters = TEXT("");
	this->Operation = TEXT("");
	this->Parameters_IsSet = false;
	this->Operation_IsSet = false;
}

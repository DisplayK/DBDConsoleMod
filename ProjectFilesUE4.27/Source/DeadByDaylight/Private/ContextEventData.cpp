#include "ContextEventData.h"

FContextEventData::FContextEventData()
{
	this->ContextGroupName = TEXT("");
	this->ContextGroupUid = 0;
	this->PreviousContextName = TEXT("");
	this->PreviousContextUid = 0;
	this->CurrentContextName = TEXT("");
	this->CurrentContextUid = 0;
	this->NextContextName = TEXT("");
	this->NextContextUid = 0;
	this->Timestamp = FDateTime{};
}

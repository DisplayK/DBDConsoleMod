#include "ButtonSequenceData.h"

FButtonSequenceData::FButtonSequenceData()
{
	this->SequenceId = NAME_None;
	this->Sequence = TArray<FName>();
	this->Timeout = 0;
	this->Platforms = TArray<FString>();
	this->MinKeysForFailedAttempt = 0;
}

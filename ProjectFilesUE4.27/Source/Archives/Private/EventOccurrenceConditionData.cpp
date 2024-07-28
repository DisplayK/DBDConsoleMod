#include "EventOccurrenceConditionData.h"

FEventOccurrenceConditionData::FEventOccurrenceConditionData()
{
	this->GameEventTag = FGameplayTag{};
	this->PreviousConditionSubject = EConditionSubject::Instigator;
	this->CurrentConditionSubject = EConditionSubject::Instigator;
}

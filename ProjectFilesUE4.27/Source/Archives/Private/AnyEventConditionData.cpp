#include "AnyEventConditionData.h"

FAnyEventConditionData::FAnyEventConditionData()
{
	this->GameEventTag = FGameplayTag{};
	this->PreviousConditionSubject = EConditionSubject::Instigator;
	this->CurrentConditionSubject = EConditionSubject::Instigator;
}

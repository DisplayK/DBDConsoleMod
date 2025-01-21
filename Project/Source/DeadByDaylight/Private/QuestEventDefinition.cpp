#include "QuestEventDefinition.h"

FQuestEventDefinition::FQuestEventDefinition()
{
	this->TrackedGameEvents = TArray<FGameplayTag>();
	this->QuestEventEvaluator = NULL;
}

#include "DebugQuestModelExtArchiveObjective.h"

FDebugQuestModelExtArchiveObjective::FDebugQuestModelExtArchiveObjective()
{
	this->Conditions = TArray<FDebugQuestModelExtArchiveCondition>();
	this->NeededProgression = 0;
	this->QuestEvents = TArray<FDebugModelExtArchiveQuestEvent>();
	this->SpecialBehaviours = TArray<FDebugModelExtArchiveQuestSpecialBehaviours>();
}

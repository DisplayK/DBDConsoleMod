#include "ArchivesObjective.h"

FArchivesObjective::FArchivesObjective()
{
	this->ObjectiveId = TEXT("");
	this->ObjectiveId_IsSet = false;
	this->IncrementWithEventRepetitions = false;
	this->NeededProgression = 0;
	this->Conditions = TArray<FArchivesQuestCondition>();
	this->Conditions_IsSet = false;
	this->QuestEvent = TArray<FArchivesQuestEvent>();
	this->QuestEvent_IsSet = false;
	this->SpecialBehaviours = TArray<FArchivesQuestSpecialBehaviour>();
	this->SpecialBehaviours_IsSet = false;
	this->IsCommunityObjective = false;
	this->IsCommunityObjective_IsSet = false;
}

#include "ArchiveQuestObjectiveDefinition.h"

FArchiveQuestObjectiveDefinition::FArchiveQuestObjectiveDefinition()
{
	this->Description = FText::GetEmpty();
	this->RulesDescription = FText::GetEmpty();
	this->ProgressionType = EQuestProgressionType::None;
	this->DescriptionParameters = TArray<FName>();
}

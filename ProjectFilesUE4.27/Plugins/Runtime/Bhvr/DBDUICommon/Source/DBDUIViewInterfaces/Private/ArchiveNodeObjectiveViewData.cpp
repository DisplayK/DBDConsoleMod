#include "ArchiveNodeObjectiveViewData.h"

FArchiveNodeObjectiveViewData::FArchiveNodeObjectiveViewData()
{
	this->Description = FText::GetEmpty();
	this->CurrentProgress = 0;
	this->MaxProgress = 0;
	this->ProgressionType = EQuestProgressionType::None;
	this->IsCommunityObjective = false;
}

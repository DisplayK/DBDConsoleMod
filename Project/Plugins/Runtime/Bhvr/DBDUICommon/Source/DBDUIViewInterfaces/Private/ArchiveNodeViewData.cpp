#include "ArchiveNodeViewData.h"

FArchiveNodeViewData::FArchiveNodeViewData()
{
	this->Type = EArchiveNodeType::Narrative;
	this->Status = EStoryNodeState::Unavailable;
	this->Title = FText::GetEmpty();
	this->Subtitle = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->DebugInfo = TEXT("");
	this->IconPath = TEXT("");
	this->Objectives = TArray<FArchiveNodeObjectiveViewData>();
	this->Rewards = TArray<FRewardWrapperViewData>();
	this->VignetteTitles = TArray<FText>();
	this->Role = EPlayerRole::VE_None;
}

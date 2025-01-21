#include "SpecialEventObjectiveData.h"

FSpecialEventObjectiveData::FSpecialEventObjectiveData()
{
	this->ObjectiveId = NAME_None;
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IconPath = TEXT("");
	this->ObjectiveFrameLabel = TEXT("");
	this->CompletedTitle = FText::GetEmpty();
	this->CompletedDescription = FText::GetEmpty();
	this->RewardId = NAME_None;
	this->LockedRewardGenericIconPath = TEXT("");
	this->UnlockedRewardGenericIconPath = TEXT("");
	this->PlayerRole = EPlayerRole::VE_None;
	this->StatName = TEXT("");
	this->Sections = 0;
	this->MaxValue = 0;
}

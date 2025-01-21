#include "HelpTopicData.h"

FHelpTopicData::FHelpTopicData()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->ImagePath = TEXT("");
	this->IconPath = TEXT("");
	this->VideoID = TEXT("");
	this->Icon = NULL;
}

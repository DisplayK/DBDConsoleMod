#include "TutorialNotificationData.h"

FTutorialNotificationData::FTutorialNotificationData()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IconPath = TEXT("");
	this->Icon = NULL;
	this->Image = NULL;
	this->IsShowAnalyticEnabled = false;
}

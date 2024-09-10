#include "TabWidgetData.h"

FTabWidgetData::FTabWidgetData()
{
	this->Key = 0;
	this->Title = FText::GetEmpty();
	this->HasNotification = false;
	this->Icon = NULL;
	this->ForcesIconSize = false;
	this->IconSize = FVector2D{};
	this->AnalyticsName = TEXT("");
	this->IsKillSwitchEnabled = false;
}

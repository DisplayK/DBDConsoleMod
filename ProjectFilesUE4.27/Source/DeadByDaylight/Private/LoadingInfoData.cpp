#include "LoadingInfoData.h"

FLoadingInfoData::FLoadingInfoData()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->Icon = NULL;
	this->IsAvailableForKiller = false;
	this->IsAvailableForSurvivor = false;
}

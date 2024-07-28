#include "LoadingImagesHintInfo.h"

FLoadingImagesHintInfo::FLoadingImagesHintInfo()
{
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->Icon = FSlateBrush{};
	this->IsAvailableForKiller = false;
	this->IsAvailableForSurvivor = false;
}

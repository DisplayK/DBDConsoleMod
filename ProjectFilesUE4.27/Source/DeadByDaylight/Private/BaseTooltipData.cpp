#include "BaseTooltipData.h"

FBaseTooltipData::FBaseTooltipData()
{
	this->Title = TEXT("");
	this->Description = TEXT("");
	this->TouchPosition = FVector2D{};
	this->LeftTooltipWidgetAsset = NULL;
	this->RightTooltipWidgetAsset = NULL;
}

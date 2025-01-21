#include "WatermarkPresenter.h"

bool UWatermarkPresenter::IsUsingCommandLineArgument()
{
	return false;
}

bool UWatermarkPresenter::IsSteamBuild()
{
	return false;
}

bool UWatermarkPresenter::IsNonShippingBuild()
{
	return false;
}

UWatermarkPresenter::UWatermarkPresenter()
{
	this->WatermarkWidgetClass = NULL;
}

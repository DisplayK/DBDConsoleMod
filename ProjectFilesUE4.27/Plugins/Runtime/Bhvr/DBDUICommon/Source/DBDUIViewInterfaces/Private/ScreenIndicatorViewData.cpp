#include "ScreenIndicatorViewData.h"

FScreenIndicatorViewData::FScreenIndicatorViewData()
{
	this->Id = TEXT("");
	this->IsInFront = false;
	this->ScreenPosition = FVector2D{};
	this->ViewportSize = FVector2D{};
	this->Distance = 0.0f;
	this->IndicatorIcon = NULL;
	this->IndicatorType = EHudScreenIndicatorType::None;
}

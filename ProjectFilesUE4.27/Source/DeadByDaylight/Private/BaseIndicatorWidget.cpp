#include "BaseIndicatorWidget.h"

void UBaseIndicatorWidget::OnOutAnimationFinished()
{

}

UBaseIndicatorWidget::UBaseIndicatorWidget()
{
	this->_safeZonePanel = NULL;
	this->_canvasPanelSlot = NULL;
	this->RadiusMultiplier = 1.000000;
	this->IndicatorPanel = NULL;
	this->Indicator = NULL;
	this->ArrowImage = NULL;
}

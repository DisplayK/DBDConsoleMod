#include "CoreScreenIndicatorsContainerWidget.h"

class UCoreScreenIndicatorWidget;

TMap<FString, UCoreScreenIndicatorWidget*> UCoreScreenIndicatorsContainerWidget::GetScreenIndicatorsMap()
{
	return TMap<FString, UCoreScreenIndicatorWidget*>();
}

FString UCoreScreenIndicatorsContainerWidget::FindScreenIndicatorKey(UCoreScreenIndicatorWidget* value) const
{
	return TEXT("");
}

UCoreScreenIndicatorsContainerWidget::UCoreScreenIndicatorsContainerWidget()
{
	this->InactiveThreshold = 0.000000;
	this->Container = NULL;
	this->ScreenIndicatorClass = NULL;
	this->_screenIndicatorsMap = TMap<FString, UCoreScreenIndicatorWidget*>();
	this->_screenIndicatorsPool = TArray<UCoreScreenIndicatorWidget*>();
}

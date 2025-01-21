#include "CoreTabContentWidget.h"

void UCoreTabContentWidget::StopFadeInTweening(float opacityValue)
{

}

void UCoreTabContentWidget::ResetFade()
{

}

void UCoreTabContentWidget::FadeOutContent()
{

}

void UCoreTabContentWidget::FadeInContent()
{

}

UCoreTabContentWidget::UCoreTabContentWidget()
{
	this->ContentWidgets = TArray<UWidget*>();
	this->_contentFadeInTime = 1.000000;
	this->_contentFadeInEasing = EEasingType::Linear;
	this->_contentFadeOutTime = 1.000000;
	this->_contentFadeOutEasing = EEasingType::Linear;
}

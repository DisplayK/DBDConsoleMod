#include "CoreInteractionPromptWidget.h"

void UCoreInteractionPromptWidget::OnLargeTextSettingsChanged(bool isLargeTextEnabled)
{

}

UCoreInteractionPromptWidget::UCoreInteractionPromptWidget() : UUserWidget(FObjectInitializer::Get())
{
	this->LargeTextScale = 1.000000;
	this->LargeTextScaleBox = NULL;
	this->ActionTB = NULL;
	this->_textManager = NULL;
}

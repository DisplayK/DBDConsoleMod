#include "CoreInteractionPromptsContainerWidget.h"

UCoreInteractionPromptsContainerWidget::UCoreInteractionPromptsContainerWidget()
{
	this->CenterContainerBox = NULL;
	this->ContainerBox = NULL;
	this->InteractionPromptWidgetClass = NULL;
	this->MaxDisplayedPrompts = 0;
	this->MaxDisplayedCenterPrompts = 0;
	this->_promptWidgetPool = TArray<UCoreInteractionPromptWidget*>();
	this->_centerPromptWidgetPool = TArray<UCoreInteractionPromptWidget*>();
	this->_displayedPromptsMap = TMap<FName, UCoreInteractionPromptWidget*>();
}

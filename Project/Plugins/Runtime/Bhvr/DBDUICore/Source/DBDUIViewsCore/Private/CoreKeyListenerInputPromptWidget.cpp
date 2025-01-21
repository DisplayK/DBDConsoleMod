#include "CoreKeyListenerInputPromptWidget.h"
#include "EUIActionType.h"
#include "InputCoreTypes.h"

void UCoreKeyListenerInputPromptWidget::SetUIAction(const EUIActionType actionType)
{

}

void UCoreKeyListenerInputPromptWidget::SetLabel(const FText& label)
{

}

void UCoreKeyListenerInputPromptWidget::SetKeyOverride(const FKey keyOverride)
{

}

void UCoreKeyListenerInputPromptWidget::SetEnabled(bool isEnabled)
{

}

bool UCoreKeyListenerInputPromptWidget::IsEnabled()
{
	return false;
}

UCoreKeyListenerInputPromptWidget::UCoreKeyListenerInputPromptWidget()
{
	this->InputPrompt = NULL;
	this->LabelTB = NULL;
}

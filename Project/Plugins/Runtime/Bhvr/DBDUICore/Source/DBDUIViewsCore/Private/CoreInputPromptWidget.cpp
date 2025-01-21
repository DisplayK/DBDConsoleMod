#include "CoreInputPromptWidget.h"
#include "InputCoreTypes.h"

void UCoreInputPromptWidget::SetInputKey(const FKey& inputKey)
{

}

void UCoreInputPromptWidget::SetEnabled(bool isEnabled)
{

}

void UCoreInputPromptWidget::PromptNotFound()
{

}

bool UCoreInputPromptWidget::IsEnabled()
{
	return false;
}

FText UCoreInputPromptWidget::GetInputShortDisplayName() const
{
	return FText::GetEmpty();
}

FKey UCoreInputPromptWidget::GetInputKey()
{
	return FKey{};
}

UCoreInputPromptWidget::UCoreInputPromptWidget()
{
	this->_unfoundInputKeyText = FText::GetEmpty();
	this->_isEnabled = true;
}

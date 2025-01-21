#include "CoreInputSwitcherWidget.h"
#include "EUIActionType.h"
#include "Framework/Text/TextLayout.h"
#include "InputCoreTypes.h"

class UCoreButtonWidget;
class UCoreKeyListenerInputPromptWidget;

void UCoreInputSwitcherWidget::SetUIAction(const EUIActionType actionType)
{

}

void UCoreInputSwitcherWidget::SetLabel(const FText& label)
{

}

void UCoreInputSwitcherWidget::SetKeyOverride(const FKey keyOverride)
{

}

void UCoreInputSwitcherWidget::SetEnabled(bool isEnabled)
{

}

void UCoreInputSwitcherWidget::SetAlignment(ETextJustify::Type newAlignment)
{

}

void UCoreInputSwitcherWidget::OnInputPromptTriggered()
{

}

void UCoreInputSwitcherWidget::OnButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreInputSwitcherWidget::OnAlignmentChanged_Implementation(ETextJustify::Type newAlignment)
{

}

UCoreKeyListenerInputPromptWidget* UCoreInputSwitcherWidget::GetInputPrompt()
{
	return NULL;
}

UCoreButtonWidget* UCoreInputSwitcherWidget::GetButton()
{
	return NULL;
}

UCoreInputSwitcherWidget::UCoreInputSwitcherWidget()
{
	this->ButtonDisplayRule = EInputSwitcherDisplayRule::Undefined;
	this->InputPromptDisplayRule = EInputSwitcherDisplayRule::Undefined;
	this->InputPrompt = NULL;
	this->Button = NULL;
	this->_shouldRegisterForInputInConstruct = true;
	this->_alignment = ETextJustify::Left;
	this->_isEnabled = true;
	this->SendAnalyticsData = false;
	this->AnalyticsName = TEXT("UNDEFINED");
}

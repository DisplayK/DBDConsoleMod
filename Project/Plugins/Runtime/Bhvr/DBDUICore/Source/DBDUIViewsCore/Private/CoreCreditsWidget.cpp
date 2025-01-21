#include "CoreCreditsWidget.h"

class UUITweenInstance;

void UCoreCreditsWidget::ScrollText()
{

}

void UCoreCreditsWidget::OnScrollEnd(UUITweenInstance* tween)
{

}

UCoreCreditsWidget::UCoreCreditsWidget()
{
	this->ScrollSpeed = 0.000000;
	this->BackInputSwitcher = NULL;
	this->CreditsTextBlock = NULL;
	this->_tween = NULL;
}

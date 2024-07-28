#include "CoreSelectableButtonWidget.h"

void UCoreSelectableButtonWidget::SetSelected(bool isSelected)
{

}

bool UCoreSelectableButtonWidget::IsSelected() const
{
	return false;
}

bool UCoreSelectableButtonWidget::IsSelectable() const
{
	return false;
}

UCoreSelectableButtonWidget::UCoreSelectableButtonWidget()
{
	this->_analyticsName = TEXT("UNDEFINED");
}

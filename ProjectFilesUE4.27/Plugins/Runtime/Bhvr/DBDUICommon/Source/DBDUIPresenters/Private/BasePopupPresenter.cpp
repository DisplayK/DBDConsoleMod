#include "BasePopupPresenter.h"
#include "EContext.h"

void UBasePopupPresenter::OnContextLeave(EContext context)
{

}

void UBasePopupPresenter::OnContextEnter(EContext context)
{

}

bool UBasePopupPresenter::IsContextEntered() const
{
	return false;
}

UBasePopupPresenter::UBasePopupPresenter()
{
	this->ObservedContext = EContext::None;
	this->PopupWidgetClass = NULL;
	this->_viewData = NULL;
}

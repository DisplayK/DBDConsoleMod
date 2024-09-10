#include "BasePopupViewData.h"

UBasePopupViewData::UBasePopupViewData()
{
	this->Priority = EPopupPriority::ErrorSystem;
	this->Title = FText::GetEmpty();
	this->Message = FText::GetEmpty();
}

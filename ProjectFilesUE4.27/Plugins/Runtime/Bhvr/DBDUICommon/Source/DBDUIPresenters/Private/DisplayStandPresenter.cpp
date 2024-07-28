#include "DisplayStandPresenter.h"

void UDisplayStandPresenter::OnDisplayStandRotation(float distance)
{

}

bool UDisplayStandPresenter::IsContextEntered() const
{
	return false;
}

UDisplayStandPresenter::UDisplayStandPresenter()
{
	this->CoreDisplayStandWidgetClass = NULL;
	this->ObservedContext = EContext::None;
	this->DisplayStandName = NAME_None;
	this->DragZonePositionX = 0.000000;
	this->DragZonePositionY = 0.000000;
	this->DragZoneSizeX = 0.000000;
	this->DragZoneSizeY = 0.000000;
}

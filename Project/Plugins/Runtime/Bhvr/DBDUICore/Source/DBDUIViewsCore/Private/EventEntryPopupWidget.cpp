#include "EventEntryPopupWidget.h"

void UEventEntryPopupWidget::setWidgetSkinFromEventLabel(const FText& eventLabel)
{

}

UEventEntryPopupWidget::UEventEntryPopupWidget()
{
	this->ImageContainer = NULL;
	this->TitleBanner = NULL;
	this->TitleImage = NULL;
	this->BackgroundImage = NULL;
	this->ScrollBox = NULL;
	this->EventDateText = NULL;
	this->AdditionalInformationText = NULL;
	this->_eventSkinDataTable = NULL;
}

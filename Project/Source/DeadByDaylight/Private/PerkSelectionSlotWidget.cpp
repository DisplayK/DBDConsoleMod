#include "PerkSelectionSlotWidget.h"

void UPerkSelectionSlotWidget::OnButtonClicked()
{

}

UPerkSelectionSlotWidget::UPerkSelectionSlotWidget()
{
	this->PerkName = NULL;
	this->TextChoose = NULL;
	this->PerkActionButton = NULL;
	this->SelectedIcon = NULL;
	this->DescriptionText = NULL;
	this->PictureBackground = NULL;
	this->PicturePerkBackground = NULL;
	this->PictureHighlightFrame = NULL;
	this->PictureTopRightBackground = NULL;
	this->PictureTopRightFrame = NULL;
	this->HighOpacity = 1.000000;
	this->LowOpacity = 0.400000;
	this->PerkBackgroundLowOpacity = 0.300000;
	this->DescriptionBackgroundLowOpacity = 0.350000;
}

#include "UMGCharacterSlideShowWidget.h"

void UUMGCharacterSlideShowWidget::WaitAndFadeOut()
{

}

void UUMGCharacterSlideShowWidget::SwitchCharacterSlide()
{

}

void UUMGCharacterSlideShowWidget::FadeOut()
{

}

void UUMGCharacterSlideShowWidget::FadeIn()
{

}

UUMGCharacterSlideShowWidget::UUMGCharacterSlideShowWidget()
{
	this->_perkCategoriesIcons = TMap<FName, TSoftObjectPtr<UTexture2D>>();
	this->SecondsBeforeNextSlide = 15.000000;
}

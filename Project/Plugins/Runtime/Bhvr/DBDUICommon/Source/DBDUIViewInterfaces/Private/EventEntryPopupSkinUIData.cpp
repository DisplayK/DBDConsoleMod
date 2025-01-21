#include "EventEntryPopupSkinUIData.h"

FEventEntryPopupSkinUIData::FEventEntryPopupSkinUIData()
{
	this->AlternativeButtonMaterial = NULL;
	this->BackgroundTexture = NULL;
	this->TitleBannerTexture = NULL;
	this->TitleIcon = NULL;
	this->EventImage = NULL;
	this->AlternativeButtonIcon = NULL;
	this->HeaderColor = FLinearColor{};
	this->BaseColor = FLinearColor{};
	this->ScrollBarColor = FLinearColor{};
	this->AlternativeButtonPositionOffset = FVector2D{};
	this->AlternativeButtonAlignment = ETextJustify::Left;
	this->IsUsingBackgroundTexture = false;
	this->AlternativeButtonUsedHoverAnimation = false;
}

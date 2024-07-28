#include "EventItemsContentTypeUIData.h"

FEventItemsContentTypeUIData::FEventItemsContentTypeUIData()
{
	this->ContentType = EEventItemContentType::None;
	this->NeedRemoveRarityBackground = false;
	this->UseDefaultRarityBackgroundColor = false;
	this->DefaultRarityBackgroundColor = FSlateColor{};
	this->BackgroundTexture = NULL;
	this->RarityBackgroundTexture = NULL;
}

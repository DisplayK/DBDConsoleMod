#include "OutfitViewSetting.h"

FOutfitViewSetting::FOutfitViewSetting()
{
	this->Label = NAME_None;
	this->OutfitDropdown = FOutfitDropdown{};
	this->Settings = FScreenshotViewSetting{};
}

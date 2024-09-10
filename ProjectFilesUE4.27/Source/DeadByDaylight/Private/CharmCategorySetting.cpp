#include "CharmCategorySetting.h"

FCharmCategorySetting::FCharmCategorySetting()
{
	this->Label = NAME_None;
	this->CharmCategory = ECharmCategory::None;
	this->Settings = FScreenshotViewSetting{};
}

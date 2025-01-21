#include "ItemViewSetting.h"

FItemViewSetting::FItemViewSetting()
{
	this->Label = NAME_None;
	this->Item = FCustomizationItemDropdown{};
	this->Settings = FScreenshotViewSetting{};
}

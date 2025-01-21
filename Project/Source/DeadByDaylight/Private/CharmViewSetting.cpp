#include "CharmViewSetting.h"

FCharmViewSetting::FCharmViewSetting()
{
	this->Label = NAME_None;
	this->CharmID = FCharmDropdown{};
	this->Settings = FScreenshotViewSetting{};
}

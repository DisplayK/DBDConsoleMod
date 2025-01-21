#include "CharacterViewSetting.h"

FCharacterViewSetting::FCharacterViewSetting()
{
	this->Label = NAME_None;
	this->CharacterDropdown = FCharacterDropdown{};
	this->Settings = FScreenshotViewSetting{};
}

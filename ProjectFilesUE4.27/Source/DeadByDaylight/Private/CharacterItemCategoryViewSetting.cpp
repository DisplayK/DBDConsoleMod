#include "CharacterItemCategoryViewSetting.h"

FCharacterItemCategoryViewSetting::FCharacterItemCategoryViewSetting()
{
	this->Label = NAME_None;
	this->CharacterDropdown = FRoleItemCategoryDropdown{};
	this->Settings = FScreenshotViewSetting{};
}

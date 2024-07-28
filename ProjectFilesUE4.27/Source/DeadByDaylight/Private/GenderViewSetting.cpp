#include "GenderViewSetting.h"

FGenderViewSetting::FGenderViewSetting()
{
	this->Label = NAME_None;
	this->RoleItemCategory = FRoleItemCategoryDropdown{};
	this->Gender = EGender::VE_Male;
	this->Settings = FScreenshotViewSetting{};
}

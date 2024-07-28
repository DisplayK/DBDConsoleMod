#include "RoleGenderViewSetting.h"

FRoleGenderViewSetting::FRoleGenderViewSetting()
{
	this->Label = NAME_None;
	this->RoleDropdown = FRoleDropdown{};
	this->Gender = EGender::VE_Male;
	this->Settings = FScreenshotViewSetting{};
}

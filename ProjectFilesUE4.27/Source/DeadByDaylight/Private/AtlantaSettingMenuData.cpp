#include "AtlantaSettingMenuData.h"

FAtlantaSettingMenuData::FAtlantaSettingMenuData()
{
	this->OverlayTab = EOverlayTabs::Settings;
	this->OverlayMode = EOverlayMode::Default;
	this->DisplayName = FText::GetEmpty();
	this->MenuType = EAtlantaSettingMenuType::TabButton;
}

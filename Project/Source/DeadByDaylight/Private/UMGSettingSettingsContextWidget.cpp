#include "UMGSettingSettingsContextWidget.h"

void UUMGSettingSettingsContextWidget::HandleUserCenterButtonClick()
{

}

void UUMGSettingSettingsContextWidget::HandleMenuVolumeToggleClick(bool toggleValue)
{

}

void UUMGSettingSettingsContextWidget::HandleMenuVolumeChanged(float sliderValue)
{

}

void UUMGSettingSettingsContextWidget::HandleMainVolumeToggleClick(bool toggleValue)
{

}

void UUMGSettingSettingsContextWidget::HandleMainVolumeChanged(float sliderValue)
{

}

void UUMGSettingSettingsContextWidget::HandleLogOutButtonClick()
{

}

void UUMGSettingSettingsContextWidget::HandleLogInButtonClick()
{

}

void UUMGSettingSettingsContextWidget::HandleLeaveTutorialButtonClick()
{

}

void UUMGSettingSettingsContextWidget::HandleAutoDeclineFriendRequestToggleClick(bool toggleValue)
{

}

UUMGSettingSettingsContextWidget::UUMGSettingSettingsContextWidget()
{
	this->MainVolumeOn = false;
	this->MainVolume = 0.000000;
	this->MenuVolumeOn = false;
	this->MenuVolume = 0.000000;
	this->IsLoggedIn = false;
	this->IsEnableUserCenterWithLoggedOut = false;
	this->IsLeaveTutorialButtonVisible = false;
	this->IsAutoDeclineFriendRequestOn = false;
}

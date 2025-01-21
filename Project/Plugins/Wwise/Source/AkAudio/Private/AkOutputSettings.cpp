#include "AkOutputSettings.h"

FAkOutputSettings::FAkOutputSettings()
{
	this->AudioDeviceSharesetName = TEXT("");
	this->IdDevice = 0;
	this->PanRule = PanningRule::PanningRule_Speakers;
	this->ChannelConfig = AkChannelConfiguration::Ak_Parent;
}

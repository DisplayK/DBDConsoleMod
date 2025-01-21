#include "EnvironmentAnalytics.h"

FEnvironmentAnalytics::FEnvironmentAnalytics()
{
	this->Environment = TEXT("");
	this->Endpoint = TEXT("");
	this->Language = TEXT("");
	this->SelectedCountry = TEXT("");
	this->Timezone = TEXT("");
	this->DeviceProfile = TEXT("");
	this->GpuAdapter = TEXT("");
	this->GpuProviderName = TEXT("");
	this->GpuDriverVersion = TEXT("");
	this->Cpu = TEXT("");
	this->QualitySetting = 0;
	this->IsFullScreen = false;
	this->IsAutomaticResolution = false;
	this->ScreenResolutionSetting = 0;
	this->EngineResolutionX = 0;
	this->EngineResolutionY = 0;
	this->Provider = TEXT("");
	this->Device = TEXT("");
	this->OperatingSystem = TEXT("");
	this->IsPlayingUsingStreaming = false;
	this->StreamingServerLocation = TEXT("");
	this->KrakenVersion = TEXT("");
	this->ContentVersion = TEXT("");
	this->IsUsingKeyboard = false;
	this->ControllerType = TEXT("");
}

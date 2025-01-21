#include "AkCommonInitializationSettings.h"

FAkCommonInitializationSettings::FAkCommonInitializationSettings()
{
	this->MaximumNumberOfMemoryPools = 0;
	this->MaximumNumberOfPositioningPaths = 0;
	this->CommandQueueSize = 0;
	this->SamplesPerFrame = 0;
	this->MainOutputSettings = FAkMainOutputSettings{};
	this->StreamingLookAheadRatio = 0.0f;
	this->NumberOfRefillsInVoice = 0;
	this->SpatialAudioSettings = FAkSpatialAudioSettings{};
}

#include "AkAudioEventData.h"

UAkAudioEventData::UAkAudioEventData()
{
	this->MaxAttenuationRadius = 0.000000;
	this->IsInfinite = false;
	this->MinimumDuration = 0.000000;
	this->MaximumDuration = 0.000000;
	this->LocalizedMedia = TMap<FString, UAkAssetDataSwitchContainer*>();
	this->PostedEvents = TSet<UAkAudioEvent*>();
	this->UserDefinedSends = TSet<UAkAuxBus*>();
	this->PostedTriggers = TSet<UAkTrigger*>();
	this->GroupValues = TSet<UAkGroupValue*>();
}

#include "AkComponent.h"
#include "AkExternalSourceInfo.h"
#include "Engine/LatentActionManager.h"

class UAkTrigger;
class UAkAuxBus;
class UAkSwitchValue;
class UAkComponent;
class UAkAudioEvent;

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{

}

void UAkComponent::UseEarlyReflections(UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName)
{

}

void UAkComponent::SetSwitch(UAkSwitchValue* SwitchValue, const FString& SwitchGroup, const FString& SwitchState)
{

}

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{

}

void UAkComponent::SetOutputBusVolume(float BusVolume)
{

}

void UAkComponent::SetListeners(const TArray<UAkComponent*>& Listeners)
{

}

void UAkComponent::SetGameObjectRadius(float in_outerRadius, float in_innerRadius)
{

}

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume)
{

}

void UAkComponent::SetEarlyReflectionsAuxBus(const FString& AuxBusName)
{

}

void UAkComponent::SetAttenuationScalingFactor(float Value)
{

}

void UAkComponent::PostTrigger(UAkTrigger* TriggerValue, const FString& Trigger)
{

}

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo)
{

}

int32 UAkComponent::PostAssociatedAkEventAndWaitForEnd(const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo)
{
	return 0;
}

int32 UAkComponent::PostAkEventByName(const FString& in_EventName)
{
	return 0;
}

void UAkComponent::PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo)
{

}

int32 UAkComponent::PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, const FString& in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo)
{
	return 0;
}

float UAkComponent::GetAttenuationRadius() const
{
	return 0.0f;
}

UAkComponent::UAkComponent()
{
	this->bUseSpatialAudio_DEPRECATED = false;
	this->OcclusionCollisionChannel = ECC_Visibility;
	this->EnableSpotReflectors = false;
	this->outerRadius = 0.000000;
	this->innerRadius = 0.000000;
	this->EarlyReflectionAuxBus = NULL;
	this->EarlyReflectionAuxBusName = TEXT("");
	this->EarlyReflectionOrder = 0;
	this->EarlyReflectionBusSendGain = 1.000000;
	this->EarlyReflectionMaxPathLength = 0.000000;
	this->roomReverbAuxBusGain = 0.000000;
	this->diffractionMaxEdges = 0;
	this->diffractionMaxPaths = 0;
	this->diffractionMaxPathLength = 0.000000;
	this->DrawFirstOrderReflections = false;
	this->DrawSecondOrderReflections = false;
	this->DrawHigherOrderReflections = false;
	this->DrawDiffraction = false;
	this->StopWhenOwnerDestroyed = true;
	this->AttenuationScalingFactor = 1.000000;
	this->OcclusionRefreshInterval = 0.200000;
	this->bUseReverbVolumes = true;
	this->OcclusionAffect = 100.000000;
	this->MaxDistance = 3200.000000;
	this->AutoPostOnBeginPlay = false;
	this->StaticAmbientEmitter = false;
	this->StaticAmbientEmitterFadeDuration = 0.500000;
	this->StaticAmbientEmitterInterpolationCurve = EAkCurveInterpolation::Log3;
	this->ListenersInRange = TSet<UAkComponent*>();
}

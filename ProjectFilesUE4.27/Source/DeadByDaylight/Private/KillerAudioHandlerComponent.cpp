#include "KillerAudioHandlerComponent.h"

class ADBDPlayer;

void UKillerAudioHandlerComponent::OnChaseStart(ADBDPlayer* chasedSurvivor)
{

}

UKillerAudioHandlerComponent::UKillerAudioHandlerComponent()
{
	this->_shockEvent = TEXT("AudioEvent_Killer_Moving_Shock");
}

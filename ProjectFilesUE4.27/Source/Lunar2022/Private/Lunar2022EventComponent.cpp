#include "Lunar2022EventComponent.h"

class ADBDPlayerState;

void ULunar2022EventComponent::Authority_OnPlayerFinishPlaying(const ADBDPlayerState* playerState)
{

}

ULunar2022EventComponent::ULunar2022EventComponent()
{
	this->_eventTag = TEXT("Lunar2022");
	this->_redEnvelopes = TArray<TWeakObjectPtr<ARedEnvelope>>();
}

#include "FirecrackerEffectHandlerComponent.h"

class AActor;

void UFirecrackerEffectHandlerComponent::OnFirecrackerDestroyed(AActor* destroyedActor)
{

}

UFirecrackerEffectHandlerComponent::UFirecrackerEffectHandlerComponent()
{
	this->_inRangeFirecrackers = TSet<AFirecracker*>();
}

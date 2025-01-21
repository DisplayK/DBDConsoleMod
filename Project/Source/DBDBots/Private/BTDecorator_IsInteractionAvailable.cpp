#include "BTDecorator_IsInteractionAvailable.h"

UBTDecorator_IsInteractionAvailable::UBTDecorator_IsInteractionAvailable()
{
	this->InteractionIds = TArray<FString>();
	this->OnFilter = EIsInteractionAvailableOnFilter::Self;
	this->FailIfAnotherOngoingInteraction = true;
	this->FailIfNotPerformingInteraction = false;
}

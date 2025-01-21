#include "FootstepsPerceptionComponent.h"

UFootstepsPerceptionComponent::UFootstepsPerceptionComponent()
{
	this->_allowFootstepsSeenPerkFlags = TArray<FGameplayTag>();
	this->_disallowFootstepsSeenPerkFlags = TArray<FGameplayTag>();
}

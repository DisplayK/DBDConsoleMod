#include "CharacterSightableComponent.h"
#include "ESightStatus.h"

ESightStatus UCharacterSightableComponent::GetHighestSightStatus() const
{
	return ESightStatus::OutOfSight;
}

UCharacterSightableComponent::UCharacterSightableComponent()
{
	this->_sightDelegateHandles = TMap<TWeakObjectPtr<ACharacter>, FDelegateHandleWrapper>();
	this->_sightersStatus = TMap<TWeakObjectPtr<ACharacter>, ESightStatus>();
}

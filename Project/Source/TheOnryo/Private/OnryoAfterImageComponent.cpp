#include "OnryoAfterImageComponent.h"

class ASlasherPlayer;

bool UOnryoAfterImageComponent::ShouldShowAfterImage() const
{
	return false;
}

bool UOnryoAfterImageComponent::IsOnryoInvisible() const
{
	return false;
}

bool UOnryoAfterImageComponent::IsInteracting() const
{
	return false;
}

bool UOnryoAfterImageComponent::IsAttacking() const
{
	return false;
}

ASlasherPlayer* UOnryoAfterImageComponent::GetKiller() const
{
	return NULL;
}

UOnryoAfterImageComponent::UOnryoAfterImageComponent()
{
	this->_hideAfterImageDuringInteractions = false;
}

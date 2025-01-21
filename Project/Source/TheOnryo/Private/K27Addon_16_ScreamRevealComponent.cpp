#include "K27Addon_16_ScreamRevealComponent.h"

void UK27Addon_16_ScreamRevealComponent::Server_ConfirmKillerIsInViewValidation_Implementation(bool isKillerInView)
{

}

void UK27Addon_16_ScreamRevealComponent::Multicast_RevealAndMakeSurvivorScream_Implementation(const float screamRevealDuration)
{

}

void UK27Addon_16_ScreamRevealComponent::Client_QueryIsKillerInSurvivorView_Implementation()
{

}

UK27Addon_16_ScreamRevealComponent::UK27Addon_16_ScreamRevealComponent()
{
	this->_authorityHasRequestedSurvivorScreamConfirmation = false;
	this->_screamDuration = 0.000000;
}

#include "TeleportToDemogorgonPortalInteraction.h"

class ASlasherPlayer;

void UTeleportToDemogorgonPortalInteraction::OnSlasherSet(ASlasherPlayer* killer)
{

}

void UTeleportToDemogorgonPortalInteraction::OnLocallyObservedChanged(const bool isKillerLocallyObserved)
{

}

UTeleportToDemogorgonPortalInteraction::UTeleportToDemogorgonPortalInteraction()
{
	this->TeleportToPortalSoundRange = 1600.000000;
	this->_enterPortalPhaseDuration = 0.000000;
	this->_cancelTeleportingPhaseDuration = 0.100000;
	this->_portalTargetingComponent = NULL;
	this->_portalPlacerState = NULL;
	this->_startingPortal = NULL;
	this->_targetedPortal = NULL;
	this->_interactingPlayer = NULL;
}

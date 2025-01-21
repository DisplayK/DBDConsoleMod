#include "NavLinkProxy_Interaction.h"

ANavLinkProxy_Interaction::ANavLinkProxy_Interaction()
{
	this->PlayerSetups = TMap<EPlayerRole, FNavLinkInteractPlayerSetup>();
	this->InteractionStartTimeLimit = 2.000000;
	this->_playersInteractionInputAtTime = TMap<ADBDPlayer*, float>();
}

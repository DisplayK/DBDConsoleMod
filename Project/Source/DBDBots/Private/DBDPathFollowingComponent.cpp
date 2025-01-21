#include "DBDPathFollowingComponent.h"

UDBDPathFollowingComponent::UDBDPathFollowingComponent()
{
	this->UnblockPathDeviationRadius = 200.000000;
	this->UnblockPathTimeLimit = 2.000000;
	this->_onNavLinkProxies = TSet<ANavLinkProxy*>();
}

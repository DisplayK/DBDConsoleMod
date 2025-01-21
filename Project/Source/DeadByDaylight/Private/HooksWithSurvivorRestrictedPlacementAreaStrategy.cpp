#include "HooksWithSurvivorRestrictedPlacementAreaStrategy.h"

UHooksWithSurvivorRestrictedPlacementAreaStrategy::UHooksWithSurvivorRestrictedPlacementAreaStrategy()
{
	this->_isRestrictionLingeringEnabled = false;
	this->_useSphericalZoneForBasementHooks = false;
	this->RestrictedSphericalLocations = TArray<FVector>();
}

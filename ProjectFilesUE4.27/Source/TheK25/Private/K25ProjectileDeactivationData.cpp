#include "K25ProjectileDeactivationData.h"

FK25ProjectileDeactivationData::FK25ProjectileDeactivationData()
{
	this->DeactivationReason = EK25ProjectileDeactivateReason::None;
	this->PhysicalSurfaceName = NAME_None;
	this->ShouldReelBackProjectile = false;
	this->HasAppliedDamage = false;
	this->_survivorHit = NULL;
}

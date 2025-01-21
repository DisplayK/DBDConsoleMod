#include "TrailSettings.h"

FTrailSettings::FTrailSettings()
{
	this->MaximumDistanceBetweenNodes = FDBDTunableRowHandle{};
	this->MinimumDistanceBetweenVisualNodes = FDBDTunableRowHandle{};
	this->CapsuleHalfHeight = 0.0f;
	this->CapsuleRadius = 0.0f;
	this->CollisionChannel = ECC_WorldStatic;
	this->_trailNodeClass = NULL;
}

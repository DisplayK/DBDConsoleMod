#include "AkGeometrySurfaceOverride.h"

FAkGeometrySurfaceOverride::FAkGeometrySurfaceOverride()
{
	this->AcousticTexture = NULL;
	this->bEnableOcclusionOverride = false;
	this->OcclusionValue = 0.0f;
	this->SurfaceArea = 0.0f;
}

#include "ImpactInfo.h"

FImpactInfo::FImpactInfo()
{
	this->Position = FVector{};
	this->Actor = NULL;
	this->Component = NULL;
	this->SurfaceType = SurfaceType_Default;
	this->ImpactNormal = FVector{};
}

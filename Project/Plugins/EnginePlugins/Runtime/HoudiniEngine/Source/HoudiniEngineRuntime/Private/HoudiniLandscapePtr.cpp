#include "HoudiniLandscapePtr.h"

UHoudiniLandscapePtr::UHoudiniLandscapePtr()
{
	this->LandscapeSoftPtr = NULL;
	this->BakeType = EHoudiniLandscapeOutputBakeType::Detachment;
}

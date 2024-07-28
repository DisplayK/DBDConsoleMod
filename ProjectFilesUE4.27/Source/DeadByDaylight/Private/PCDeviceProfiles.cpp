#include "PCDeviceProfiles.h"

FPCDeviceProfiles::FPCDeviceProfiles()
{
	this->CPU = NAME_None;
	this->GPU = NAME_None;
	this->Pairs = TArray<FResolutionQualityPair>();
}

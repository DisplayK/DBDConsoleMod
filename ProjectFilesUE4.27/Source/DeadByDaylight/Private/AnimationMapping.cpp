#include "AnimationMapping.h"

FAnimationMapping::FAnimationMapping()
{
	this->MontageAsset = NULL;
	this->Tags = TArray<FName>();
	this->_montage = NULL;
	this->_loadAttempted = false;
}

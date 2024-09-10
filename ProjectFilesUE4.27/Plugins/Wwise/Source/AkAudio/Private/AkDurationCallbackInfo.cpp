#include "AkDurationCallbackInfo.h"

UAkDurationCallbackInfo::UAkDurationCallbackInfo()
{
	this->Duration = 0.000000;
	this->EstimatedDuration = 0.000000;
	this->AudioNodeID = 0;
	this->MediaID = 0;
	this->bStreaming = false;
}

#include "S3OnlineConfig.h"

FS3OnlineConfig::FS3OnlineConfig()
{
	this->HiddenProgressiveQueueDelays = TArray<int32>();
	this->HiddenQueueDelayResetThreshold = 0;
	this->RandomQueueDelayMin = 0;
	this->RandomQueueDelayMax = 0;
}

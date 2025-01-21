#include "SpeedBasedNetSyncedValue.h"

FSpeedBasedNetSyncedValue::FSpeedBasedNetSyncedValue()
{
	this->_replicatedValue = 0.0f;
	this->_replicatedSpeed = 0.0f;
	this->_replicatedLastUpdateTimestamp = 0.0f;
}

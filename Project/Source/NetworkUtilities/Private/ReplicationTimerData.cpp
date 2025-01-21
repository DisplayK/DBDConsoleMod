#include "ReplicationTimerData.h"

FReplicationTimerData::FReplicationTimerData()
{
	this->Timestamp = 0.0f;
	this->Duration = 0.0f;
	this->RemainingTimePercent = FFloat_NetQuantize8{};
	this->State = ETimerState::Cleared;
}

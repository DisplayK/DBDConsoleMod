#include "K29RushMovementSpeedSetting.h"

FK29RushMovementSpeedSetting::FK29RushMovementSpeedSetting()
{
	this->InUse = false;
	this->SpeedCurve = NULL;
	this->PitchTurnRateMultiplier = FDBDTunableRowHandle{};
	this->YawTurnRateLimit = FDBDTunableRowHandle{};
	this->YawTurnRateMultiplier = FDBDTunableRowHandle{};
	this->Duration = FTunableStat{};
	this->IsMovementAllowed = false;
}

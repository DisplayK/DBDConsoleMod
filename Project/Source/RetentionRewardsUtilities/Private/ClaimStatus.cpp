#include "ClaimStatus.h"

FClaimStatus::FClaimStatus()
{
	this->isSet = false;
	this->LastClaimedIndex = 0;
	this->NextClaimTime = FDateTime{};
}

#include "ClaimableInboxMessageData.h"

FClaimableInboxMessageData::FClaimableInboxMessageData()
{
	this->Type = EClaimableInboxMessageType::None;
	this->Amount = 0;
	this->Id = TEXT("");
}

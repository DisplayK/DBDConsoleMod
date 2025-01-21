#include "ClaimableInboxMessage.h"

FClaimableInboxMessage::FClaimableInboxMessage()
{
	this->Data = TArray<FClaimableInboxMessageData>();
	this->State = EClaimableInboxMessageState::NONE;
}

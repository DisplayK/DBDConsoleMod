#include "InboxMessageData.h"

FInboxMessageData::FInboxMessageData()
{
	this->Id = 0;
	this->Origin = TEXT("");
	this->RecipientId = TEXT("");
	this->ReceivedTimestamp = 0;
	this->Subject = TEXT("");
	this->Body = TEXT("");
	this->Claimable = TArray<FClaimableInboxMessageData>();
	this->AreRewardsClaimed = false;
	this->IsRead = false;
	this->ExpireTimestamp = 0;
}

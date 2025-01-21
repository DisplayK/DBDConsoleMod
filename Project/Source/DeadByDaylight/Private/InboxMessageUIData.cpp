#include "InboxMessageUIData.h"

FInboxMessageUIData::FInboxMessageUIData()
{
	this->MessageId = TEXT("");
	this->ReceivedTime = FDateTime{};
	this->MessageType = EInboxMessageUIType::None;
	this->MessageTitle = TEXT("");
	this->MessageBody = TEXT("");
	this->MessageState = EInboxMessageUIState::New;
	this->AttachedClaimable = FClaimableInboxMessage{};
}

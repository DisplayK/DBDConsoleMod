#include "ActionOnFriend.h"

FActionOnFriend::FActionOnFriend()
{
	this->ActionToProceed = EActionOnFriendType::None;
	this->AtlantaFriendDataToUpdate = FAtlantaFriendUIData{};
	this->ActionOwner = NULL;
}

#include "FriendStatusUIData.h"

FFriendStatusUIData::FFriendStatusUIData()
{
	this->FriendStatus = EAtlantaFriendUIStatus::Undefined;
	this->StatusIcon = NULL;
	this->StatusText = FText::GetEmpty();
}

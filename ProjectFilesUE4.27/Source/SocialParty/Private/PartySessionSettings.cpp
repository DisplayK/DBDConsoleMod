#include "PartySessionSettings.h"

FPartySessionSettings::FPartySessionSettings()
{
	this->_sessionId = TEXT("");
	this->_gameSessionInfos = TMap<FString, FString>();
	this->_owningUserId = TEXT("");
	this->_owningUserName = TEXT("");
	this->_isDedicated = false;
	this->_matchmakingTimestamp = 0;
}

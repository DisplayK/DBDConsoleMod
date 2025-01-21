#include "SocialPartyState.h"

FSocialPartyState::FSocialPartyState()
{
	this->_customGamePresetData = FCustomGamePresetData{};
	this->_partySessionSettings = FPartySessionSettings{};
	this->_partyMatchmakingSettings = FPartyMatchmakingSettings{};
	this->_playerJoinOrder = TArray<FName>();
	this->_playerChatIndices = TMap<FName, uint8>();
	this->_gameType = 0;
	this->_isCrowdPlay = false;
	this->_isUsingDedicatedServer = false;
	this->_version = TEXT("");
	this->_lastUpdatedTime = 0;
	this->_lastSentTime = 0;
}

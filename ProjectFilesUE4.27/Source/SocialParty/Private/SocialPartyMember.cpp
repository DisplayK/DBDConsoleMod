#include "SocialPartyMember.h"

FSocialPartyMember::FSocialPartyMember()
{
	this->_playerCustomization = FEquippedPlayerCustomization{};
	this->_playerName = TEXT("");
	this->_platformSessionId = TEXT("");
	this->_uniquePlayerId = TEXT("");
	this->_playerRank = 0;
	this->_characterLevel = 0;
	this->_prestigeLevel = 0;
	this->_gameRole = 0;
	this->_characterId = 0;
	this->_powerId = NAME_None;
	this->_location = 0;
	this->_queueDelayIteration = 0;
	this->_ready = false;
	this->_crossplayAllowed = false;
	this->_playerPlatform = TEXT("");
	this->_playerProvider = TEXT("");
	this->_matchId = TEXT("");
	this->_postMatchmakingRole = EPartyPostMatchmakingRole::None;
	this->_postMatchmakingState = EPartyPostMatchmakingState::None;
	this->_roleRequested = 0;
	this->_anonymousSuffix = 0;
	this->_isStateInitialized = false;
	this->_disconnectionPenaltyEndOfBan = 0;
}

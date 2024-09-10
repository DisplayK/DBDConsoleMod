#include "PartyMatchmakingSettings.h"

FPartyMatchmakingSettings::FPartyMatchmakingSettings()
{
	this->_playerIds = TArray<FString>();
	this->_matchmakingState = EMatchmakingState::None;
	this->_startMatchmakingDateTimestamp = 0;
	this->_matchIncentive = 0;
	this->_isInFinalCountdown = false;
	this->_postMatchmakingTransitionId = 0;
}

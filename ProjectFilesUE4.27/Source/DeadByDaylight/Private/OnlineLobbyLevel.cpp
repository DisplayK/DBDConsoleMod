#include "OnlineLobbyLevel.h"

AOnlineLobbyLevel::AOnlineLobbyLevel()
{
	this->ProceduralGenerationData = NULL;
	this->_onlineLobbySlasherPOVTrackerOffsets = TArray<FVector>();
	this->_onlineLobbyCamperDisplayStands = TArray<TWeakObjectPtr<ADisplayStand>>();
	this->_onlineLobbySlasherDisplayStands = TArray<TWeakObjectPtr<ADisplayStand>>();
}

#include "LobbyLevel.h"

void ALobbyLevel::OnShopSubLevelLoaded()
{

}

void ALobbyLevel::OnLobbySubLevelLoaded()
{

}

void ALobbyLevel::OnAdditionalSubLevelsLoaded()
{

}

ALobbyLevel::ALobbyLevel()
{
	this->_registeredDisplayStands = TArray<ADisplayStand*>();
	this->LobbyLoadedEvent = EWorldFlowEvent::None;
}

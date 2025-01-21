#include "LobbyControllerSubsystem.h"

ULobbyControllerSubsystem::ULobbyControllerSubsystem()
{
	this->_localPlayerDisplayStandController = NULL;
	this->_displayStandControllers = TMap<FString, ULobbyDisplayStandController*>();
}

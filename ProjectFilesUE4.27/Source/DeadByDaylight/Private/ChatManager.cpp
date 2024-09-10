#include "ChatManager.h"

void AChatManager::Multicast_DisplayMessage_Implementation(const FString& chatIdentifier, int32 playerIndex, const FString& mirrorsId, const FString& msg)
{

}

AChatManager::AChatManager()
{
	this->_gameInstance = NULL;
}

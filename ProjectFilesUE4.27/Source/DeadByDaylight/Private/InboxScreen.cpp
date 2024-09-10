#include "InboxScreen.h"

UInboxScreen::UInboxScreen()
{
	this->_umgScreen = NULL;
	this->_newsMessages = TArray<FInboxMessageUIData>();
	this->_rewardsMessages = TArray<FInboxMessageUIData>();
	this->_socialMessages = TArray<FInboxMessageUIData>();
}

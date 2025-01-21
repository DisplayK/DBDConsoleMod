#include "DBDMenuGameState.h"
#include "MenuForcedLODHandler.h"

ADBDMenuGameState::ADBDMenuGameState()
{
	this->_menuForcedLODHandler = CreateDefaultSubobject<UMenuForcedLODHandler>(TEXT("MenuForcedLODHandler"));
}

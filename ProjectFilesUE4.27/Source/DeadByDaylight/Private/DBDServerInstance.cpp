#include "DBDServerInstance.h"

UDBDServerInstance::UDBDServerInstance()
{
	this->_pendingSessionUpdates = TArray<UDBDHostSettingsParamsBase*>();
	this->_gameInstance = NULL;
}

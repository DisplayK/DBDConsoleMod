#include "DBDAuthentication.h"

UDBDAuthentication::UDBDAuthentication()
{
	this->_localInfos = TArray<FAuthenticationInfo>();
	this->_remoteInfos = TArray<FAuthenticationInfo>();
	this->_gameInstance = NULL;
}

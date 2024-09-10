#include "DBDPersistentData.h"

UDBDPersistentData::UDBDPersistentData()
{
	this->_keepDataIDs = TArray<FString>();
	this->_playerIdToPersistentDataMap = TMap<FString, FPlayerPersistentData>();
	this->_cloudInventory = TArray<FCloudInventoryItem>();
}

#include "BloodwebManager.h"
#include "BloodwebGenerator.h"

class UDBDGameInstance;
class UDBDDesignTunables;

void UBloodwebManager::Init(UDBDGameInstance* gameInstance, UDBDDesignTunables* tunables)
{

}

UBloodwebManager::UBloodwebManager()
{
	this->_bloodwebBuilderClass = UBloodwebGenerator::StaticClass();
	this->_gameInstance = NULL;
	this->_designTunables = NULL;
	this->_bloodWebContentAdapter = NULL;
	this->_bloodwebHandler = NULL;
}

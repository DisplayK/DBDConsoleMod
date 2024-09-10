#include "ZombiesPatrolAreaManager.h"

UZombiesPatrolAreaManager::UZombiesPatrolAreaManager()
{
	this->_availablePatrolAreas = TArray<AMeatHook*>();
	this->_usedPatrolAreas = TArray<AMeatHook*>();
	this->_maxDistanceBetweenMeatHookAndPlayers = 0.000000;
}

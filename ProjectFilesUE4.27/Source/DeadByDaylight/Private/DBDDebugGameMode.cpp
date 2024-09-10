#include "DBDDebugGameMode.h"

ADBDDebugGameMode::ADBDDebugGameMode()
{
	this->LoadoutIndex = TMap<ADBDPlayerController*, int32>();
	this->PlayersWithItems = TSet<ADBDPlayer*>();
	this->CamperPawnOverrides = TArray<FCamperLoadout>();
	this->SlasherPawnOverrides = TArray<FSlasherLoadout>();
	this->_questObjectives = TArray<FDebugQuestModelExtArchiveObjective>();
}

#include "DBDEmblem_KillerMalicious.h"

void UDBDEmblem_KillerMalicious::OnLevelReadyToPlay()
{

}

UDBDEmblem_KillerMalicious::UDBDEmblem_KillerMalicious()
{
	this->_remainingSurvivorHookStates = TMap<ACamperPlayer*, int32>();
}

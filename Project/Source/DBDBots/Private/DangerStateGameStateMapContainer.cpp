#include "DangerStateGameStateMapContainer.h"

FDangerStateGameStateMapContainer::FDangerStateGameStateMapContainer()
{
	this->Map = TMap<EAIDangerState, EAIGameState>();
}

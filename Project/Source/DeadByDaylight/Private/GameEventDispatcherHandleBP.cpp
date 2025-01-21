#include "GameEventDispatcherHandleBP.h"

FGameEventDispatcherHandleBP::FGameEventDispatcherHandleBP()
{
	this->Filter = FGameplayTag{};
	this->GameEventDelegate = FGameEventDelegate();
}

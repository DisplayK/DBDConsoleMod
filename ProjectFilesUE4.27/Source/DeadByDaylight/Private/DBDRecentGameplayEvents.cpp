#include "DBDRecentGameplayEvents.h"

FDBDRecentGameplayEvents::FDBDRecentGameplayEvents()
{
	this->_recentGameplayEvents = TMap<EDBDScoreTypes, FDateTime>();
}

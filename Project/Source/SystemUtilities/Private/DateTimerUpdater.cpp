#include "DateTimerUpdater.h"

UDateTimerUpdater::UDateTimerUpdater()
{
	this->_timers = TMap<TSubclassOf<UDateTimeProvider>, FDateTimerArray>();
	this->_dateTimeProvider = TMap<TSubclassOf<UDateTimeProvider>, UDateTimeProvider*>();
}

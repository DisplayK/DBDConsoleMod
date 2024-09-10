#include "ReturnTheFavorQEEvaluator.h"

UReturnTheFavorQEEvaluator::UReturnTheFavorQEEvaluator()
{
	this->_favorToReturnEvents = TSet<FGameplayTag>();
	this->_instigatorList = TSet<TWeakObjectPtr<ADBDPlayer>>();
}

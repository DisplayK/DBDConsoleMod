#include "InteractionArray.h"

FInteractionArray::FInteractionArray()
{
	this->_interactions = TArray<TWeakObjectPtr<UInteractionDefinition>>();
}

#include "PrimitiveCollection.h"

class UPrimitiveComponent;

void UPrimitiveCollection::Remove(UPrimitiveComponent* primitive)
{

}

void UPrimitiveCollection::Add(UPrimitiveComponent* primitive)
{

}

UPrimitiveCollection::UPrimitiveCollection()
{
	this->_primitives = TSet<TWeakObjectPtr<UPrimitiveComponent>>();
}

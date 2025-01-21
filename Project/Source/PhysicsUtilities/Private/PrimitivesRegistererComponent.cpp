#include "PrimitivesRegistererComponent.h"

class UPrimitiveComponent;

void UPrimitivesRegistererComponent::SetPrimitives(const TArray<UPrimitiveComponent*>& primitives)
{

}

UPrimitivesRegistererComponent::UPrimitivesRegistererComponent()
{
	this->_primitives = TArray<UPrimitiveComponent*>();
	this->_primitiveCollection = NULL;
}

#include "ClippableProviderComponent.h"

class UPrimitiveComponent;

void UClippableProviderComponent::SetIgnoredPrimitives(const TArray<UPrimitiveComponent*> ignoredPrimitives)
{

}

void UClippableProviderComponent::AddIgnoredPrimitives(const TArray<UPrimitiveComponent*>& ignoredPrimitives)
{

}

UClippableProviderComponent::UClippableProviderComponent()
{
	this->_ignoredPrimitives = TSet<UPrimitiveComponent*>();
}

#include "DBDProjectileMovementComponent.h"
#include "UObject/NoExportTypes.h"

class UPrimitiveComponent;

FVector UDBDProjectileMovementComponent::GetPreviousLocation() const
{
	return FVector{};
}

void UDBDProjectileMovementComponent::AddComponentToSweep(UPrimitiveComponent* component)
{

}

UDBDProjectileMovementComponent::UDBDProjectileMovementComponent()
{
	this->_componentsToSweep = TArray<FComponentSweepInfo>();
	this->_cachedUpdatedComponent = NULL;
	this->_distanceTravelled = 0.000000;
	this->_hasMaximumDistance = false;
	this->_maximumTravelDistance = 0.000000;
}

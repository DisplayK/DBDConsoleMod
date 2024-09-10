#include "BaseGroundDetectorComponent.h"
#include "UObject/NoExportTypes.h"

class USkinnedMeshComponent;

void UBaseGroundDetectorComponent::InitSkinnedMeshComponent(USkinnedMeshComponent* mesh)
{

}

FVector UBaseGroundDetectorComponent::GetGroundPosition(const FVector targetPos, const FVector extraOffset)
{
	return FVector{};
}

UBaseGroundDetectorComponent::UBaseGroundDetectorComponent()
{
	this->_startTransformName = NAME_None;
	this->_walkableCollisionChannel = ECC_WorldStatic;
	this->_traceComplex = false;
	this->_extraTraceDistance = 30.000000;
	this->_skinnedMeshComponent = NULL;
	this->_startSlopeTransformName = NAME_None;
}

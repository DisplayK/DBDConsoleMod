#include "ScreenSpaceLocationComponent.h"
#include "UObject/NoExportTypes.h"

bool UScreenSpaceLocationComponent::HasValidPosition() const
{
	return false;
}

FVector2D UScreenSpaceLocationComponent::GetCurrentResolution() const
{
	return FVector2D{};
}

UScreenSpaceLocationComponent::UScreenSpaceLocationComponent()
{
	this->ScreenSpaceX = 0.000000;
	this->ScreenSpaceY = 0.000000;
	this->FrameDelay = 0;
	this->_previousTransforms = TArray<FTransform>();
}

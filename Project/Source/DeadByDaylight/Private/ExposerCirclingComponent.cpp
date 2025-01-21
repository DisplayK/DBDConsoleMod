#include "ExposerCirclingComponent.h"

void UExposerCirclingComponent::SetIsCircling(bool circling)
{

}

void UExposerCirclingComponent::Reset()
{

}

UExposerCirclingComponent::UExposerCirclingComponent()
{
	this->DirectionFollows = false;
	this->MinHeight = 0.000000;
	this->MaxHeight = 0.000000;
	this->MinRadius = 0.000000;
	this->MaxRadius = 0.000000;
	this->CirclingSpeed = 0.000000;
	this->DistanceBetweenPoints = 0.000000;
	this->BezierModifier = 0.000000;
	this->Samples = 0;
}

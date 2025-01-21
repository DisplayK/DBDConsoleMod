#include "HoudiniInputSplineComponent.h"

UHoudiniInputSplineComponent::UHoudiniInputSplineComponent()
{
	this->NumberOfSplineControlPoints = -1;
	this->SplineLength = -1.000000;
	this->SplineResolution = -1.000000;
	this->SplineClosed = false;
	this->SplineControlPoints = TArray<FTransform>();
}

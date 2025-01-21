#include "HoudiniInputHoudiniSplineComponent.h"

UHoudiniInputHoudiniSplineComponent::UHoudiniInputHoudiniSplineComponent()
{
	this->CurveType = EHoudiniCurveType::Invalid;
	this->CurveMethod = EHoudiniCurveMethod::Invalid;
	this->Reversed = false;
	this->CachedComponent = NULL;
}

#include "HoudiniSplineComponent.h"

UHoudiniSplineComponent::UHoudiniSplineComponent()
{
	this->CurvePoints = TArray<FTransform>();
	this->DisplayPoints = TArray<FVector>();
	this->DisplayPointIndexDivider = TArray<int32>();
	this->HoudiniSplineName = TEXT("");
	this->bClosed = false;
	this->bReversed = false;
	this->bIsHoudiniSplineVisible = true;
	this->CurveType = EHoudiniCurveType::Invalid;
	this->CurveMethod = EHoudiniCurveMethod::Invalid;
	this->bIsOutputCurve = false;
	this->bCookOnCurveChanged = true;
	this->bHasChanged = false;
	this->bNeedsToTriggerUpdate = false;
	this->bIsInputCurve = false;
	this->bIsEditableOutputCurve = false;
	this->NodeId = -1;
	this->PartName = TEXT("");
}

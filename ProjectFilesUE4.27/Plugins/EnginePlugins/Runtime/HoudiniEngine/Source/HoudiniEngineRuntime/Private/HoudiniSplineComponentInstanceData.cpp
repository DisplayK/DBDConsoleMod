#include "HoudiniSplineComponentInstanceData.h"

FHoudiniSplineComponentInstanceData::FHoudiniSplineComponentInstanceData()
{
	this->CurvePoints = TArray<FTransform>();
	this->DisplayPoints = TArray<FVector>();
	this->DisplayPointIndexDivider = TArray<int32>();
}

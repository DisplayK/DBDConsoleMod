#include "HoudiniCurveOutputProperties.h"

FHoudiniCurveOutputProperties::FHoudiniCurveOutputProperties()
{
	this->CurveOutputType = EHoudiniCurveOutputType::UnrealSpline;
	this->NumPoints = 0;
	this->bClosed = false;
	this->CurveType = EHoudiniCurveType::Invalid;
	this->CurveMethod = EHoudiniCurveMethod::Invalid;
}

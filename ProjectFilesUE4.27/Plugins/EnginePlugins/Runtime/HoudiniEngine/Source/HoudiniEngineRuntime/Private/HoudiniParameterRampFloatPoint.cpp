#include "HoudiniParameterRampFloatPoint.h"

UHoudiniParameterRampFloatPoint::UHoudiniParameterRampFloatPoint()
{
	this->Position = 0.000000;
	this->Value = 0.000000;
	this->Interpolation = EHoudiniRampInterpolationType::InValid;
	this->InstanceIndex = -1;
	this->PositionParentParm = NULL;
	this->ValueParentParm = NULL;
	this->InterpolationParentParm = NULL;
}

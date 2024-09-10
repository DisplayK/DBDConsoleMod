#include "HoudiniParameterRampModificationEvent.h"

UHoudiniParameterRampModificationEvent::UHoudiniParameterRampModificationEvent()
{
	this->bIsInsertEvent = false;
	this->bIsFloatRamp = false;
	this->DeleteInstanceIndex = -1;
	this->InsertPosition = 0.000000;
	this->InsertFloat = 0.000000;
	this->InsertInterpolation = EHoudiniRampInterpolationType::InValid;
}

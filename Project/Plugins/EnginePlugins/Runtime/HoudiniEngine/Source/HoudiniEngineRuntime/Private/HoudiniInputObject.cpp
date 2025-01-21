#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject()
{
	this->InputObject = NULL;
	this->Type = EHoudiniInputObjectType::Invalid;
	this->InputNodeId = -1;
	this->InputObjectNodeId = -1;
	this->bHasChanged = false;
	this->bNeedsToTriggerUpdate = false;
	this->bTransformChanged = false;
	this->bImportAsReference = false;
	this->bCanDeleteHoudiniNodes = true;
}

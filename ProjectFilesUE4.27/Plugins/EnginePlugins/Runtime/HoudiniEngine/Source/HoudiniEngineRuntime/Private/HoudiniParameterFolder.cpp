#include "HoudiniParameterFolder.h"

UHoudiniParameterFolder::UHoudiniParameterFolder()
{
	this->FolderType = EHoudiniFolderParameterType::Invalid;
	this->bExpanded = true;
	this->bChosen = false;
	this->ChildCounter = 0;
	this->bIsContentShown = false;
}

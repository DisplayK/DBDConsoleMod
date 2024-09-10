#include "DBDCullDistanceVolumeComponent.h"

UDBDCullDistanceVolumeComponent::UDBDCullDistanceVolumeComponent()
{
	this->CullDistances = TArray<FDBDCullDistanceSizePair>();
	this->Enabled = true;
	this->Unbound = false;
	this->_previewInfluenceBox = NULL;
}

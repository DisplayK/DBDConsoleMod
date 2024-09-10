#include "VisibilitySettings.h"

FVisibilitySettings::FVisibilitySettings()
{
	this->UseVisibilityWeightsInReducer = false;
	this->UseVisibilityWeightsInTexcoordGenerator = false;
	this->VisibilityWeightsPower = 0.0f;
	this->CullOccludedGeometry = false;
	this->ForceVisibilityCalculation = false;
	this->UseBackfaceCulling = false;
	this->CameraSelectionSetID = 0;
	this->CameraSelectionSetName = TEXT("");
	this->OccluderSelectionSetID = 0;
	this->OccluderSelectionSetName = TEXT("");
	this->FillNonVisibleAreaThreshold = 0.0f;
	this->RemoveTrianglesNotOccludingOtherTriangles = false;
	this->ConservativeMode = false;
	this->ComputeVisibilityMode = EComputeVisibilityMode::DirectX;
}

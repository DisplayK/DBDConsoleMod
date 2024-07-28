#include "BillboardCloudSettings.h"

FBillboardCloudSettings::FBillboardCloudSettings()
{
	this->BillboardMode = EBillboardMode::OuterShell;
	this->FavorVerticalPlanes = false;
	this->TwoSided = false;
	this->UseVisibilityWeights = false;
	this->BillboardDensity = 0.0f;
	this->MaxPlaneCount = 0;
	this->GeometricComplexity = 0.0f;
	this->UpVector = FVector{};
	this->FoliageSettings = FFoliageSettings{};
}

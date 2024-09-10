#include "GeometryCullingSettings.h"

FGeometryCullingSettings::FGeometryCullingSettings()
{
	this->UseClippingPlanes = false;
	this->ClippingPlaneSelectionSetID = 0;
	this->ClippingPlaneSelectionSetName = TEXT("");
	this->UseClippingGeometry = false;
	this->ClippingGeometrySelectionSetID = 0;
	this->ClippingGeometrySelectionSetName = TEXT("");
}

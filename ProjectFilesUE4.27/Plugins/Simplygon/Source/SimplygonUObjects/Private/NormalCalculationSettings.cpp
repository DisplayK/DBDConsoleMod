#include "NormalCalculationSettings.h"

FNormalCalculationSettings::FNormalCalculationSettings()
{
	this->ReplaceNormals = false;
	this->ReplaceTangents = false;
	this->HardEdgeAngle = 0.0f;
	this->RepairInvalidNormals = false;
	this->ReorthogonalizeTangentSpace = false;
	this->ScaleByArea = false;
	this->ScaleByAngle = false;
	this->SnapNormalsToFlatSurfaces = false;
}

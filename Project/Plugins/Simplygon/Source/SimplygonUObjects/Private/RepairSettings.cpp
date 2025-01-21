#include "RepairSettings.h"

FRepairSettings::FRepairSettings()
{
	this->UseTJunctionRemover = false;
	this->TJuncDist = 0.0f;
	this->WeldDist = 0.0f;
	this->WeldOnlyBorderVertices = false;
	this->WeldOnlyWithinMaterial = false;
	this->WeldOnlyWithinSceneNode = false;
	this->WeldOnlyBetweenSceneNodes = false;
	this->UseWelding = false;
	this->ProgressivePasses = 0;
}

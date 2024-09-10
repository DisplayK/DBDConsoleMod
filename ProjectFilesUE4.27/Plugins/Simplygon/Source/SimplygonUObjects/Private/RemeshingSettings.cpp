#include "RemeshingSettings.h"

FRemeshingSettings::FRemeshingSettings()
{
	this->RemeshingModeManualPositionZ = 0.0f;
	this->RemeshingModeManualPositionY = 0.0f;
	this->RemeshingModeManualPositionX = 0.0f;
	this->OnScreenSize = 0;
	this->HoleFilling = EHoleFilling::Disabled;
	this->RemeshingMode = ERemeshingMode::Outside;
	this->SurfaceTransferMode = ESurfaceTransferMode::Fast;
	this->HardEdgeAngle = 0.0f;
	this->ForceSoftEdgesWithinTextureCharts = false;
	this->TransferNormals = false;
	this->TransferColors = false;
	this->ProcessSelectionSetID = 0;
	this->ProcessSelectionSetName = TEXT("");
	this->KeepUnprocessedSceneMeshes = false;
}

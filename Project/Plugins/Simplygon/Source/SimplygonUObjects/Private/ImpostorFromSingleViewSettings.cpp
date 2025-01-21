#include "ImpostorFromSingleViewSettings.h"

FImpostorFromSingleViewSettings::FImpostorFromSingleViewSettings()
{
	this->UseTightFitting = false;
	this->TightFittingDepthOffset = 0.0f;
	this->TwoSided = false;
	this->ViewDirection = FVector{};
	this->TexCoordPadding = 0.0f;
}

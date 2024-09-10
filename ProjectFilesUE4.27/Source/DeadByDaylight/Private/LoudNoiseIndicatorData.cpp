#include "LoudNoiseIndicatorData.h"

FLoudNoiseIndicatorData::FLoudNoiseIndicatorData()
{
	this->MeshMask = NULL;
	this->DistortionMesh = NULL;
	this->Location = FVector{};
	this->RemainingTime = 0.0f;
}

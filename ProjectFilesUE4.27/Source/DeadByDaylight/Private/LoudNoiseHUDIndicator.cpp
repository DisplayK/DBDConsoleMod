#include "LoudNoiseHUDIndicator.h"
#include "UObject/NoExportTypes.h"

void ULoudNoiseHUDIndicator::AddTrackedNoise(FVector location, float duration)
{

}

ULoudNoiseHUDIndicator::ULoudNoiseHUDIndicator()
{
	this->MaskMesh = NULL;
	this->DistortionMesh = NULL;
	this->EdgePadding = 0.000000;
	this->CornerRoundness = 0.000000;
	this->ScreenFadeOutDistance = 100.000000;
	this->_trackedNoises = TArray<FLoudNoiseIndicatorData>();
}

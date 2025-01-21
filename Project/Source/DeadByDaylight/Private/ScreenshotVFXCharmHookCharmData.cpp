#include "ScreenshotVFXCharmHookCharmData.h"

FScreenshotVFXCharmHookCharmData::FScreenshotVFXCharmHookCharmData()
{
	this->TargetSystem = NULL;
	this->VFXWarmupTime = 0.0f;
	this->TargetMaterial = NULL;
	this->MaterialScalarParameters = TMap<FName, float>();
}

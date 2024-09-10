#include "HitValidationGameConfig.h"

FHitValidationGameConfig::FHitValidationGameConfig()
{
	this->Enable = false;
	this->EnableCollisionCheck = false;
	this->Recorder = FHitValidationRecorder{};
	this->Validators = TArray<FHitValidationValidator>();
}

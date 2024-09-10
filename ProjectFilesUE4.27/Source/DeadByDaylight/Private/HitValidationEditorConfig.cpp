#include "HitValidationEditorConfig.h"

FHitValidationEditorConfig::FHitValidationEditorConfig()
{
	this->ConfigName = EHitValidatorConfigName::Default;
	this->CapsuleInflation = 0.0f;
	this->MaximumDistance = 0.0f;
}

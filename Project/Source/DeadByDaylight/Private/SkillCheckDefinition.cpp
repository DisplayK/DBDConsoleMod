#include "SkillCheckDefinition.h"

FSkillCheckDefinition::FSkillCheckDefinition()
{
	this->SuccessZoneStart = 0.0f;
	this->SuccessZoneEnd = 0.0f;
	this->BonusZoneLength = 0.0f;
	this->BonusZoneStart = 0.0f;
	this->ProgressRate = 0.0f;
	this->StartingTickerPosition = 0.0f;
	this->IsDeactivatedAfterResponse = false;
	this->WarningSoundDelay = 0.0f;
	this->IsAudioMuted = false;
	this->IsJittering = false;
	this->IsSuccessZoneMirrorred = false;
	this->IsInsane = false;
	this->IsLocallyPredicted = false;
}

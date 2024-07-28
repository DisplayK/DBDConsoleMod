#include "CoreChallengeTrackerWidget.h"

UCoreChallengeTrackerWidget::UCoreChallengeTrackerWidget()
{
	this->OpenSfx = NULL;
	this->CloseSfx = NULL;
	this->ProgressionSfx = NULL;
	this->CompleteSfx = NULL;
	this->ProgressionAudioRTPC = TEXT("AudioRTPC_HUD_ChallengeTracker_PercentageCompletion");
}

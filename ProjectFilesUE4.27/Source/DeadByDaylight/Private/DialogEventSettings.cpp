#include "DialogEventSettings.h"

FDialogEventSettings::FDialogEventSettings()
{
	this->GameEventTrigger = FGameplayTag{};
	this->Clips = TArray<FDialogClipSettings>();
	this->OverrideCurrentAudio = false;
	this->DelayUntilPlay = 0.0f;
	this->PlayProbability = 0.0f;
}

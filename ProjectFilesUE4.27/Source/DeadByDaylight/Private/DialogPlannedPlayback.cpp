#include "DialogPlannedPlayback.h"

FDialogPlannedPlayback::FDialogPlannedPlayback()
{
	this->PlannedClip = TArray<FAkEventWithSubtitle>();
	this->GameEventTrigger = FGameplayTag{};
	this->IsDeletingAfterTrigger = false;
}

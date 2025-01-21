#include "K26SurvivorStatus.h"

FK26SurvivorStatus::FK26SurvivorStatus()
{
	this->IsPowerAttached = false;
	this->IsAttachementAuraOn = false;
	this->LastAttachmentTime = 0.0f;
	this->LastDetachmentTime = 0.0f;
	this->LastRemovalStarted = 0.0f;
	this->LastRemovalStopped = 0.0f;
	this->LastHitTime = 0.0f;
	this->StatusIndicator = NULL;
	this->OwningSurvivor = NULL;
	this->K26KillerInstinctStatusEffect = NULL;
	this->IdleCrowsBeingTouched = TArray<AActor*>();
	this->KillerInstinctTimeHandler = FTimerHandle{};
}

#include "AITrailEvent.h"

FAITrailEvent::FAITrailEvent()
{
	this->Location = FVector{};
	this->StartTime = 0.0f;
	this->EndTime = 0.0f;
	this->Instigator = NULL;
	this->IgnoreOnPerkTag = FGameplayTag{};
	this->TeamIdentifier = FGenericTeamId{};
}

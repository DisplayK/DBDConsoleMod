#include "RitualEvent.h"

FRitualEvent::FRitualEvent()
{
	this->ScoreType = EDBDScoreTypes::DBDCamperScore_SurviveHealthy;
	this->GameEventType = FGameplayTag{};
	this->Amount = 0.0f;
	this->Instigator = NULL;
	this->InstigatorPlayerState = NULL;
	this->Target = NULL;
}

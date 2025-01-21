#include "StatusEffectSpawnData.h"

FStatusEffectSpawnData::FStatusEffectSpawnData()
{
	this->DEPRECATED_EffectId = TEXT("");
	this->EffectClass = NULL;
	this->CustomParam = 0.0f;
	this->ReceiverStrategy = EStatusEffectSpawnerReceiverStrategy::AllCharacter;
	this->PawnType = EPawnType::VE_None;
	this->SkipOriginatingPlayer = false;
}

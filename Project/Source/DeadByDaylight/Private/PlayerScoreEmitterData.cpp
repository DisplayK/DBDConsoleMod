#include "PlayerScoreEmitterData.h"

FPlayerScoreEmitterData::FPlayerScoreEmitterData()
{
	this->PawnSemanticTags = FGameplayTagQuery{};
	this->Emitter = NULL;
}

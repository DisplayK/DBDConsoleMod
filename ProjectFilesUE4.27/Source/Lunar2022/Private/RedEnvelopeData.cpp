#include "RedEnvelopeData.h"

FRedEnvelopeData::FRedEnvelopeData()
{
	this->RedEnvelopeState = ERedEnvelopeState::AuraVisibleToOwner;
	this->LastInteractingPlayer = NULL;
	this->IsJackpot = false;
}

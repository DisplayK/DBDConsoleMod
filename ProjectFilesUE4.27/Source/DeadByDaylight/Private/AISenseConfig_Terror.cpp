#include "AISenseConfig_Terror.h"

UAISenseConfig_Terror::UAISenseConfig_Terror()
{
	this->Implementation = NULL;
	this->MaxBreathingSoundRange = 800.000000;
	this->TerrorRanges = TMap<EAITerrorLevel, float>();
}

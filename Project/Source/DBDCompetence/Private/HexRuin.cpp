#include "HexRuin.h"

float UHexRuin::GetRegressionModifierByLevel(int32 perkLevel) const
{
	return 0.0f;
}

void UHexRuin::Authority_SetupCurseOnAllGenerators()
{

}

UHexRuin::UHexRuin()
{
	this->_curseActivationTimers = TMap<AGenerator*, FFastTimer>();
	this->_regressionModifier = 0.000000;
	this->_gameplayModifierHandles = TMap<AGenerator*, uint64>();
}

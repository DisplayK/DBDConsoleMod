#include "KindredPerk.h"

UKindredPerk::UKindredPerk()
{
	this->_killerAuraRevealRange = TArray<float>();
	this->_kindredRevealKillerOther = NULL;
	this->_kindredRevealKillerOwner = NULL;
	this->_kindredRevealSurvivors = NULL;
}

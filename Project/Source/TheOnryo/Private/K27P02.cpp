#include "K27P02.h"

class AGenerator;

void UK27P02::Multicast_ShowBubbleNotification_Implementation(AGenerator* triggeringGenerator)
{

}

void UK27P02::Multicast_AddGeneratorAura_Implementation(AGenerator* generator)
{

}

UK27P02::UK27P02()
{
	this->_activePerkDuration = 0.000000;
	this->_regressionModifier = 0.000000;
	this->_authority_affectedGeneratorsAndActiveTimers = TMap<AGenerator*, FFastTimer>();
	this->_gameplayModifierHandles = TMap<AGenerator*, uint64>();
}

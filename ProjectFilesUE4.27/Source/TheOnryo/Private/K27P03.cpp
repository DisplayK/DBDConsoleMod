#include "K27P03.h"

class AGenerator;

void UK27P03::Multicast_HighlightBlockedGeneratorForKiller_Implementation(AGenerator* generator)
{

}

UK27P03::UK27P03()
{
	this->_generatorProgressionActivation = 0.000000;
	this->_generatorBlockedDuration = 0.000000;
	this->_authority_blockedGeneratorsAndTimeToUnblock = TMap<TWeakObjectPtr<AGenerator>, FFastTimer>();
	this->_authority_affectedRepairersAndTheirGenerators = TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<AGenerator>>();
}

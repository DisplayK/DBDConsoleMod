#include "K25P01.h"
#include "Net/UnrealNetwork.h"

class AGenerator;

void UK25P01::OnRep_GeneratorsBlocked()
{

}

void UK25P01::Authority_OnBlockTimerDone(AGenerator* generator)
{

}

void UK25P01::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK25P01, _generatorsBlocked);
}

UK25P01::UK25P01()
{
	this->_generatorBlockDuration = 0.000000;
	this->_auraRevealDuration = 0.000000;
	this->_allowPerkToBlockZeroProgressionGenerators = false;
	this->_generatorBlockingTimers = TArray<FFastTimer>();
	this->_generatorsBlocked = TArray<AGenerator*>();
	this->_local_generatorsBlocked = TArray<AGenerator*>();
}

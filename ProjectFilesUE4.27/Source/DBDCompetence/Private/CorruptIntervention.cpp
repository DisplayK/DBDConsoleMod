#include "CorruptIntervention.h"
#include "Net/UnrealNetwork.h"

void UCorruptIntervention::OnRep_BlockedGenerators()
{

}

void UCorruptIntervention::LevelReadyToBlockedGenerators()
{

}

float UCorruptIntervention::GetGeneratorBlockDuration() const
{
	return 0.0f;
}

void UCorruptIntervention::Authority_TryActivatePerk()
{

}

void UCorruptIntervention::Authority_OnLevelReadyToPlay()
{

}

void UCorruptIntervention::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCorruptIntervention, _blockedGenerators);
}

UCorruptIntervention::UCorruptIntervention()
{
	this->_blockedGeneratorCount = 0;
	this->_generatorBlockDuration = 0.000000;
	this->_blockedGenerators = TArray<AGenerator*>();
}

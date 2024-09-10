#include "DejaVu.h"
#include "Net/UnrealNetwork.h"

void UDejaVu::OnRep_RevealedGenerators()
{

}

void UDejaVu::LevelReadyToRevealOutlineGenerators()
{

}

void UDejaVu::Authority_TryActivatePerk()
{

}

void UDejaVu::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDejaVu, _revealedGenerators);
}

UDejaVu::UDejaVu()
{
	this->_numGeneratorsToReveal = 3;
	this->_perkEffectDurations = 0.000000;
	this->_actionSpeeds = 0.000000;
	this->_revealedGenerators = TArray<AGenerator*>();
}

#include "BlastMineFirecracker.h"
#include "Net/UnrealNetwork.h"
#include "SimpleStateMachine.h"
#include "BlastMineVisibilityController.h"
#include "BlastMineKickSensor.h"

void ABlastMineFirecracker::OnRep_Lifetime()
{

}

void ABlastMineFirecracker::OnRep_AuthorityExplosionCount()
{

}

void ABlastMineFirecracker::OnRep_AuthorityCurrentState()
{

}

void ABlastMineFirecracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABlastMineFirecracker, _lifetime);
	DOREPLIFETIME(ABlastMineFirecracker, _authority_ExplosionCount);
	DOREPLIFETIME(ABlastMineFirecracker, _authority_CurrentState);
}

ABlastMineFirecracker::ABlastMineFirecracker()
{
	this->_trappedGenerator = NULL;
	this->_stateMachine = CreateDefaultSubobject<USimpleStateMachine>(TEXT("State Machine"));
	this->_kickSensor = CreateDefaultSubobject<UBlastMineKickSensor>(TEXT("Kick Explosion Triggerer"));
	this->_visibilityController = CreateDefaultSubobject<UBlastMineVisibilityController>(TEXT("Visibility Controller"));
	this->_lifetime = -1.000000;
	this->_authority_ExplosionCount = 0;
	this->_authority_CurrentState = NAME_None;
}

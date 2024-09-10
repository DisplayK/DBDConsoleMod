#include "KnightGuard.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "AnimationMontageSlave.h"
#include "GuardAttackableComponent.h"
#include "EGuardHuntEndReason.h"

class ADBDPlayer;
class ASlasherPlayer;
class UGuardPatrolComponent;

void AKnightGuard::OnRep_OwningKiller()
{

}

void AKnightGuard::OnRep_IsActive(bool previousIsActive)
{

}

void AKnightGuard::Multicast_OnPatrolEnded_Implementation(ADBDPlayer* foundSurvivor)
{

}

void AKnightGuard::Multicast_OnOrderEnded_Implementation()
{

}

void AKnightGuard::Multicast_CosmeticHuntEnded_Implementation(EGuardHuntEndReason reason)
{

}

UGuardPatrolComponent* AKnightGuard::GetPatrolComponent() const
{
	return NULL;
}

ASlasherPlayer* AKnightGuard::GetOwningKiller() const
{
	return NULL;
}

void AKnightGuard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AKnightGuard, _isActive);
	DOREPLIFETIME(AKnightGuard, _owningKiller);
	DOREPLIFETIME(AKnightGuard, _guardFlag);
	DOREPLIFETIME(AKnightGuard, _huntComponent);
	DOREPLIFETIME(AKnightGuard, _patrolComponent);
}

AKnightGuard::AKnightGuard()
{
	this->_attackZonePivot = NULL;
	this->_guardNoiseEventTimeInterval = 0.500000;
	this->_guardNoiseEventRange = 1600.000000;
	this->_isActive = false;
	this->_owningKiller = NULL;
	this->_killerPower = NULL;
	this->_flagClass = NULL;
	this->_guardFlag = NULL;
	this->_attackComponentClass = NULL;
	this->_attackComponent = NULL;
	this->_attackableComponent = CreateDefaultSubobject<UGuardAttackableComponent>(TEXT("GuardAttackableComp"));
	this->_attackableCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AttackableCapsule"));
	this->_huntComponentClass = NULL;
	this->_huntComponent = NULL;
	this->_patrolComponentClass = NULL;
	this->_patrolComponent = NULL;
	this->_controllerClass = NULL;
	this->_animationFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("AnimationMontageSlave"));
	this->_guardAnimTag = NAME_None;
	this->_overlappingSurvivorsAndVaults = TSet<AActor*>();
}

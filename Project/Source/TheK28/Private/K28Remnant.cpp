#include "K28Remnant.h"
#include "UObject/NoExportTypes.h"
#include "Components/CapsuleComponent.h"
#include "DBDOutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "MontagePlayer.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "AnimationMontageSlave.h"
#include "K28RemnantOutlineUpdateStrategy.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class UPrimitiveComponent;
class ASlasherPlayer;
class ACamperPlayer;
class AActor;

void AK28Remnant::OnRep_RemnantState()
{

}

void AK28Remnant::Multicast_TriggerTeleportStart_Implementation(ASlasherPlayer* killer)
{

}

void AK28Remnant::Multicast_TeleportToRemnant_Implementation(ASlasherPlayer* killer, const FRotator& teleportRotation, bool isAnimationSlowed)
{

}

void AK28Remnant::Multicast_SurvivorDestroyedRemnant_Implementation(ACamperPlayer* survivor)
{

}

void AK28Remnant::Multicast_DeactivateRemnant_Implementation()
{

}

void AK28Remnant::Multicast_ActivateRemnant_Implementation(const FVector& location, const FRotator& rotation)
{

}

void AK28Remnant::Authority_OnCollisionDetected(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void AK28Remnant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK28Remnant, _remnantState);
}

AK28Remnant::AK28Remnant()
{
	this->_teleportToRemnantSpeedCurve_Normal = NULL;
	this->_teleportToRemnantSpeedCurve_Penalty = NULL;
	this->_skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
	this->_capsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
	this->_montageFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
	this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("AnimMontagePlayer"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("Outline Component"));
	this->_remnantOutlineStrategy = CreateDefaultSubobject<UK28RemnantOutlineUpdateStrategy>(TEXT("Outline Strategy"));
	this->_renmantDeactivationTime = 1.000000;
	this->_remnantDestructionTime = 1.000000;
	this->_remnantState = EK28RemnantState::Inactive;
	this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
}

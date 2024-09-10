#include "Snowman.h"
#include "Interactor.h"
#include "GameplayTagContainer.h"
#include "SnowmanSpawnData.h"
#include "GameEventData.h"
#include "Components/SkeletalMeshComponent.h"
#include "ESnowmanDestructionType.h"
#include "UObject/NoExportTypes.h"
#include "Components/SphereComponent.h"
#include "DBDOutlineComponent.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "BaseActorAttackableComponent.h"

class ASlasherPlayer;
class ADBDPlayer;
class ACamperPlayer;
class UPrimitiveComponent;
class AActor;

void ASnowman::OnRep_SnowmanState()
{

}

void ASnowman::OnRep_SnowmanDestructionType()
{

}

void ASnowman::OnRep_PlayerUsingSnowman()
{

}

void ASnowman::OnRep_IsMoving()
{

}

void ASnowman::OnRep_HighFiveFollower()
{

}

void ASnowman::OnFinishedPlaying(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void ASnowman::Multicast_StartSnowmanDestruction_Implementation(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller, ADBDPlayer* playerInSnowman)
{

}

void ASnowman::Multicast_SpawnSnowman_Implementation(FSnowmanSpawnData spawnData)
{

}

void ASnowman::Multicast_SetSnowmanMaterialVariant_Implementation(const int32 materialVariantIndex)
{

}

void ASnowman::Multicast_SetSnowmanHiddenInGame_Implementation(bool isHidden)
{

}

void ASnowman::Multicast_OnSnowmanStartBeingUsedBySurvivor_Implementation(ACamperPlayer* survivorUsingSnowman)
{

}

void ASnowman::Multicast_OnSnowmanStartBeingUsedByKiller_Implementation(ASlasherPlayer* killerUsingSnowman)
{

}

void ASnowman::Multicast_OnSnowmanStartBeingControlledBySurvivor_Implementation(ACamperPlayer* survivorUsingSnowman)
{

}

void ASnowman::Multicast_OnSnowmanStartBeingControlledByKiller_Implementation(ASlasherPlayer* killerUsingSnowman)
{

}

void ASnowman::Multicast_DrawDebugCollisionCheck_Implementation(FVector boxExtent, float debugLifetime) const
{

}

void ASnowman::Authority_OnSnowmanHandOverlapEnd(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void ASnowman::Authority_OnSnowmanHandOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void ASnowman::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASnowman, _snowmanState);
	DOREPLIFETIME(ASnowman, _snowmanDestructionType);
	DOREPLIFETIME(ASnowman, _playerUsingThisSnowman);
	DOREPLIFETIME(ASnowman, _isMoving);
	DOREPLIFETIME(ASnowman, _highFiveFollower);
}

ASnowman::ASnowman()
{
	this->_snowmanState = ESnowmanState::Idle;
	this->_snowmanDestructionType = ESnowmanDestructionType::None;
	this->_playerUsingThisSnowman = NULL;
	this->_snowmanSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SnowmanSkeletalMesh"));
	this->_snowmanOutlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("SnowmanOutlineComponent"));
	this->_snowmanCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SnowmanCapsule"));
	this->_snowmanHandCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SnowmanHandCapsule"));
	this->_hideInSnowmanInteractionChargeable = NULL;
	this->_snowmanInteractor = CreateDefaultSubobject<UInteractor>(TEXT("SnowmanInteractor"));
	this->_snowmanInteractionZone = CreateDefaultSubobject<USphereComponent>(TEXT("SnowmanInteractionZone"));
	this->_attackableComponent = CreateDefaultSubobject<UBaseActorAttackableComponent>(TEXT("AttackableComponent"));
	this->_isAcquiredFromPool = false;
	this->_isMoving = false;
	this->_highFiveFollower = NULL;
}

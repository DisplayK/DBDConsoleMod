#include "Locker.h"
#include "ECamperDamageState.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "MontagePlayer.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTagContainerComponent.h"
#include "AnimationMontageSlave.h"

class UInteractor;
class ACamperPlayer;
class UPrimitiveComponent;
class ADBDPlayer;
class AActor;

void ALocker::SetSurvivorInLocker(ACamperPlayer* survivor)
{

}

void ALocker::SetPlayerOpeningLocker(ADBDPlayer* player)
{

}

void ALocker::OnSurvivorHealthChanged(ECamperDamageState before, ECamperDamageState after)
{

}

void ALocker::OnSurvivorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason)
{

}

void ALocker::OnRep_PreventAllInteractions()
{

}

void ALocker::Multicast_EjectSurvivor_Implementation()
{

}

bool ALocker::Multicast_EjectSurvivor_Validate()
{
	return true;
}

bool ALocker::IsOccupied() const
{
	return false;
}

bool ALocker::IsFacingLocker(const ADBDPlayer* player, float toleranceDegreeAngle) const
{
	return false;
}

ACamperPlayer* ALocker::GetSurvivorInLocker() const
{
	return NULL;
}

UPrimitiveComponent* ALocker::GetStunZone_Implementation() const
{
	return NULL;
}

ADBDPlayer* ALocker::GetPlayerInLocker() const
{
	return NULL;
}

UGameplayTagContainerComponent* ALocker::GetObjectState() const
{
	return NULL;
}

UInteractor* ALocker::GetInteractor() const
{
	return NULL;
}

AActor* ALocker::GetChildInteractionActor() const
{
	return NULL;
}

void ALocker::Authority_ReportOpenLockerNoiseEventToAI(const bool fastActivation)
{

}

void ALocker::Authority_EnableOtherInteractors(const UInteractor* usableInteractor, bool usable)
{

}

void ALocker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ALocker, _preventAllInteractions);
	DOREPLIFETIME(ALocker, _spawnedLockerItem);
}

ALocker::ALocker()
{
	this->FastDoorActivationAudibleRange = 1600.000000;
	this->NormalDoorActivationAudibleRange = 800.000000;
	this->_boxComponent = NULL;
	this->_montageFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
	this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("AnimMontagePlayer"));
	this->_playerOpeningLocker = NULL;
	this->_playerInLocker = NULL;
	this->_mainInteractor = NULL;
	this->_frontInteractionZone = NULL;
	this->_searchEmpty = NULL;
	this->_searchPlayer = NULL;
	this->_killerInteractionActor = NULL;
	this->_lockerAnimInstance = NULL;
	this->_lockerObjectState = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("LockerObjectState"));
	this->_preventAllInteractions = false;
	this->_local_preventAllInteractions = false;
	this->_spawnedLockerItem = NULL;
	this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
}

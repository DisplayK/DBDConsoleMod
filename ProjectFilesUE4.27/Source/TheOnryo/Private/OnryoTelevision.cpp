#include "OnryoTelevision.h"
#include "LocalPlayerTrackerComponent.h"
#include "Net/UnrealNetwork.h"
#include "ETelevisionCosmeticState.h"
#include "MapActorComponent.h"
#include "TelevisionOutlineUpdateStrategy.h"
#include "OnryoTVAutoPowerComponent.h"

class ASlasherPlayer;

void AOnryoTelevision::OnRep_SurvivorsThatCanInsertTape()
{

}

void AOnryoTelevision::OnRep_IsPowered(bool previousIsPowered)
{

}

void AOnryoTelevision::OnLocallyObservedChanged()
{

}

void AOnryoTelevision::OnKillerSet(ASlasherPlayer* killer)
{

}

void AOnryoTelevision::OnCosmeticTransitionStateFinished()
{

}

bool AOnryoTelevision::IsAnySurvivorWithoutTapeNearby() const
{
	return false;
}

ETelevisionCosmeticState AOnryoTelevision::GetTelevisionCosmeticState() const
{
	return ETelevisionCosmeticState::Off;
}

void AOnryoTelevision::Authority_OnRepowerTimerDone()
{

}

void AOnryoTelevision::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AOnryoTelevision, _survivorsThatCanInsertTape);
	DOREPLIFETIME(AOnryoTelevision, _isPowered);
}

AOnryoTelevision::AOnryoTelevision()
{
	this->_teleportPosition = NULL;
	this->_isKillerInOtherWorld = false;
	this->_televisionOutlineUpdateStrategy = CreateDefaultSubobject<UTelevisionOutlineUpdateStrategy>(TEXT("TelevisionOutlineUpdateStrategy"));
	this->_localPlayerTracker = CreateDefaultSubobject<ULocalPlayerTrackerComponent>(TEXT("LocalPlayerTracker"));
	this->_mapActorComponent = CreateDefaultSubobject<UMapActorComponent>(TEXT("Map Actor Component"));
	this->_autoPowerComponent = CreateDefaultSubobject<UOnryoTVAutoPowerComponent>(TEXT("Auto Power Component"));
	this->_survivorsThatCanInsertTape = TArray<ADBDPlayer*>();
	this->_isPowered = false;
	this->_nearbySurvivorsWithoutTape = TSet<ADBDPlayer*>();
}

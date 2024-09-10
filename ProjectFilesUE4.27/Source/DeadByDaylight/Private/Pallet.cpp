#include "Pallet.h"
#include "EPalletState.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalletStunZoneSideStrategy.h"
#include "PalletPushSettings.h"
#include "DBDNavEvadeLoopComponent.h"
#include "PalletPulldownBlockerComponent.h"

class UPrimitiveComponent;
class ADBDPlayer;
class AActor;
class ACamperPlayer;

void APallet::SetPendingDestruction(bool isPendingDestruction)
{

}

void APallet::SetPalletState(EPalletState state)
{

}

void APallet::PullDown(ADBDPlayer* player, const FPalletPushSettings& pushSettings, const EPalletStunZoneSideStrategy stunZoneSideStrategy)
{

}

void APallet::OnStunOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void APallet::Multicast_StunActor_Implementation(AActor* actor, ACamperPlayer* survivor, bool stunBreakPallet)
{

}

void APallet::Multicast_ResetPallet_Implementation()
{

}

void APallet::Multicast_PulldownPallet_Implementation()
{

}

void APallet::Multicast_EntityExplodePallet_Implementation(ADBDPlayer* player)
{

}

bool APallet::IsPulldownBlockedByEntity() const
{
	return false;
}

bool APallet::IsPendingDestruction() const
{
	return false;
}

bool APallet::IsDestroyedByEntity() const
{
	return false;
}

ADBDPlayer* APallet::GetPlayerDoingPulldown() const
{
	return NULL;
}

bool APallet::GetIsPulledDown() const
{
	return false;
}

bool APallet::GetIsDreamPallet() const
{
	return false;
}

float APallet::GetFallDuration() const
{
	return 0.0f;
}

void APallet::GetDestructibleAreaPrimitiveComponents_Implementation(TArray<UPrimitiveComponent*>& prims) const
{

}

bool APallet::CanPulldown(const ADBDPlayer* player, const FVector& interactionAxis, const bool isStationary) const
{
	return false;
}

void APallet::Authority_OnOverlapPushBox(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

APallet::APallet()
{
	this->PalletDownEvadeDoorFrontPointOffset = 150.000000;
	this->_state = EPalletState::Up;
	this->_isPendingDestruction = false;
	this->_isIllusionaryPalletDown = false;
	this->_isDestroyedByEntity = false;
	this->_destroyLeft = NULL;
	this->_destroyRight = NULL;
	this->_pushBox = NULL;
	this->_maxDotproductThresholdForPulldownAccross = 0.250000;
	this->_fallDuration = 0.300000;
	this->_stunBoxLeft = NULL;
	this->_stunBoxRight = NULL;
	this->_stunnedActors = TSet<AActor*>();
	this->_playerExecutingPulldown = NULL;
	this->_navEvadeLoopComponent = CreateDefaultSubobject<UDBDNavEvadeLoopComponent>(TEXT("NavEvadeLoopComponent"));
	this->_palletPulldownBlockerComponent = CreateDefaultSubobject<UPalletPulldownBlockerComponent>(TEXT("PalletPulldownBlockerComponent"));
	this->_isDreamPallet = false;
}

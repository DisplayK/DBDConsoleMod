#include "K30Power.h"
#include "Interactor.h"
#include "FloatingCameraNavigationComponent.h"
#include "K30PowerPresentationComponent.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class AActor;

void AK30Power::Server_OnSnappingStateChanged_Implementation(bool isSnapping)
{

}

void AK30Power::OnRep_KnightHusk()
{

}

void AK30Power::OnOrderTargetChanged()
{

}

void AK30Power::OnInteractionStateChanged(bool isCharging, bool isChargeCompleted)
{

}

void AK30Power::OnEndOverlapWindow(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void AK30Power::Multicast_OnSnappingStateChanged_Implementation(bool isSnapping)
{

}

bool AK30Power::IsSnapping() const
{
	return false;
}

bool AK30Power::IsDrawingPath() const
{
	return false;
}

bool AK30Power::IsChargingPower() const
{
	return false;
}

void AK30Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK30Power, _guards);
	DOREPLIFETIME(AK30Power, _knightHusk);
	DOREPLIFETIME(AK30Power, _currentGuardIndex);
	DOREPLIFETIME(AK30Power, _nextGuardIndex);
	DOREPLIFETIME(AK30Power, _remainingPathLengthPercent);
}

AK30Power::AK30Power()
{
	this->_interactor = CreateDefaultSubobject<UInteractor>(TEXT("Interactor"));
	this->_drawPathInteraction = NULL;
	this->_orderComponent = NULL;
	this->_guards = TArray<AKnightGuard*>();
	this->_guardClasses = TArray<TSubclassOf<AKnightGuard>>();
	this->_drawPathStatusEffectClass = NULL;
	this->_hideSurvivorVFXEffectClass = NULL;
	this->_immuneToBlindEffectClass = NULL;
	this->_knightHuskClass = NULL;
	this->_palletSlowingZoneClass = NULL;
	this->_vaultSlowingZoneClass = NULL;
	this->_k30SurvivorStatusComponentClass = NULL;
	this->_pullSurvivorOutOfLockerInteractionClass = NULL;
	this->_knightHusk = NULL;
	this->_drawPathIndicatorClass = NULL;
	this->_drawPathIndicator = NULL;
	this->_patrolTrailComponent = NULL;
	this->_floatingCameraNavigationComponent = CreateDefaultSubobject<UFloatingCameraNavigationComponent>(TEXT("FloatingCameraNavigationComponent"));
	this->_powerPresentationComponent = CreateDefaultSubobject<UK30PowerPresentationComponent>(TEXT("K30PowerPresentationComponent"));
	this->_interactionHandler = NULL;
	this->_currentGuardIndex = 0;
	this->_nextGuardIndex = 0;
	this->_remainingPathLengthPercent = 1.000000;
	this->_isVisibleDuringPathCreationModeTags = TArray<FGameplayTag>();
	this->_enableInteractionAfterTeleportationDelay = 0.350000;
}

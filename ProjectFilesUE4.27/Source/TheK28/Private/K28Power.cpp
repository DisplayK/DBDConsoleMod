#include "K28Power.h"
#include "K28PowerPresentationItemProgressComponent.h"
#include "Net/UnrealNetwork.h"
#include "K28PowerChargePresentationPowerFadeComponent.h"
#include "Interactor.h"
#include "PowerChargeComponent.h"

void AK28Power::OnRep_TeleportTokens()
{

}

void AK28Power::OnIntroCompleted()
{

}

void AK28Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK28Power, _secondaryCamera);
	DOREPLIFETIME(AK28Power, _k28Remnant);
	DOREPLIFETIME(AK28Power, _dayNightComponent);
	DOREPLIFETIME(AK28Power, _teleportationStrategyComponent);
	DOREPLIFETIME(AK28Power, _teleportTokens);
}

AK28Power::AK28Power()
{
	this->_interactor = CreateDefaultSubobject<UInteractor>(TEXT("Interactor"));
	this->_powerChargeComponent = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("Power Charge Component"));
	this->_k28PowerChargePresentationPowerFadeComponent = CreateDefaultSubobject<UK28PowerChargePresentationPowerFadeComponent>(TEXT("K28PowerChargePresentationPowerFadeComponent"));
	this->_k28PowerPresentationItemProgressComponent = CreateDefaultSubobject<UK28PowerPresentationItemProgressComponent>(TEXT("K28PowerChargePresentationItemProgressComponent"));
	this->_dayNightComponentClass = NULL;
	this->_teleportationStrategyComponentClass = NULL;
	this->_killerTeleportationComponentClass = NULL;
	this->_killerPlayerViewComponentClass = NULL;
	this->_killerLockerComponentClass = NULL;
	this->_secondaryCameraClass = NULL;
	this->_k28RemnantClass = NULL;
	this->_moriArmsAnimationFollowerActorClass = NULL;
	this->_secondaryCamera = NULL;
	this->_killerLockerComponent = NULL;
	this->_k28Remnant = NULL;
	this->_killerStatusEffects = TArray<TSubclassOf<UStatusEffect>>();
	this->_survivorStatusEffects = TArray<TSubclassOf<UStatusEffect>>();
	this->_survivorAbductionCameraBehaviourClass = NULL;
	this->_dayNightComponent = NULL;
	this->_teleportationStrategyComponent = NULL;
	this->_teleportTokens = 0;
	this->_survivorInteractionsPreventingTagModifications = TArray<FK28InteractionPreventingTagsModification>();
	this->_isTunableInit = false;
}

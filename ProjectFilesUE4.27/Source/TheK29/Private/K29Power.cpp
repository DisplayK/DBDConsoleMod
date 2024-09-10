#include "K29Power.h"
#include "Net/UnrealNetwork.h"
#include "Interactor.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "BoxPlayerOverlapComponent.h"
#include "ChargeableComponent.h"
#include "K29PowerChargePresentationItemProgressComponent.h"
#include "K29PowerChargePresentationPowerFadeComponent.h"

class UK29RushChargesHandlerComponent;
class UK29PowerStatusHandlerComponent;

float AK29Power::GetScorePercent() const
{
	return 0.0f;
}

UK29RushChargesHandlerComponent* AK29Power::GetRushChargesHandlerComponent()
{
	return NULL;
}

UK29PowerStatusHandlerComponent* AK29Power::GetPowerStatusHandlerComponent()
{
	return NULL;
}

void AK29Power::Authority_OnStun(const FGameplayTag gameplayTag, const FGameEventData& gameEventData)
{

}

void AK29Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK29Power, _powerStatusHandlerComponent);
	DOREPLIFETIME(AK29Power, _rushChargesHandlerComponent);
}

AK29Power::AK29Power()
{
	this->_rushChargeableComponent = CreateDefaultSubobject<UChargeableComponent>(TEXT("Rush Chargeable"));
	this->_interactor = CreateDefaultSubobject<UInteractor>(TEXT("Interactor"));
	this->_interactionVolume = CreateDefaultSubobject<UBoxPlayerOverlapComponent>(TEXT("Interaction Volume"));
	this->_powerChargePresentationItemProgressComponent = CreateDefaultSubobject<UK29PowerChargePresentationItemProgressComponent>(TEXT("Rush Power UI Presenter"));
	this->_powerChargePresentationPowerFadeComponent = CreateDefaultSubobject<UK29PowerChargePresentationPowerFadeComponent>(TEXT("Rush Power UI Fade Presenter"));
	this->_powerStatusHandlerComponentClass = NULL;
	this->_rushChargesHandlerComponentClass = NULL;
	this->_pathingCalculatorComponentClass = NULL;
	this->_blindnessProtectionStatusEffectClass = NULL;
	this->_moriTentaclesAnimationFollowerActorClass = NULL;
	this->_powerStatusHandlerComponent = NULL;
	this->_rushChargesHandlerComponent = NULL;
	this->_pathingCalculatorComponent = NULL;
}

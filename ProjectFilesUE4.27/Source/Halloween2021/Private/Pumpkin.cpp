#include "Pumpkin.h"
#include "Net/UnrealNetwork.h"
#include "Interactor.h"
#include "PumpkinInteraction.h"
#include "Components/BoxComponent.h"
#include "ChargeableComponent.h"

void APumpkin::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APumpkin, _pumpkinType);
}

APumpkin::APumpkin()
{
	this->_specialBehaviourId = NAME_None;
	this->_pumpkinType = EPumpkinType::None;
	this->_pumpkinInteraction = CreateDefaultSubobject<UPumpkinInteraction>(TEXT("PumpkinInteraction"));
	this->_pumpkinInteractionKiller = CreateDefaultSubobject<UPumpkinInteraction>(TEXT("PumpkinInteractionKiller"));
	this->_pumpkinInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("PumpkinInteractionChargeable"));
	this->_pumpkinInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("PumpkinInteractionChargeableKiller"));
	this->_pumpkinInteractor = CreateDefaultSubobject<UInteractor>(TEXT("PumpkinInteractor"));
	this->_pumpkinInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("PumpkinInteractionZone"));
	this->_pumpkinTreatEffect = NULL;
	this->_pumpkinTrickEffect = NULL;
	this->_pumpkinStatusEffect = NULL;
}

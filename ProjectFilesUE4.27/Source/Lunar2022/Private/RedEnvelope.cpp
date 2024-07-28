#include "RedEnvelope.h"
#include "Components/StaticMeshComponent.h"
#include "DBDOutlineComponent.h"
#include "RedEnvelopeInteraction.h"
#include "Net/UnrealNetwork.h"
#include "RedEnvelopeOutlineUpdateStrategy.h"
#include "Components/BoxComponent.h"
#include "ChargeableComponent.h"
#include "Interactor.h"

void ARedEnvelope::OnRep_RedEnvelopeData()
{

}

void ARedEnvelope::OnRep_OwnerPlayerState()
{

}

void ARedEnvelope::OnLocallyObservedChanged()
{

}

void ARedEnvelope::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ARedEnvelope, _ownerPlayerState);
	DOREPLIFETIME(ARedEnvelope, _redEnvelopeData);
}

ARedEnvelope::ARedEnvelope()
{
	this->_ownerPlayerState = NULL;
	this->_redEnvelopeInteraction = CreateDefaultSubobject<URedEnvelopeInteraction>(TEXT("RedEnvelopeInteraction"));
	this->_redEnvelopeInteractionKiller = CreateDefaultSubobject<URedEnvelopeInteraction>(TEXT("RedEnvelopeInteractionKiller"));
	this->_redEnvelopeInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("RedEnvelopeInteractionChargeable"));
	this->_redEnvelopeInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("RedEnvelopeInteractionChargeableKiller"));
	this->_redEnvelopeInteractor = CreateDefaultSubobject<UInteractor>(TEXT("RedEnvelopeInteractor"));
	this->_redEnvelopeInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("RedEnvelopeInteractionZone"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
	this->_redEnvelopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RedEnvelopeMesh"));
	this->_eventComponent = NULL;
	this->_redEnvelopeOutlineUpdateStrategy = CreateDefaultSubobject<URedEnvelopeOutlineUpdateStrategy>(TEXT("RedEnvelopeOutlineUpdateStrategy"));
}

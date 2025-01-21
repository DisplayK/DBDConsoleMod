#include "UnstableRift.h"
#include "Interactor.h"
#include "UnstableRiftInteraction.h"
#include "Components/StaticMeshComponent.h"
#include "DBDOutlineComponent.h"
#include "Components/BoxComponent.h"
#include "ChargeableComponent.h"
#include "NearTrackedActorComponent.h"
#include "UnstableRiftTeleportationComponent.h"
#include "UnstableRiftOutlineStrategy.h"

void AUnstableRift::OnIntroCompleted()
{

}

AUnstableRift::AUnstableRift()
{
	this->_isInitialized = false;
	this->_unstableRiftInteractionSurvivor = CreateDefaultSubobject<UUnstableRiftInteraction>(TEXT("UnstableRiftInteractionSurvivor"));
	this->_unstableRiftInteractionKiller = CreateDefaultSubobject<UUnstableRiftInteraction>(TEXT("UnstableRiftInteractionKiller"));
	this->_unstableRiftInteractionChargeableSurvivor = CreateDefaultSubobject<UChargeableComponent>(TEXT("UnstableRiftInteractionChargeableSurvivor"));
	this->_unstableRiftInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("UnstableRiftInteractionChargeableKiller"));
	this->_unstableRiftInteractor = CreateDefaultSubobject<UInteractor>(TEXT("UnstableRiftInteractor"));
	this->_unstableRiftInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("UnstableRiftInteractionZone"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
	this->_outlineStrategy = CreateDefaultSubobject<UUnstableRiftOutlineStrategy>(TEXT("OutlineStrategy"));
	this->_unstableRiftMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnstableRiftMesh"));
	this->_unstableRiftTeleportationComponent = CreateDefaultSubobject<UUnstableRiftTeleportationComponent>(TEXT("UnstableRiftTeleportationComponent"));
	this->_nearTrackedActorComponent = CreateDefaultSubobject<UNearTrackedActorComponent>(TEXT("NearPlayerTracker"));
	this->_offeringAudioEvent = NULL;
}

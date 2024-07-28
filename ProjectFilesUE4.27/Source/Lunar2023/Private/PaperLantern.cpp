#include "PaperLantern.h"
#include "PaperLanternInteraction.h"
#include "Components/StaticMeshComponent.h"
#include "DBDOutlineComponent.h"
#include "Components/BoxComponent.h"
#include "ChargeableComponent.h"
#include "Interactor.h"

APaperLantern::APaperLantern()
{
	this->_paperLanternInteractionSurvivor = CreateDefaultSubobject<UPaperLanternInteraction>(TEXT("PaperLanternInteractionSurvivor"));
	this->_paperLanternInteractionKiller = CreateDefaultSubobject<UPaperLanternInteraction>(TEXT("PaperLanternInteractionKiller"));
	this->_paperLanternInteractionChargeableSurvivor = CreateDefaultSubobject<UChargeableComponent>(TEXT("PaperLanternInteractionChargeableSurvivor"));
	this->_paperLanternInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("PaperLanternInteractionChargeableKiller"));
	this->_paperLanternInteractor = CreateDefaultSubobject<UInteractor>(TEXT("PaperLanternInteractor"));
	this->_paperLanternInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("PaperLanternInteractionZone"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
	this->_paperLanternStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PaperLanternStaticMesh"));
	this->_paperLanternSpeedEffect = NULL;
	this->_paperLanternVaultSpeedEffect = NULL;
}

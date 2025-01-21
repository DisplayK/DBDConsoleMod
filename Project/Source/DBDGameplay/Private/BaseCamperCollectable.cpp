#include "BaseCamperCollectable.h"
#include "SpherePlayerOverlapComponent.h"
#include "Interactor.h"
#include "DropItemInteraction.h"
#include "SurvivorCollectableOutlineUpdateStrategy.h"
#include "Components/SphereComponent.h"
#include "CollectItemInteraction.h"
#include "DBDOutlineComponent.h"
#include "MaterialHelper.h"

ABaseCamperCollectable::ABaseCamperCollectable()
{
	this->_interactable = CreateDefaultSubobject<USpherePlayerOverlapComponent>(TEXT("InteractableZone"));
	this->_collectableInteractor = CreateDefaultSubobject<UInteractor>(TEXT("CollectableInteractorComponent"));
	this->_dropInteraction = CreateDefaultSubobject<UDropItemInteraction>(TEXT("DropItemInteraction"));
	this->_collectInteraction = CreateDefaultSubobject<UCollectItemInteraction>(TEXT("CollectItemInteraction"));
	this->_infectablePrimitive = CreateDefaultSubobject<USphereComponent>(TEXT("InfectableSphere"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("DBDOutlineComponent"));
	this->_materialHelper = CreateDefaultSubobject<UMaterialHelper>(TEXT("MaterialHelperComponent"));
	this->_survivorCollectableOutlineUpdateStrategy = CreateDefaultSubobject<USurvivorCollectableOutlineUpdateStrategy>(TEXT("SurvivorCollectableOutlineUpdateStrategy"));
}

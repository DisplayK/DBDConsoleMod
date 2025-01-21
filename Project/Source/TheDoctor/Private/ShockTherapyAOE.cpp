#include "ShockTherapyAOE.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

AShockTherapyAOE::AShockTherapyAOE()
{
	this->_attackZone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AttackZone"));
	this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->_killerOffset = 125.000000;
	this->_baseZoneSize = 845.000000;
	this->_shockTherapyPreviewClass = NULL;
	this->_shockTherapyPreview = NULL;
}

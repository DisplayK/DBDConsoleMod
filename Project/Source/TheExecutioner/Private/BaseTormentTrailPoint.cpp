#include "BaseTormentTrailPoint.h"
#include "Components/SphereComponent.h"

void ABaseTormentTrailPoint::EndOfDisapearCosmetic()
{

}

ABaseTormentTrailPoint::ABaseTormentTrailPoint()
{
	this->_collisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	this->_collisionRadius = 50.000000;
	this->_splineMeshComponent = NULL;
	this->_trailMeshList = TArray<UStaticMesh*>();
	this->_indexInTrail = 0;
}

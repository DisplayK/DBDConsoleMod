#include "HarpoonProjectile.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "HarpoonProjectileMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"

void AHarpoonProjectile::OnHarpoonStop(const FHitResult& result)
{

}

AHarpoonProjectile::AHarpoonProjectile()
{
	this->_movement = CreateDefaultSubobject<UHarpoonProjectileMovementComponent>(TEXT("Movement_FIXED"));
	this->_environmentCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Environment Collider"));
	this->_targetCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Target Detector"));
	this->_skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
	this->_poolableActorComponent = NULL;
}

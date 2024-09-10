#include "K25Projectile.h"
#include "EK25ProjectileDeactivateReason.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "KillerProjectileDodgeComponent.h"

class UDBDProjectileMovementComponent;

void AK25Projectile::Server_RequestDisableProjectile_Implementation(EK25ProjectileDeactivateReason deactivateReason)
{

}

void AK25Projectile::OnProjectileStopped(const FHitResult& result)
{

}

UDBDProjectileMovementComponent* AK25Projectile::GetMovementComponent() const
{
	return NULL;
}

FVector AK25Projectile::GetChainAttachmentLocation_Implementation() const
{
	return FVector{};
}

void AK25Projectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK25Projectile, _attachedChain);
}

AK25Projectile::AK25Projectile()
{
	this->_staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	this->_characterCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Target Detector"));
	this->_environmentCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Environment Collider"));
	this->_projectileDodgeComponent = CreateDefaultSubobject<UKillerProjectileDodgeComponent>(TEXT("Projectile Dodge Component"));
	this->_attachedChain = NULL;
	this->_timeIgnoreSlasherCollision = 0.000000;
	this->_isActive = false;
}

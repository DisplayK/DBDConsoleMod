#include "K25ControlledProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/SpringArmComponent.h"
#include "K25ControlledProjectileMovementComponent.h"
#include "Camera/CameraComponent.h"

void AK25ControlledProjectile::Server_ProcessYawInput_Implementation(float deltaTime, float scaledInput)
{

}

void AK25ControlledProjectile::Server_ProcessPitchInput_Implementation(float deltaTime, float scaledInput)
{

}

void AK25ControlledProjectile::OnRep_AngularVelocity()
{

}

void AK25ControlledProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK25ControlledProjectile, _lastAppliedAngularVelocity);
}

AK25ControlledProjectile::AK25ControlledProjectile()
{
	this->_killerViewProjectileStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Killer Projectile Static Mesh"));
	this->_killerSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
	this->_killerCameraPlacement = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Positionning"));
	this->_pitchClampAngle = 80.000000;
	this->_controlledProjectileMovementComponent = CreateDefaultSubobject<UK25ControlledProjectileMovementComponent>(TEXT("Movement_FIXED"));
	this->_currentRoll = 0.000000;
	this->_targetRoll = 0.000000;
}

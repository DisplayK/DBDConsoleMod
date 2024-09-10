#include "K25Gateway.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

void AK25Gateway::Server_StartGatewayPossession_Implementation(FVector possessionLocation, FRotator gatewayRotation)
{

}

void AK25Gateway::Server_SetIsGatewayBeingPositionned_Implementation(bool isBeingPositionned)
{

}

void AK25Gateway::Server_SetGatewayTargetLocation_Implementation(FVector targetLocation, bool isValidLocation)
{

}

void AK25Gateway::Server_SetGatewayOrientation_Implementation(FRotator rotation)
{

}

void AK25Gateway::Server_EndGatewayPossession_Implementation()
{

}

void AK25Gateway::OnRep_IsGatewayPossessed()
{

}

void AK25Gateway::OnRep_IsBeingPositionned()
{

}

void AK25Gateway::Multicast_SetGatewayTargetLocation_Implementation(FVector targetLocation, bool isValidLocation)
{

}

void AK25Gateway::Multicast_SetGatewayOrientation_Implementation(FRotator rotation)
{

}

void AK25Gateway::Multicast_SetGatewayLocation_Implementation(FVector possessionLocation)
{

}

bool AK25Gateway::IsGatewayPossessed() const
{
	return false;
}

void AK25Gateway::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK25Gateway, _isGatewayPossessed);
	DOREPLIFETIME(AK25Gateway, _isBeingPositionned);
}

AK25Gateway::AK25Gateway()
{
	this->_rayCastZOffet = 200.000000;
	this->_rayCastLength = 10000.000000;
	this->_distancePercentLocations = TArray<float>();
	this->_survivorGatewayRotationSpeed = 10.000000;
	this->_minimumIndicatorVelocity = 460.000000;
	this->_indicatorVelocityEasingFactor = 0.050000;
	this->_minimumTimeBeforeTargetLocationMulticast = 0.250000;
	this->_gatewayNoiseEventTimeInterval = 0.100000;
	this->_gatewayNoiseEventRange = 1600.000000;
	this->_visualComponent = NULL;
	this->_cameraPlacementComponent = NULL;
	this->_isGatewayPossessed = false;
	this->_isBeingPositionned = false;
	this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
}

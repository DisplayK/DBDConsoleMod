#include "GeneratorTeleportInteraction.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

class AGenerator;
class ASlasherPlayer;
class ADBDPlayer;

void UGeneratorTeleportInteraction::StopBloodSpurts()
{

}

void UGeneratorTeleportInteraction::StartBloodSpurts()
{

}

void UGeneratorTeleportInteraction::Server_SetSelectedGenerator_Implementation(AGenerator* generator)
{

}

bool UGeneratorTeleportInteraction::Server_SetSelectedGenerator_Validate(AGenerator* generator)
{
	return true;
}

void UGeneratorTeleportInteraction::OnRep_TeleportCooldownTimer()
{

}

void UGeneratorTeleportInteraction::OnRep_SelectedGenerator()
{

}

void UGeneratorTeleportInteraction::OnIntroCompleted()
{

}

void UGeneratorTeleportInteraction::OnBloodSpurts()
{

}

void UGeneratorTeleportInteraction::Multicast_TeleportPlayer_Implementation(FVector location, FRotator rotation)
{

}

void UGeneratorTeleportInteraction::Multicast_OnTeleportLocationChosen_Implementation(AGenerator* generator, FTransform location)
{

}

bool UGeneratorTeleportInteraction::IsTeleportAvailable() const
{
	return false;
}

void UGeneratorTeleportInteraction::InitializeTunableValues(ASlasherPlayer* killer)
{

}

bool UGeneratorTeleportInteraction::HasTeleportFailed() const
{
	return false;
}

ADBDPlayer* UGeneratorTeleportInteraction::GetOwningPlayer() const
{
	return NULL;
}

AGenerator* UGeneratorTeleportInteraction::GetInlineGenerator(const ADBDPlayer* player) const
{
	return NULL;
}

bool UGeneratorTeleportInteraction::CanTeleportAtGenerator(AGenerator* generator) const
{
	return false;
}

bool UGeneratorTeleportInteraction::Authority_TeleportPlayerToGenerator(ADBDPlayer* playerToTeleport, AGenerator* generator)
{
	return false;
}

void UGeneratorTeleportInteraction::Authority_StartTeleportCooldown(bool teleported)
{

}

void UGeneratorTeleportInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGeneratorTeleportInteraction, _teleportCooldownTimer);
	DOREPLIFETIME(UGeneratorTeleportInteraction, _selectedGenerator);
	DOREPLIFETIME(UGeneratorTeleportInteraction, _selectedTeleportLocation);
}

UGeneratorTeleportInteraction::UGeneratorTeleportInteraction()
{
	this->OnBloodSpurtsAINoiseEventRange = 1600.000000;
	this->_teleportCooldownTimer = NULL;
	this->_selectedGenerator = NULL;
	this->_locallySelectedGenerator = NULL;
	this->_isInteractionOngoing = false;
	this->_teleportFailed = false;
	this->_noTeleportableGenerators = false;
	this->_bloodSpurtInterval = 0.500000;
	this->_collisionCheckCapsuleHalfHeight = 80.000000;
	this->_collisionCheckCapsuleRadius = 60.000000;
	this->_capsuleTraceAngleIncrement = 10.000000;
	this->_generatorTeleportMaxAngle = 60.000000;
	this->_downRaycastLength = 80.000000;
}

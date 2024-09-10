#include "K29PowerStatusHandlerComponent.h"
#include "Net/UnrealNetwork.h"
#include "K29SurvivorStatus.h"

class ACamperPlayer;
class ASlasherPlayer;

void UK29PowerStatusHandlerComponent::Server_ReleaseSurvivor_Implementation(ACamperPlayer* survivor, bool isForced)
{

}

void UK29PowerStatusHandlerComponent::Server_GrabSurvivor_Implementation(ACamperPlayer* survivor, const bool isProcessingInitialInfection)
{

}

void UK29PowerStatusHandlerComponent::OnRep_SurvivorStatusList(TArray<FK29SurvivorStatus> oldSurvivorStatus)
{

}

void UK29PowerStatusHandlerComponent::OnKillerSet(ASlasherPlayer* killer)
{

}

void UK29PowerStatusHandlerComponent::Multicast_UseStabilizingSpray_Implementation(ACamperPlayer* targetSurvivor)
{

}

void UK29PowerStatusHandlerComponent::Multicast_RemoveSurvivorFromCloset_Implementation(ACamperPlayer* survivor)
{

}

void UK29PowerStatusHandlerComponent::Multicast_ReleaseSurvivor_Implementation(ACamperPlayer* survivor, bool isForced)
{

}

void UK29PowerStatusHandlerComponent::Multicast_GrabSurvivor_Implementation(ACamperPlayer* survivor, const bool isProcessingInitialInfection)
{

}

void UK29PowerStatusHandlerComponent::Multicast_DropSurvivor_Implementation(ACamperPlayer* leftSurvivor)
{

}

int32 UK29PowerStatusHandlerComponent::GetMaxInfectionLevel()
{
	return 0;
}

int32 UK29PowerStatusHandlerComponent::GetInfectionLevel(const ACamperPlayer* survivor)
{
	return 0;
}

void UK29PowerStatusHandlerComponent::Authority_UseStabilizingSpray(ACamperPlayer* instigatingSurvivor, ACamperPlayer* targetSurvivor)
{

}

void UK29PowerStatusHandlerComponent::Authority_SetAllSurvivorsToMaxInfection()
{

}

void UK29PowerStatusHandlerComponent::Authority_SetAllSurvivorsToInitialInfection()
{

}

void UK29PowerStatusHandlerComponent::Authority_OnSurvivorImmoblizedChanged()
{

}

void UK29PowerStatusHandlerComponent::Authority_OnSurvivorAdded(ACamperPlayer* survivor)
{

}

void UK29PowerStatusHandlerComponent::Authority_OnSlash(ACamperPlayer* targetSurvivor)
{

}

void UK29PowerStatusHandlerComponent::Authority_OnIntroCompleted()
{

}

void UK29PowerStatusHandlerComponent::Authority_HealInfectionLevels(const ACamperPlayer* survivor, const int32 infectionLevelsToHeal, const bool shouldSetInfectionActiveToFalse)
{

}

void UK29PowerStatusHandlerComponent::Authority_HealAllSurvivorsInfectionWithStabilizingSpray()
{

}

void UK29PowerStatusHandlerComponent::Authority_AddInfectionLevels(const ACamperPlayer* survivor, const int32 infectionToAdd)
{

}

void UK29PowerStatusHandlerComponent::AddToTimesCuredByHeal(const ACamperPlayer* survivor)
{

}

void UK29PowerStatusHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK29PowerStatusHandlerComponent, _survivorStatusList);
}

UK29PowerStatusHandlerComponent::UK29PowerStatusHandlerComponent()
{
	this->_stabilizingHealAmountByUsage = NULL;
	this->_hinderedStatusEffectClass = NULL;
	this->_gateBlockerStatusEffectClass = NULL;
	this->_survivorThrowableClass = NULL;
	this->_useInfectionRemoverInteractionSelfClass = NULL;
	this->_useInfectionRemoverInteractionOtherClass = NULL;
	this->_maxInfectionLevelWhenHooked = 50;
	this->_recentlyGrabbedThresholdSeconds = 0.500000;
	this->_survivorStatusList = TArray<FK29SurvivorStatus>();
}

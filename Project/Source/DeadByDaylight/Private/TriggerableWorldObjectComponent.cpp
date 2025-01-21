#include "TriggerableWorldObjectComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"

class ADBDPlayer;
class UPrimitiveComponent;
class AActor;

void UTriggerableWorldObjectComponent::SetGuaranteedTriggerVolume(UPrimitiveComponent* volume)
{

}

void UTriggerableWorldObjectComponent::SetConditionalTriggerVolume(UPrimitiveComponent* volume)
{

}

void UTriggerableWorldObjectComponent::Multicast_OnTriggerReset_Implementation()
{

}

void UTriggerableWorldObjectComponent::Multicast_OnTriggered_Implementation(AActor* instigator, FVector triggerLocation)
{

}

void UTriggerableWorldObjectComponent::GetConditionalModifiers_Implementation(ADBDPlayer* player, float& outAdditive, float& outMultiplicative)
{

}

bool UTriggerableWorldObjectComponent::CanPlayerTriggerGuaranteed_Implementation(ADBDPlayer* player)
{
	return false;
}

bool UTriggerableWorldObjectComponent::CanPlayerTriggerConditional_Implementation(ADBDPlayer* player)
{
	return false;
}

void UTriggerableWorldObjectComponent::Authority_Trigger(AActor* instigator, FVector triggerLocation)
{

}

void UTriggerableWorldObjectComponent::Authority_ResetTrigger()
{

}

void UTriggerableWorldObjectComponent::Authority_GuaranteedVolumeOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult)
{

}

void UTriggerableWorldObjectComponent::Authority_ConditionalVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

void UTriggerableWorldObjectComponent::Authority_ConditionalVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult)
{

}

UTriggerableWorldObjectComponent::UTriggerableWorldObjectComponent()
{
	this->_triggerResetTime = 0.000000;
	this->_randomChance = 0.000000;
	this->_rollFrequency = 0.000000;
	this->_conditionalTriggerVolume = NULL;
	this->_conditionalVolumeOverlappingPlayers = TSet<ADBDPlayer*>();
	this->_guaranteedTriggerVolume = NULL;
}

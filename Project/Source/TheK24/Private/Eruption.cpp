#include "Eruption.h"
#include "Net/UnrealNetwork.h"

class AGenerator;

void UEruption::Multicast_TriggerPerk_Implementation(const TArray<AGenerator*>& explodingGenerators)
{

}

void UEruption::Multicast_HighlightGenerator_Implementation(AGenerator* generator)
{

}

float UEruption::GetScreamRevealLocationDuration() const
{
	return 0.0f;
}

void UEruption::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UEruption, _isPerkEnabled);
}

UEruption::UEruption()
{
	this->_server_affectedGenerators = TArray<AGenerator*>();
	this->_isPerkEnabled = false;
	this->_generatorRegressPercentage = 0.000000;
	this->_survivorImposedStatusEffectDuration = 0.000000;
	this->_perkCooldownDuration = 0.000000;
	this->_screamRevealLocationDuration = 0.000000;
	this->_survivorEffectClass = NULL;
}

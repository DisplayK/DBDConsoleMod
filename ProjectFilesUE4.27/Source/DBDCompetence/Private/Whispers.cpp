#include "Whispers.h"
#include "Net/UnrealNetwork.h"

void UWhispers::OnRep_SurvivorsInRange()
{

}

void UWhispers::Multicast_FireAudioEvent_Implementation(const int32 survivorsInRange)
{

}

void UWhispers::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWhispers, _survivorsInRange);
}

UWhispers::UWhispers()
{
	this->_timeBetweenAudio = 3.000000;
	this->_survivorsInRange = -1;
}

#include "WereGonnaLiveForever.h"
#include "Net/UnrealNetwork.h"

void UWereGonnaLiveForever::OnRep_PerkEnabled()
{

}

void UWereGonnaLiveForever::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWereGonnaLiveForever, _isPerkEnabled);
}

UWereGonnaLiveForever::UWereGonnaLiveForever()
{
	this->_healSpeedIncrease = 1.000000;
	this->_enduranceEffectLevels = 0.000000;
	this->_healSpeedFromDyingStatusEffect = NULL;
	this->_enduranceEffect = NULL;
	this->_isPerkEnabled = false;
}

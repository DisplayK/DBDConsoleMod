#include "KillerHideInSnowmanInteraction.h"
#include "Net/UnrealNetwork.h"

void UKillerHideInSnowmanInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UKillerHideInSnowmanInteraction, _shouldAttackOutOfSnowman);
}

UKillerHideInSnowmanInteraction::UKillerHideInSnowmanInteraction()
{
	this->_shouldAttackOutOfSnowman = false;
	this->_gamepadPitchCurve = NULL;
	this->_gamepadYawCurve = NULL;
}

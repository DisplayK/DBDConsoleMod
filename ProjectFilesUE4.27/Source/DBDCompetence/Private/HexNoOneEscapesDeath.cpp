#include "HexNoOneEscapesDeath.h"
#include "Net/UnrealNetwork.h"

void UHexNoOneEscapesDeath::OnRep_SetShouldActivateTotemOutline()
{

}

float UHexNoOneEscapesDeath::GetHasteAtLevel()
{
	return 0.0f;
}

void UHexNoOneEscapesDeath::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHexNoOneEscapesDeath, _shouldActivateTotemOutline);
}

UHexNoOneEscapesDeath::UHexNoOneEscapesDeath()
{
	this->_hasteImposedEffectClass = NULL;
	this->_exposedEffectClass = NULL;
	this->_revealCurseWhenTotemShownToSurvivor = false;
	this->_revealCurseWhenSurvivorGetHits = true;
	this->_auraRevealStartDistance = 400.000000;
	this->_auraRevealEndDistance = 2400.000000;
	this->_auraRevealDuration = 30.000000;
	this->_hastePerLevel = 0.000000;
	this->_shouldActivateTotemOutline = false;
}

#include "Breakout.h"
#include "Net/UnrealNetwork.h"

class ASlasherPlayer;
class ACamperPlayer;

void UBreakout::OnSlasherSet(ASlasherPlayer* slasher)
{

}

void UBreakout::OnRep_IsPerkActive()
{

}

void UBreakout::Authority_OnRangeChanged(const bool inRange)
{

}

void UBreakout::Authority_ImposeWiggleStatusEffect(ACamperPlayer* survivor)
{

}

void UBreakout::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UBreakout, _isPerkActive);
}

UBreakout::UBreakout()
{
	this->_slasher = NULL;
	this->_playerOwner = NULL;
	this->_hasteStatusEffect = NULL;
	this->_wiggleStatusEffect = NULL;
	this->_hasteEffect = 0.000000;
	this->_wiggleEffect = 0.000000;
	this->_survivorDistanceMax = 0.000000;
	this->_isPerkActive = false;
}

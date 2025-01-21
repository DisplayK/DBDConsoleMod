#include "HexThirdSeal.h"
#include "Net/UnrealNetwork.h"

void UHexThirdSeal::OnRep_NumOfHitPlayers()
{

}

void UHexThirdSeal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHexThirdSeal, _numOfHitPlayers);
}

UHexThirdSeal::UHexThirdSeal()
{
	this->_numOfHitPlayers = 0;
	this->_thirdSealBlindnessEffect = NULL;
	this->_maximumBlindableSurvivors = 0;
}

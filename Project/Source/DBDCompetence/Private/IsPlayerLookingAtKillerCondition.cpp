#include "IsPlayerLookingAtKillerCondition.h"
#include "Net/UnrealNetwork.h"

class APawn;
class AController;

void UIsPlayerLookingAtKillerCondition::OnRep_IsLookingTowards(const bool isLookingTowards)
{

}

void UIsPlayerLookingAtKillerCondition::OnPawnControllerChanged(APawn* pawn, AController* controller)
{

}

void UIsPlayerLookingAtKillerCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UIsPlayerLookingAtKillerCondition, _isLookingTowards);
}

UIsPlayerLookingAtKillerCondition::UIsPlayerLookingAtKillerCondition()
{
	this->_precisionAngleDegrees = 45.000000;
	this->_isLookingTowards = false;
}

#include "PlayerVoidEnergy.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UPlayerVoidEnergy::OnRep_TotalVoidEnergySpent()
{

}

void UPlayerVoidEnergy::OnRep_CurrentVoidEnergy(int32 previousEnergyCount)
{

}

void UPlayerVoidEnergy::OnLocallyObservedChanged(ADBDPlayer* player)
{

}

void UPlayerVoidEnergy::OnLocallyControlledChanged()
{

}

int32 UPlayerVoidEnergy::GetTotalVoidEnergyDeposited() const
{
	return 0;
}

int32 UPlayerVoidEnergy::GetMaxAmountOfVoidEnergyCanReceive() const
{
	return 0;
}

int32 UPlayerVoidEnergy::GetCurrentVoidEnergyRewardTier() const
{
	return 0;
}

int32 UPlayerVoidEnergy::GetCurrentVoidEnergyCount() const
{
	return 0;
}

float UPlayerVoidEnergy::GetCurrentBloodPointMultiplier() const
{
	return 0.0f;
}

void UPlayerVoidEnergy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPlayerVoidEnergy, _reasonLastVoidEnergyChangeOccurred);
	DOREPLIFETIME(UPlayerVoidEnergy, _currentVoidEnergy);
	DOREPLIFETIME(UPlayerVoidEnergy, _totalVoidEnergySpent);
	DOREPLIFETIME(UPlayerVoidEnergy, _currentBloodpointsMultiplier);
}

UPlayerVoidEnergy::UPlayerVoidEnergy()
{
	this->_reasonLastVoidEnergyChangeOccurred = EVoidEnergyChangeReason::None;
	this->_currentVoidEnergy = 0;
	this->_bloodPointMultiplierTiers = TArray<FDBDTunableRowHandle>();
	this->_totalVoidEnergySpent = 0;
	this->_currentBloodpointsMultiplier = 1;
	this->_voidEnergyLevelsToStartNextTier = TArray<FDBDTunableRowHandle>();
	this->_hasteValueTiers = TArray<FDBDTunableRowHandle>();
	this->_hasteStatusEffect = NULL;
	this->_voidEnergyOrbSpawnerClass = NULL;
	this->_scoreEventTiers = TArray<FGameplayTag>();
	this->_scoreEventTiersWithoutOffering = TArray<FGameplayTag>();
}

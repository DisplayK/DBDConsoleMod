#include "BasicChargeableInteraction.h"
#include "Net/UnrealNetwork.h"

void UBasicChargeableInteraction::OnRep_SpawnedChargeable()
{

}

void UBasicChargeableInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UBasicChargeableInteraction, _spawnedChargeable);
}

UBasicChargeableInteraction::UBasicChargeableInteraction()
{
	this->AutoSpawnChargeableComponent = true;
	this->ResetProgressWhenStoppingInteraction = true;
	this->AutoAddCharge = true;
	this->_spawnedChargeable = NULL;
}

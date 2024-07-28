#include "VoidEnergyProducer.h"
#include "Net/UnrealNetwork.h"

void UVoidEnergyProducer::OnRep_TotalEnergyGiven(int32 lastTotalEnergyGivenValue)
{

}

bool UVoidEnergyProducer::HasEnergyLeftToGive() const
{
	return false;
}

int32 UVoidEnergyProducer::GetRemainingEnergy() const
{
	return 0;
}

void UVoidEnergyProducer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UVoidEnergyProducer, _totalEnergyGiven);
}

UVoidEnergyProducer::UVoidEnergyProducer()
{
	this->_totalEnergyGiven = 0;
	this->_voidEnergySpawnObjectName = TEXT("Void Energy Spawn Location");
	this->_voidEnergyHoverObjectName = TEXT("Void Energy Hover Location");
}

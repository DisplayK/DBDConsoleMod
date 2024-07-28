#include "SurvivorMadnessEffect.h"
#include "Net/UnrealNetwork.h"

void USurvivorMadnessEffect::OnRep_MadnessAmount()
{

}

void USurvivorMadnessEffect::Multicast_OnMadnessTierChanged_Implementation(const int32 newMadnessTier, const int32 oldMadnessTier)
{

}

void USurvivorMadnessEffect::Multicast_MadnessIntermittentScream_Implementation()
{

}

int32 USurvivorMadnessEffect::GetMadnessTier() const
{
	return 0;
}

void USurvivorMadnessEffect::Authority_AddMadness(float amountToAdd)
{

}

void USurvivorMadnessEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USurvivorMadnessEffect, _madnessAmount);
}

USurvivorMadnessEffect::USurvivorMadnessEffect()
{
	this->_madnessAmount = 0.000000;
	this->_madnessThresholds = TArray<FDBDTunableRowHandle>();
	this->_insaneSkillCheckChances = TArray<FDBDTunableRowHandle>();
	this->madnessStatusViewId = NAME_None;
}

#include "GeneratorBlastMinePlacerComponent.h"
#include "Net/UnrealNetwork.h"

void UGeneratorBlastMinePlacerComponent::OnRep_BlastMine()
{

}

void UGeneratorBlastMinePlacerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGeneratorBlastMinePlacerComponent, _blastMine);
}

UGeneratorBlastMinePlacerComponent::UGeneratorBlastMinePlacerComponent()
{
	this->_mineRelativeHeightFromGenerator = 157.500000;
	this->_blastMine = NULL;
}

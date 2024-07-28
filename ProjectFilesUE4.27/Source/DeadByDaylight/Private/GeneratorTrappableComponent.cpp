#include "GeneratorTrappableComponent.h"
#include "EGeneratorTrapType.h"
#include "Net/UnrealNetwork.h"

void UGeneratorTrappableComponent::OnRep_TrapsOnGenerator()
{

}

bool UGeneratorTrappableComponent::GetHasTrap(const EGeneratorTrapType trapType)
{
	return false;
}

bool UGeneratorTrappableComponent::GetHasAnyTrap()
{
	return false;
}

void UGeneratorTrappableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGeneratorTrappableComponent, _trapsOnGenerator);
}

UGeneratorTrappableComponent::UGeneratorTrappableComponent()
{
	this->_trapsOnGenerator = TArray<EGeneratorTrapType>();
}

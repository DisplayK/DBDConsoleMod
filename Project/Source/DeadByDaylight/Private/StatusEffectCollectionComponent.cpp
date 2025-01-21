#include "StatusEffectCollectionComponent.h"
#include "Net/UnrealNetwork.h"

void UStatusEffectCollectionComponent::OnRep_Array()
{

}

void UStatusEffectCollectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UStatusEffectCollectionComponent, _array);
}

UStatusEffectCollectionComponent::UStatusEffectCollectionComponent()
{
	this->_array = TArray<UStatusEffect*>();
	this->_local_oldArray = TArray<UStatusEffect*>();
}

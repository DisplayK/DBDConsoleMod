#include "SpecialBehaviourInteractable.h"
#include "Net/UnrealNetwork.h"

void ASpecialBehaviourInteractable::OnRep_SpecialBehaviourOwner()
{

}

void ASpecialBehaviourInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASpecialBehaviourInteractable, _specialBehaviourOwner);
}

ASpecialBehaviourInteractable::ASpecialBehaviourInteractable()
{
	this->_specialBehaviourOwner = NULL;
}

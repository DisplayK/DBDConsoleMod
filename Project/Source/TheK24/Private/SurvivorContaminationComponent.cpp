#include "SurvivorContaminationComponent.h"
#include "EContaminator.h"
#include "Net/UnrealNetwork.h"

void USurvivorContaminationComponent::OnRep_IsContaminated()
{

}

void USurvivorContaminationComponent::OnRep_InjectSerumInteractions()
{

}

void USurvivorContaminationComponent::Multicast_OnContaminated_Cosmetic_Implementation(EContaminator contaminator)
{

}

bool USurvivorContaminationComponent::IsContaminated() const
{
	return false;
}

void USurvivorContaminationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USurvivorContaminationComponent, _isContaminated);
	DOREPLIFETIME(USurvivorContaminationComponent, _injectSerumChargeable);
	DOREPLIFETIME(USurvivorContaminationComponent, _injectSerumInteractions);
}

USurvivorContaminationComponent::USurvivorContaminationComponent()
{
	this->_injectSerumChargeable = NULL;
	this->_hinderedEffect = NULL;
	this->_injectSerumInteractionsClasses = TArray<TSubclassOf<UInteractionDefinition>>();
	this->_injectSerumInteractions = TArray<UInteractionDefinition*>();
}

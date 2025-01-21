#include "ContextualQuestComponent.h"
#include "Net/UnrealNetwork.h"

void UContextualQuestComponent::OnRep_SpecialBehaviourObjectsInfo()
{

}

void UContextualQuestComponent::Authority_DebugRemoveSpecialBehaviour(FName id)
{

}

void UContextualQuestComponent::Authority_DebugAddSpecialBehaviour(FName id, float amountRequired)
{

}

void UContextualQuestComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UContextualQuestComponent, _specialBehaviourObjectsInfo);
}

UContextualQuestComponent::UContextualQuestComponent()
{
	this->_specialBehaviourObjectsInfo = TArray<FSpecialBehaviourObjectsInfo>();
	this->_isInitialized = false;
}

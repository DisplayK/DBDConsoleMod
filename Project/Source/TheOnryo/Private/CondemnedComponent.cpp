#include "CondemnedComponent.h"
#include "Net/UnrealNetwork.h"

class ASlasherPlayer;

void UCondemnedComponent::OnRep_HoldingVHS()
{

}

void UCondemnedComponent::OnRep_CondemnedLevel(const float previousValue)
{

}

void UCondemnedComponent::OnKillerSet(ASlasherPlayer* killer)
{

}

bool UCondemnedComponent::IsHoldingVHS() const
{
	return false;
}

bool UCondemnedComponent::IsFullyCondemned() const
{
	return false;
}

bool UCondemnedComponent::IsCondemned() const
{
	return false;
}

float UCondemnedComponent::GetCondemnedPercent() const
{
	return 0.0f;
}

float UCondemnedComponent::GetCondemnedLevel() const
{
	return 0.0f;
}

void UCondemnedComponent::DBD_SetCondemnMoriableAndDownAllSurvivors()
{

}

void UCondemnedComponent::DBD_SetCondemnedLevel(const float level)
{

}

void UCondemnedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCondemnedComponent, _condemnedLevel);
	DOREPLIFETIME(UCondemnedComponent, _isHoldingVHS);
}

UCondemnedComponent::UCondemnedComponent()
{
	this->_analyticScoreTag = TArray<FGameplayTag>();
	this->_condemnedLevel = 0.000000;
	this->_isHoldingVHS = false;
	this->_condemnKillerInstinctEffect = NULL;
	this->_reactivateCondemnProgressEvents = TArray<FGameplayTag>();
	this->_tapeItemId = TEXT("Item_Camper_OnryoTape");
}

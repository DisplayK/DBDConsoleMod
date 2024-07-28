#include "FlurryComboScoreComponent.h"
#include "Net/UnrealNetwork.h"

void UFlurryComboScoreComponent::OnRep_ComboScore() const
{

}

void UFlurryComboScoreComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UFlurryComboScoreComponent, _comboScore);
}

UFlurryComboScoreComponent::UFlurryComboScoreComponent()
{
	this->_comboScore = 0.000000;
	this->_thresholds = TArray<float>();
	this->_thresholdsScoreForAudio = TArray<float>();
	this->_comboScoreEvents = TArray<FGameplayTag>();
}

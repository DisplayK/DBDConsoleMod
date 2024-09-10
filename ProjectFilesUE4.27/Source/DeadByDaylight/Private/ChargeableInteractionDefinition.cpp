#include "ChargeableInteractionDefinition.h"
#include "ESkillCheckCustomType.h"

class ADBDPlayer;
class UChargeableComponent;
class ACollectable;

bool UChargeableInteractionDefinition::ShouldShowSpeedProficiencyForMultipleInteractors() const
{
	return false;
}

void UChargeableInteractionDefinition::SetTutorialChargeableMultiplier(float multiplierValue)
{

}

void UChargeableInteractionDefinition::SetSpeedBase(float speedBase)
{

}

void UChargeableInteractionDefinition::SetChargeableComponent(UChargeableComponent* chargeableComponent, bool isNullAllowed)
{

}

void UChargeableInteractionDefinition::OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type)
{

}

void UChargeableInteractionDefinition::OnSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type)
{

}

bool UChargeableInteractionDefinition::IsChargeComplete(const ADBDPlayer* currentlyInteractingPlayer) const
{
	return false;
}

bool UChargeableInteractionDefinition::HasSkillCheckHappened(const ADBDPlayer* character) const
{
	return false;
}

float UChargeableInteractionDefinition::GetTunableValue(FName TunableValueID, float defaultValue) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetSuccessProbability_Implementation() const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckProbability(const ADBDPlayer* interactingPlayer) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckFailureTimePenalty_Implementation() const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckFailurePercentPenalty(const ADBDPlayer* player) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckDifficulityModifier_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetSkillCheckCharge_Implementation(ADBDPlayer* player, bool success, bool bonus, ESkillCheckCustomType type) const
{
	return 0.0f;
}

int32 UChargeableInteractionDefinition::GetPipsPassed() const
{
	return 0;
}

float UChargeableInteractionDefinition::GetPerkMultiplier_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetMultiplicativeLuckBonus_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetMaxCharge() const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetItemEfficiencyModifier_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetInteractionChargeSpeedMultiplier_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetGoodSkillCheckSuccessPercentReward(const ADBDPlayer* player) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetChargeSpeedModifier(const ADBDPlayer* character) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetChargeAmountForTime(float deltaSeconds, ADBDPlayer* character) const
{
	return 0.0f;
}

UChargeableComponent* UChargeableInteractionDefinition::GetChargeableComponent() const
{
	return NULL;
}

float UChargeableInteractionDefinition::GetBonusSkillCheckZoneSizeModifier_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetBonusSkillCheckSuccessPercentReward(const ADBDPlayer* player) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetAdditiveLuckBonus_Implementation(const ADBDPlayer* character) const
{
	return 0.0f;
}

float UChargeableInteractionDefinition::GetAdditiveChargeTimeReductionAsMultiplier(const ADBDPlayer* character) const
{
	return 0.0f;
}

void UChargeableInteractionDefinition::Authority_ChargeWithItem(float deltaSeconds, ACollectable* item, ADBDPlayer* character)
{

}

void UChargeableInteractionDefinition::Authority_AddCharge(float deltaSeconds, ADBDPlayer* character, bool isChargeFromItem)
{

}

UChargeableInteractionDefinition::UChargeableInteractionDefinition()
{
	this->StopInteractionOnChargeComplete = false;
	this->HasProgressivelyHarderSkillChecks = false;
	this->ProgressiveDifficultyModifier = 0.000000;
	this->ProgressBarType = EChargeableInteractionBarType::VE_Normal;
	this->ProgressPips = TArray<float>();
	this->HideProgressBar = false;
	this->ShowItemIcon = false;
	this->_chargeableComponent = NULL;
	this->_tutorialChargeableMultiplier = 1.000000;
	this->ShowSpeedProficiencyForMultipleInteractors = false;
}
